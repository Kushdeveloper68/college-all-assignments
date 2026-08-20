let stack = []
let lengthOfStack = 50
let top = -1;


function pushToStack(element) {
    if(top >= lengthOfStack) {
        console.log('STACK IS OVERFLOW')
        return
    }
    top += 1
    stack[top] = element
    return stack[top]
}

function popFromStack() {
    if(top == -1) {
        console.log("STACK IS UNDERFLOW (EMPTY)")
        return
    }
    top -= 1
    return stack[top]
}

function displayStack() {
    console.log('STACK:')
    for (let i = top; i >= 0; i--) {
   console.log(stack[i])
   
}
console.log('STACK END:')
}

console.log(pushToStack(10))
console.log(pushToStack(20))
console.log(pushToStack(30))
console.log(pushToStack(40))
console.log(popFromStack())
console.log(popFromStack())
console.log(displayStack())