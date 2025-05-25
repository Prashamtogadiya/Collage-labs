const express = require('express');
const app = express();

const bodyParser = require('body-parser');
app.use(bodyParser.urlencoded());

const student = [
    {
        id: 1,
        name: "Jevin",
        sem: 3,
        department: "B.Tech",
        branch: "CSE"
    },
    {
        id: 2,
        name: "Dhaval",
        sem: 3,
        department: "B.Tech",
        branch: "CSE"
    },
    {
        id: 3,
        name: "Ashish",
        sem: 3,
        department: "B.Tech",
        branch: "Civil"
    }
]

// Crete
app.post('/student',(req,res)=>{
    student.push(req.body);
    res.send("Student added");
});

// Read
app.get('/student',(req,res)=>{
    res.send(student);
})
//Search
app.get('/student/:id',(req,res)=>{
    const ans = student.find(stu=>stu.id==req.params.id);
    res.send(ans);
})

// Update
app.patch('/student/:id',(req,res)=>{
    const idToEdit = student.findIndex(stu=>stu.id==req.params.id)
    student[idToEdit].id = req.params.id
    res.send("Student updated")
})

// Delete
app.delete('/student/:id',(req,res)=>{
    const idToEdit = student.findIndex((stu)=>{
        if(stu.id==req.params.id){
            return true;
        }
    });
    student.splice(idToEdit,1);
    res.send("Student deleted");
});

app.listen(3000,()=>{
    console.log("Server is started");
})