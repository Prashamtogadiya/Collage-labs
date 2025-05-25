const express = require('express')
const route = express.Router();
const Student = require("./Schema")

// create
route.post('/', async (req, res) => {
    stu = new Student({...req.body})
    const ans = await stu.save();
    res.send(ans);
})

// get all
route.get('/', async (req, res) => {
    const data = await Student.find()
    res.send(data)
})

// get by name
route.get('/:name', async (req,res,next) => {
    const ans = await Student.find({
        name: {
            $regex:req.params.name
        }
    })

    console.log("ans=",ans.length==0)
    if(ans.length!=0) {
        res.send(ans)
    }else {
        console.log("next");
        next()
    }
})
// get by enrollment
route.get('/:enrollment', async (req,res) => {
    console.log("hello");
    
    const ans = await Student.find({
        enrollment: {
            $regex: req.params.enrollment
        }
    }); 
    console.log(ans);
    
    res.send(ans)
})

// update 
route.patch('/:enrollment', async (req, res) => {
    stu = await Student.findOne({enrollment:req.params.enrollment})
    stu.name = req.body.name;
    const ans = await stu.save();
    res.send(ans)
})

// delete
route.delete('/:enrollment', async (req,res) => {
    ans = await Student.deleteOne({enrollment:req.params.enrollment})
    res.send(ans)
})

module.exports = route;