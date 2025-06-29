// Begin with the keyword function followed by,
// A user-defined function name (In the above example, the name is sum)
// A list of parameters enclosed within parentheses and separated by commas (In the above example, parameters are x and y)
// A list of statements composing the body of the function enclosed within curly braces {} (In the above example, the statement is “return x + y”).
function sum(x,y){
    return x+y;
}
console.log(sum(4,5));

// Function Expression
const mul =function(x,y){
    return x*y;
}
console.log(mul(6,7));

//Arrow Functions
const a = ["Hydrogen", "Helium", "Lithium", "Beryllium"];

const a2 = a.map(function (s) {
    return s.length;
});

console.log("Normal way ", a2);

const a3 = a.map((s) => s.length);

console.log("Using Arrow Function ", a3);

//output
// Normal way  [ 8, 6, 7, 9 ]
// Using Arrow Function  [ 8, 6, 7, 9 ]

//Callback Functions
function num(n, callback) {
    return callback(n);
}

const double = (n) => n * 2;

console.log(num(5, double));

//op
// 10