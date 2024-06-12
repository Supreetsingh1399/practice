const mongoose = require('mongoose');
const express = require('express');
const morgan = require('morgan');
const expressValidator = require('express-validator');
const app = express();

app.use(express.json());
// const bodyParser = require('body-parser');
const port = 8080;
const postRoutes = require('./routes/post');

// Set URI directly
const URI = 'mongodb://localhost:27017/';

// Connect to db
mongoose.connect(URI)
  .then(() => console.log('DB connected'))
  .catch(err => console.log(`DB connection error: ${err.message}`));

// Middleware 
app.use(morgan('dev'));
// app.use(bodyParser.json());
app.use(express.json());
app.use('/', postRoutes);
app.use(expressValidator());

// Start the server
app.listen(port, (err) => {
  if (err) {
    console.error(`Error starting server: ${err.message}`);
  } else {
    console.log(`Server is running on port ${port}`);
  }
});