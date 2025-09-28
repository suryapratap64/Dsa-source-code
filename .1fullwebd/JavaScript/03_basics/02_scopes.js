//var c = 300
let a = 300
if (true) {
    let a = 10
    const b = 20
    // console.log("INNER: ", a);
    
}



// console.log(a);
// console.log(b);
// console.log(c);


function one(){
    const username = "hitesh"

    function two(){
        const website = "youtube"
        console.log(username);
    }
    // console.log(website);

     two()

}

// one()

if (true) {
    const username = "hitesh"
    if (username === "hitesh") {
        const website = " youtube"
        // console.log(username + website);
    }
    // console.log(website);
}

// console.log(username);


// ++++++++++++++++++ interesting ++++++++++++++++++


console.log(addone(5))

function addone(num){
    return num + 1
}



addTwo(5)
const addTwo = function(num){
    return num + 2
}

// 🔹 Quick Comparison Table
// Feature	              var	                           let	                          const
// Scope	           Function/global	                   Block	                      Block
// Hoisting	          Yes, initialized as undefined	       Yes, TDZ                     	Yes, TDZ
// Redeclaration	     ✅ Allowed	                     ❌ Not allowed	               ❌ Not allowed
// Reassignment	     ✅ Allowed	                         ✅ Allowed	                   ❌ Not allowed
// Best Practice	     Avoid (old JS)	                  ✅ Use for vars that change	✅ Use for constants & objects
