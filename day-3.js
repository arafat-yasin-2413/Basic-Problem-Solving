// PROBLEM 11: Find the Sum of an Array
const sumArray = (arr) => {
    let sum = 0;
    
    for (const num of arr) {
        sum += num;
    }
    
    return sum;
};


console.log(sumArray([1, 2, 3, 4, 5]));
