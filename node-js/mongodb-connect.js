const mongoose = require('mongoose');

// MongoDB connection URL
const url = 'mongodb://localhost:27017/mydatabase';

// Connect to MongoDB
mongoose.connect(url)
    .then(() => {
        console.log('Connected to MongoDB');
    })
    .catch((error) => {
        console.error('Failed to connect to MongoDB:', error);
    });