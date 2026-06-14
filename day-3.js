// PROBLEM 11: Find the Sum of an Array
const sumArray = (arr) => {
    let sum = 0;
    
    for (const num of arr) {
        sum += num;
    }
    
    return sum;
};


console.log(sumArray([1, 2, 3, 4, 5]));


// PROBLEM 12 : Find Maximum value in Array

const findMaximum = (arr) =>{
    let maxVal = arr[0];

    for (let i = 0; i<arr.length; i++) {
        if(arr[i] >= maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

console.log(findMaximum([3,1,7,2,9]));