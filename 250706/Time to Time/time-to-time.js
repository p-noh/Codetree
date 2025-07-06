const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');
const [a, b, c, d] = input[0].split(' ').map(Number);
// Please Write your code here.
const startTime = 60 * a + b;
const finishTime = 60 * c + d;
console.log(finishTime - startTime);