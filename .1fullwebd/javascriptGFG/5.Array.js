// Create Array
let a=[];
let b=[8,9,7];
let c=new Array(1,2,3);
console.log(a);
console.log(b);
console.log(c);

console.log(b[2]);
// Add Element to the end of Array
a.push("Node.js");

// Add Element to the beginning
a.unshift("Web Development");

//remove element
// The pop() method removes an element from the last index of the array.
// The shift() method removes the element from the first index of the array.
// The splice() method removes or replaces the element from the array.


// Removes and returns the last element
let lst = a.pop();
console.log("After Removing the last: " + a);

// Removes and returns the first element
let fst = a.shift();
console.log("After Removing the First: " + a);

// Removes 2 elements starting from index 1
a.splice(1, 2);
console.log("After Removing 2 elements starting from index 1: " + a);

//length of array
let len=a.length();

//iterating
// Iterating through for loop
for (let i = 0; i < a.length; i++) {
    console.log(a[i])
}
//using forEach approach
// Iterating through forEach loop
a.forEach(function myfunc(x) {
    console.log(x);
});

// Array Concatenation
// Creating an Array and Initializing with Values
let a = ["HTML", "CSS", "JS", "React"];
let b = ["Node.js", "Expess.js"];

// Concatenate both arrays
let concateArray = a.concat(b);

console.log("Concatenated Array: ", concateArray);

// Creating an Array and Initializing with Values
let x= ["HTML", "CSS", "JS"];

// Convert array ot String
console.log(x.toString());
//op
// HTML,CSS,JS
