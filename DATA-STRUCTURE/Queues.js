// QUEUES -> ENQUEUE DEQUEUE

let queue = []
let front = -1
let rear = -1
let lenghtOfQueue = 30
function ENQUEUE(element) {
    if (rear > lenghtOfQueue) return "OVERFLOW";
     if (front == -1) front = 0;
     rear += 1
     queue[rear] = element
    return "inserted";
}

function DEQUEUE() {
    if (front == -1 && front > rear) return "UNDERFLOW";
    queue[front] = null;
    if (front == rear) front = rear = -1;
    else front += 1;
    return 'deleted'
}

console.log(ENQUEUE(10))
console.log(ENQUEUE(20))
console.log(ENQUEUE(30))
console.log(ENQUEUE(40))
console.log(DEQUEUE())
console.log(DEQUEUE())
console.log(queue)