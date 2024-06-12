const mongoose = require('mongoose');
const postSchema = new mongoose.Schema({
    title:{
        type: String,
        required: "Title is required",
        minlength: 4,
        maxlength: 150
    },
    Body:{
        type: String,
        required: "Body is required say again",
        minlength: 4,
        maxlength: 2000
    }
});

module.exports = mongoose.model("Post", postSchema);