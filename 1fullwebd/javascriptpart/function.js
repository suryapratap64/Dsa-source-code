function sum (a,b){
    //do thing iput and return output
    return a+b;
}
const value =sum(1,4)
console.log(value)

//next program
function greet(){
    console.log("hello world");
}
//remainig some thing

//function arguments 
function findsum(n){
    let ans=0;
    for(let i=0;i<n;i++){
        ans=ans+i;
    }
 
    return ans;

    
}
console.log(findsum(7));
//call back functin multipletimes
function square(n){
    return n*n
}
function sumofsquare(a,b){
    const val1=square(a)
    const val2=square(b)
    return val1+val2
}
 const ans=sumofsquare(3,4)
 console.log(ans)