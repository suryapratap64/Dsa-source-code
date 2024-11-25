
// const express = require('express')
// const app = express()
// const port = 3000
// //create a todo app server lets todo used the server
// app.get('/', (req, res) => {
//   //res means some responding feed back from server
//   //spring boot java
//   //create an http server rust using actix web
//   //create an http server using golang using gorilla frame work
//   res.send('Hello World!')
//   //data base call 
// })

// app.listen(port, () => {
//   console.log(`Example app listening on port ${port}`)
// })


// //technique two
const express =require('express')
const app =express()
const port=3000
app.get("/route-handler",function(req,res){
    //header body,header query 
   
})
// app.post('/comnversation',(rreq,res)=>{
//   console.log(req.headers["authorization"])
//   res.send({
//     msg:"2+2=4"
//   })
// })
// app.get('/', (req, res) => {
   
//     res.send('Hello World!')

//     res.jsom({
//       name:"hakirath",
//       age:21
//   })    
//   })
  
  app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
  })