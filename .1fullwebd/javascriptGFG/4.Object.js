//1. Creation sing Object Literal

let surya={
    name:'surya',
    age:20,
    isActive:true,
    job:'senior software Engineer',
    profession:'web developer',

}
console.log(surya);
console.log(surya.name);
console.log(surya.job);

//2. Creation Using new Object() Constructor
let obj =new Object();
obj.name='surya';
obj.age=30;
obj.houseNO="258/15A"

console.log(obj);
console.log(obj.age)
// Using Bracket Notation
console.log(obj["age"]);

//Modifying Object Properties
obj.age=40;
console.log(obj.age);
//Adding New Properties
obj.color="red";
//Deleting Properties
delete obj.color;
//Checking if a Property Exists
console.log("color" in obj);
console.log("age" in obj);
//output
//false
//true

//merging object
let obj1 = { name: "Sourav" };
let obj2 = { age: 23};

let obj3 = { ...obj1, ...obj2 };
console.log(obj3);
//output
//{name:'sourav',age:'23'}

//obj.length
console.log(Object.keys(obj).length);

