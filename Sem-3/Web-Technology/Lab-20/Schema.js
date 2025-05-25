const mongoose = require('mongoose');

const sch = mongoose.Schema({
    enrollment: String,
    name : String,
    rollNo : Number,
    sem: Number,
    branch: String
})  

module.exports = mongoose.model("Student",sch)