const http = require('http');
const fs = require('fs');

const server = http.createServer((req, res) => {
  const log= `${Date.now()}: New request received\n`;
  fs.appendFile('./node-js/log.txt', log, (err,data) => {
    res.end('Hello World from node js updated file again!');
  });
});
server.listen(3000, () => {
  console.log('Server is running on port 3000');
});
//npm package nodemon is used to run the server automatically when the file is saved.
// npm run dev is used to run the server. 
//just change the script in package.json file to "dev":"nodemon core-modules.js" 