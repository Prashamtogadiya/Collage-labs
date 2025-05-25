const path = require("path")

console.log("basename : " + path.basename('E:\\Jevin\\Web-Technology\\Lab-17\\path.js'))

console.log("dirname : " + path.dirname('E:\\Jevin\\Web-Technology\\Lab-17\\path.js'))

console.log("extname : " + path.extname('E:\\Jevin\\Web-Technology\\Lab-17\\path.js'))

console.log("format : " + path.format({ dir: 'E:\\Jevin\\Web-Technology\\Lab-17', base: 'path.js' }))

console.log("normalize : " + path.normalize('E:\\Jevin\\Web-Technology\\Lab-17'))

console.log("join : " + path.join('E:', 'Jevin', 'Web-Technology', 'Lab-17'))

console.log("resolve : ")

console.log("relative : " + path.relative('E:\\Jevin\\Data-Structure\\Lab-10', 'E:\\Jevin\\Web-Technology\\Lab-1'))    