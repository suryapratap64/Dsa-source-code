//for finding sub part of string
let s1 = 'JavaScript Tutorial';

let s2 = s1.substring(0, 10);

console.log(s2);
// Output
// JavaScript

//Convert String to Uppercase and Lowercase
let s = 'JavaScript';

let uCase = s.toUpperCase();

let lCase = s.toLowerCase();

console.log(uCase);
console.log(lCase);
// Output
// JAVASCRIPT
// javascript


let s='def abc abc abc';
let i=s.indexOf('abc');
console.log(i);

//8. String Replace in JavaScript

// Replace occurrences of a substring with another using replace() method.
let s1 = 'Learn HTML at GfG';

let s2 = s1.replace('HTML', 'JavaScript');

console.log(s2);
// Output
// Learn JavaScript at GfG

// 9. Trimming Whitespace from String

// Remove leading and trailing whitespaces using trim() method.

let s1 = '    Learn JavaScript       ';

let s2 = s1.trim();

console.log(s2);
// Output
// Learn JavaScript

// 10. Access Characters from String

let s1='JavaScript';
let s2=s1[6];
console.log(s2);
s2=s1.charAt(6);
console.log(s2);
// Output
// r
// r

// 11. String Comparison in JavaScript
let s1='surya';
let s2='pratap'

console.log(s1==s2);
console.log(s1.localeCompare(s2));
// Output
// false
// 1

// he Equality operator returns true, whereas the localeCompare method returns the difference of ASCII values.



// 12. Passing JavaScript String as Objects

const s=new String('surya pratap');
console.log(s);
// Output
// String {"surya pratap"}


// NOTE->No, the string created by the new keyword is an object and is not the same as normal strings.


const str1 = new String("GeeksforGeeks");
const str2 = "GeeksforGeeks";

console.log(str1 == str2);
console.log(str1 === str2);
// Output
// true
// false
