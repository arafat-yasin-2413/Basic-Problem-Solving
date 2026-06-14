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



// PROBLEM 13 : Remove Duplicate from array

const removeDuplicateFromArray = (arr)=>{
    return arr.filter((item,index)=> arr.indexOf(item) === index);
};

console.log(removeDuplicatesFilter([1, 2, 2, 3, 3, 4]));


// PROBLEM 14 : Flatten an Array
const flattenArrayWithFlat = (arr) => {
    return arr.flat();
};

console.log(flattenArrayWithFlat([1, [2, 3], [4, 5]]));


// PROBLEM 15 : Chunk an Array
const chunkArray = (arr, size) => {
    const chunked = [];
    let i = 0;

    while (i < arr.length) {
        chunked.push(arr.slice(i, i + size));
        i += size;
    }

    return chunked;
};

console.log(chunkArray([1, 2, 3, 4, 5], 2));