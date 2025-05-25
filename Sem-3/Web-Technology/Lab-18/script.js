const express = require('express');

const app = express();

app.get('/',(req,res)=>{
    res.send(
        `
        <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Route demo</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        text-align: center;
      }
      .links {
        display: flex;
        align-items: top;
        justify-content: center;
      }
      a{
        color: black;
        text-decoration: none;
        padding: 10px;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>Welcome to our website</h1>
      <div class="links">
      <a href="/">Home</a>
        <a href="/about">About</a>
        <a href="/contact">Contact</a>
        <a href="/help">Help</a>
      </div>
      <div class="answer">
        Home page
      </div>
    </div>
  </body>
</html>
        `
    )
})
app.get('/about',(req,res)=>{
    res.send(
        `
        <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Route demo</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        text-align: center;
      }
      .links {
        display: flex;
        align-items: top;
        justify-content: center;
      }
      a{
        color: black;
        text-decoration: none;
        padding: 10px;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>Welcome to our website</h1>
      <div class="links">
        <a href="/">Home</a>
        <a href="/about">About</a>
        <a href="/contact">Contact</a>
        <a href="/help">Help</a>
      </div>
      <div class="answer">
        AboutUs page
      </div>
    </div>
  </body>
</html>
        `
    )
})
app.get('/contact',(req,res)=>{
    res.send(
        `
        <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Route demo</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        text-align: center;
      }
      .links {
        display: flex;
        align-items: top;
        justify-content: center;
      }
      a{
        color: black;
        text-decoration: none;
        padding: 10px;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>Welcome to our website</h1>
      <div class="links">
      <a href="/">Home</a>
        <a href="/about">About</a>
        <a href="/contact">Contact</a>
        <a href="/help">Help</a>
      </div>
      <div class="answer">
        Contact page
      </div>
    </div>
  </body>
</html>
        `
    )
})
app.get('/help',(req,res)=>{
    res.send(
        `
        <!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Route demo</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        text-align: center;
      }
      .links {
        display: flex;
        align-items: top;
        justify-content: center;
      }
      a{
        color: black;
        text-decoration: none;
        padding: 10px;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>Welcome to our website</h1>
      <div class="links">
      <a href="/">Home</a>
        <a href="/about">About</a>
        <a href="/contact">Contact</a>
        <a href="/help">Help</a>
      </div>
      <div class="answer">
        Help page
      </div>
    </div>
  </body>
</html>
        `
    )
})

app.listen(3000,()=>{
    console.log('Server Started');
})