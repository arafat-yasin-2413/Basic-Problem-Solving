// PROBLEM 11: Find the Sum of an Array
const sumArray = (arr) => {
    let sum = 0;
    
    for (const num of arr) {
        sum += num;
    }
    
    return sum;
};


// console.log(sumArray([1, 2, 3, 4, 5]));


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

// console.log(findMaximum([3,1,7,2,9]));



// PROBLEM 13 : Remove Duplicate from array

const removeDuplicateFromArray = (arr)=>{
    return arr.filter((item,index)=> arr.indexOf(item) === index);
};

// console.log(removeDuplicatesFilter([1, 2, 2, 3, 3, 4]));


// PROBLEM 14 : Flatten an Array
const flattenArrayWithFlat = (arr) => {
    return arr.flat();
};

// console.log(flattenArrayWithFlat([1, [2, 3], [4, 5]]));


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

// console.log(chunkArray([1, 2, 3, 4, 5], 2));



function removeDuplicates (arr){
    return [...new Set(arr)];
}

const numbers = [1,2,2,4,5,5,1];
// console.log(removeDuplicates(numbers));

function revString (str){
    return str.split('').reverse().join('');
}

// console.log(revString("react"));

function isPalindrome (str){
    const reversed = str.split('').reverse().join('');
    return str === reversed;
}

// const numbers = [3,4,5,6,7];
const maxNum = Math.max(...numbers)

const users = [
  { name: "Zubair", age: 24 },
  { name: "Sifath", age: 16 },
  { name: "Anika", age: 19 },
  { name: "Tamim", age: 15 }
];

const adults = users.filter(user => user.age >=18);
console.log(adults);

function capitalizeWords (sentence){
    return sentence.split('').map(capitalizeWords.cahrAt(0).toUpperCase() + word.slice(1) ).join()
}