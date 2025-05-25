const http = require('http');

const server = http.createServer((req,res)=>{
    res.setHeader('Content-Type', 'text/html');
    if(req.url=='/home'){
        res.end("</h2>You are in the home page</h2>")
    }
    else if(req.url=='/contact'){
        res.end("</h2>You are in the contact page</h2>")
    }
    else if(req.url=='/about'){
        res.end("</h2>You are in the about us page</h2>")
    }
    else{
        res.end("</h2>Page not found</h2>")
    }
})

server.listen(3000,()=>{
    console.log("server running at localhost:3000")
})