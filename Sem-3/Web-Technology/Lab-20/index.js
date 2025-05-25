const express = require("express")
const mongoose = require("mongoose")
const bodyParse = require("body-parser")
const Student = require("./Schema")
const studentRoutes = require("./StudentRoute")

mongoose.connect("mongodb+srv://Darshan:diet23010101171@cluster0.q2pxy.mongodb.net/")
    .then(() => {
        const app = express();
        app.use(bodyParse.urlencoded())

        app.use('/student',studentRoutes);        

        app.listen(3000, () => {
            console.log("Server started");
        })
    })