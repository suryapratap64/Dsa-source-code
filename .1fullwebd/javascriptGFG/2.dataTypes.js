//Primitive data types
// 1. Number
// Represents numeric values. It can be integer, float, or exponential numbers.
// The numeric precision is 53 bits, allowing for an accurate representation of integer values ranging from -2^53 + 1 to 2^53 – 1.


let n=10;
console.log(n);
let pi=3.14;
console.log(pi);
let a  =  156e5;
let b =   156e-5;
console.log(a);
console.log(b);
let h = 999999999999999;
let y = 9999999999999999;
console.log(h);
console.log(y);

// Floating Point Precision:
var x = 0.22 + 0.12;   //x will be 0.33999999999999997
//To solve this problem, multiply and divide:
let x = 0.22 + 0.12;
let y = (0.22 * 10 + 0.12 * 10) / 10;
console.log(x);
console.log(y);


// JavaScript uses the `+` operator for both addition and concatenation.
// Numbers are added, when strings are concatenated.





// Adding two numbers
let x = 10;
let y = 15;
let z = x + y;
console.log(z);

// Concatenating two strings:

let a = "10";
let b = "30";
let c  = a + b;
console.log(c);

// 6. Numeric Strings:
// JavaScript automatically converts the numeric strings to numbers in most operations like.
let x  = "100" / "10";
let y  = "100" * "10";
let z = "100" - "10";
console.log(x);
console.log(y);
console.log(z);






// 2. String
// Represents a sequence of characters. It can be a single character or a series of characters.

let s='surya';

console.log(s);




// 3. Boolean
// Represents a logical entity and can have two values: true or false.
// 4. Undefined
// Represents an undefined value.

let newVar;
console.log(newVar)
// Output
// undefined

function sayhi(name) {
    console.log(`hi ${name}`);
}
x = sayhi('hike');
console.log(`value in x= ${x}`);
// Output
// hi hike
// value in x= undefined

const person={name:'surya',age:21,city:'delhi'};
console.log(person.name);
console.log(person.phone);
// Output
// surya
// undefined



// 5. Null
// Represents a null

const var1 = null;
if (var1) {
    console.log('var1 is not null');
} else {
    console.log('var1 is null');
}
// Output
// var1 is null




// 6. Symbol
// Represents a unique value

let symbol1 = Symbol("surya") 
let symbol2 = Symbol("surya") 

// Each time Symbol() method  
// is used to create new global 
// Symbol 
console.log(symbol1 == symbol2); 
// Output
// false



// 7. BigInt
// Represents large integers

let num = 1234567890123456789012345678901234567890n;
console.log(num);
// Output
// 1234567890123456789012345678901234567890


// Array consisting of both
// Number and BigInt
let arr = [4, 2, 5n, 2n]

// Sorting the array
arr.sort()

console.log(arr)  // [2, 2n, 4, 5n]


// Non-primitive data types
// 1. Object
// 2. Array
// 3. Function
// 4. Date
// 5. RegExp
// 6. Set
// 7. Map
// 8. WeakSet