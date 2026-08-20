
const precedence = {
  '*': 14,
  '/': 14,
  '%': 14,
  '+': 13,
  '-': 13,
  '<<': 12,
  '>>': 12,
  '&': 10,
  '^': 9,
  '|': 8
};


let expression = "a+b*c-d/e*f"
let stack = []

function polishTheExpression(expression) {
    let polish = "";
    for (const element of expression) {
        if(((element >= 'A' && element <= 'Z') || (element >= 'a' && element <= 'z'))) {
            polish += element
        } else {
            if (stack.length == 0) {
                stack.push(element)
            } else {
                for (let i = stack.length - 1; i >= 0; i--) {
                    const stackOpr = stack[i];
                    if (precedence[stackOpr] >= precedence[element]){
                        polish += stackOpr
                        stack.splice(i , 1)
                    }
                }
                stack.push(element)
            }
        }
    }
    if(stack.length != 0) {
       polish += stack.toReversed().join("")
    }
    return polish;
}
console.log(polishTheExpression(expression))