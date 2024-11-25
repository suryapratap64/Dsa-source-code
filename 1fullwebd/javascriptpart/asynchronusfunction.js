// function findsum(n){
//     let ans=0;
//     for(let i=0;i<n;i++){
//         ans=ans+i;
//     }
 
//     return ans;

    
// }
// function findsumtill100(){ []
//     console.log(findsum(100));   
// } 

// setTimeout(findsumtill100,1000)
// console.log("hell o world")
////promise
function suryaAsyncfunction(){
    let p=new Promise(function(resolve){
        //do some async logic here 
     setTimeout(function(){
        resolve("hi there")
     },1000) 
    });
    return p;
}
async function main(){
    //no calll back ,no .then syntax 
    //suryaAsyncfunction().then(function(value){
        //console.log(value);
    //})
    let value=await suryaAsyncfunction()
    console.log(value);
//await call main very advancw await keyword
}
main();
console.log("after main"); 