let arr = {
    0: 10,
    1: 20,
    2: 30,
    3: 40,
    4: 50,
    5: 60,
    6: 70,
    7: 80,
};
/**
 *
 * @param {Number} element // here user give me the element that they wanted to remove
 * @param {Object} arr // and form where
 * @returns
 */
function removeElement(element, arr) {
    //so basically in normal array we can directly access the element index just giving the elemeent but here we have to find where it is.
    let i = 0;
    while (i != undefined) {
        if (arr[i] == element) {
            //   console.log(arr[i], i)
            let j = i;
            while (j != undefined) {
                if (arr[j + 1] == undefined) {
                    // console.log(arr[j])
                    delete arr[j];
                    break;
                }
                arr[j] = arr[j + 1];
                j++;
            }
        }
        if (arr[i] == undefined) {
            break;
        }
        i++;
    }
    return arr;
}
console.log(removeElement(80, arr));
