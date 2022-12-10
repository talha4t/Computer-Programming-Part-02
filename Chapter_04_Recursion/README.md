# Recursion  
---
## *Notes*  

  
- যখন ফাংশনের বাহিরে কোন ভ্যরিয়েবল ডিক্লিয়ার করা হবে তা জিরো দিয়ে এসাইন হয়ে থাকবে। ফাংশনের বাহিরে ব্যবহার করাকে __গ্লোবাল ভ্যরিয়েবল__ বলে।  
- কোন ফাংশনের ভ্যরিয়েবল ডিক্লিয়ার করা হবে তাকে __লোকাল ভ্যরিয়েবল__ বলে এবং এতে কোন মান না দিলে এটি গারবেজ ভ্যলু স্টোর করে।   
- ফাংশনের ভেতরে কোন ভ্যরিয়েবল পাস করে এবং সেই ফাংশনে ভ্যরিয়েবলের মান পরিবর্তন করলে তা আবার মেইন ফাংশন থেকে প্রিন্ট করলে ভ্যরিয়েবলের মানের কোন পরিবর্তন হবে না। কিন্তু ভ্যরিয়েবল পাস না করে ফাংশন কল করে সেই ফাংশন এ পাস না করা কৃত ভ্যরিয়েবল এর মান পরিবর্তন করলে তা মেইন ফাংশনেও পরিবর্তন হবে। 