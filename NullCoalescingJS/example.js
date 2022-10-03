class BlogPost {
    constructor(newData){
        this.blogTitle = newData.blogTitle ?? "New Blog Title";
        this.blogAuthor = newData.blogAuthor ?? "Author Name Here";
        this.publishDate = newData.publishDate ?? new Date().toDateString();
    }
}

let exampleBlogPost1 = new BlogPost({blogTitle:"Title is not default data"});
let exampleBlogPost2 = new BlogPost({blogAuthor:"Bigfoot", publishDate: new Date('Dec 31, 1999').toDateString()});

console.log(exampleBlogPost1)

console.log(exampleBlogPost2)