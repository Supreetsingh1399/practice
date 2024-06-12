const fs = require('fs');
const filename = 'target.txt';


// console.log("node js async programming is awesome!") comes first in below command
// fs.watch(filename, () => {
//     console.log(`File ${filename} just changed!`);
//     });
// fs.readFile(filename, (err, data) => {
//     if(err){
//         console.log(err);
//     }
//     // console.log(data);
//     console.log(data.toString());
// });


// but in this it comes after
// const data = fs.readFileSync(filename);
// console.log(data.toString());

// Now using functions to make it more readable
const errHandler = err => console.log(err);
const dataHandler = data => console.log(data.toString());
fs.readFile(filename, (err, data) => {
    if(err){
        errHandler(err);
    }
    dataHandler(data);
});

console.log("node js async programming is awesome!")