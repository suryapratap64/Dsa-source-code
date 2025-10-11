// 1. find() — Find First Matching Element
// Returns the first element that matches the condition.
// Stops searching after the first match.

const nums1 = [1, 5, 10, 15];
const result1 = nums.find(num => num > 8);
console.log(result); // 10
// When to use: You need only one match (first occurrence).

// 2. filter() — Find All Matching Elements
// Returns all elements that match the condition as a new array.

const nums2 = [1, 5, 10, 15];
const result = nums2.filter(num => num > 8);
console.log(result); // [10, 15]
// When to use: You need multiple matches.

// 3. some() — Check If Any Match Exists
// Returns true/false if at least one element matches.

const nums3 = [1, 5, 10, 15];
console.log(nums3.some(num => num > 12)); 
// When to use: Just checking for existence.

// 4. every() — Check If All Match
// Returns true/false if all elements match.


const nums4 = [10, 15, 20];
console.log(nums4.every(num => num > 5)); // true
// When to use: Validate all values meet a condition.

// 5. includes() — Check if Value Exists
// Works for simple values (strings, numbers).


const fruits1 = ['apple', 'banana', 'mango'];
console.log(fruits1.includes('banana')); // true
// When to use: Simple direct check.

// 6. indexOf() — Get Position of Element
// Returns index (or -1 if not found).


const fruits2 = ['apple', 'banana', 'mango'];
console.log(fruits2.indexOf('banana')); // 1
// When to use: Need the index, not just true/false.

// 7. findIndex() — First Match Index
// Like find(), but returns the index.


const nums5 = [1, 5, 10, 15];
console.log(nums5.findIndex(num => num > 8)); // 2


// 8. Manual Loop (for / for...of)
// Most control, but more code.


const nums = [1, 5, 10, 15];
let found = null;
for (let num of nums) {
    if (num > 8) {
        break;
    }
}
console.log(found); // 10


//for each 
//What is forEach?

// forEach is a method of arrays in JavaScript.
// It allows you to iterate over each element of an array and perform an action for each element.
// It does not return a new array — it just executes the function for each item.

const numbers = [1, 2, 3, 4, 5];

numbers.forEach(num => {
  console.log(num);
});


// 👉 Output: 1 2 3 4 5