const http = require('http')

const server = http.createServer((req,res)=>{
    console.log(req.headers)
    res.end("Hello world my friend")
})

server.listen(3000,()=>{
    console.log("server running at localhost:3000")
})