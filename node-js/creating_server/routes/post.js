const express = require('express');
const validator = require('../Validators');
const postController = require('../controllers/post');
const router = express.Router();

router.get('/', postController.getPost);
router.post('/post',validator.createPostValidator , postController.createPost);

module.exports = router;