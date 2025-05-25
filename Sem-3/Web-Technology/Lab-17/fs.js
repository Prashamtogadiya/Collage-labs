const fs = require('fs')

console.log('-------------------------------------Exist-------------------------------------')
fs.exists('E:\\Jevin\\Web-Technology\\Lab-17', (exist) => {
    console.log(exist ? "exist" : "Not exist")
})
console.log('-------------------------------------Data--------------------------------------')
fs.stat('E:\\Jevin\\Web-Technology\\Lab-17', (err, data) => {
    console.log(data)
})

console.log('------------------------------------Print-1------------------------------------')
const data = fs.readFileSync('E:\\Jevin\\Web-Technology\\Lab-17\\path.js')
console.log(data.toString())

console.log('------------------------------------Print-2------------------------------------')
fs.readFile('path.js', (err, data) => {
    console.log(data.toString())
})

fs.writeFile('message.txt', 'Hello Node.js', (err) => {
    if (err) {
        throw err
    }
    console.log("Fil created")
});

console.log('------------------------------------Delete-------------------------------------')
fs.unlink('message.txt', (err) => {
    if (err) throw err

    console.log("File deleted")
})

console.log('-------------------------------------Rename------------------------------------')
fs.rename('path.js', 'path_module.js', (err) => {
    if (err) throw err

    console.log("Renamed")
})
fs.rename('path_module.js', 'path.js', (err) => {
    if (err) throw err

    console.log("Renamed")
})

