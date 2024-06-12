// exports.getPost = (req, res) => {
//     res.send('Hello World from express js');
//   };


//showing in json format
const Post = require('../model/post');
exports.getPost = (_req, res) => {
    res.json({
        posts: [
            { title: 'First post' },
            { title: 'Second post' }
        ]
    });
};



exports.createPost = async (req, res) => {
    const post = new Post(req.body);
    // try {
    //     const result = await post.save();
    //     res.status(200).json({
    //         post: result
    //     });
    // } catch (err) {
    //     res.status(400).json({
    //         error: err
    //     });
    // }
    post.save().then(result => {
        res.status(200).json({
            post: result
        });
    });

};