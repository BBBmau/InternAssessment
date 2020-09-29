
-- Write a query that returns all posts posted in the past 24 hours
SELECT *
FROM LoveCouch.Posts
WHERE DATE = current_date;

-- Write a query that returns all the topics and the number of posts for each topic
SELECT topic, COUNT(*)
FROM LoveCouch.Posts
GROUP BY topics; 

-- Write a query that returns all anonymous posts posted in the last week, sorted
-- by newest to oldest
SELECT *
FROM LoveCouch.Posts
ORDER BY date_posted DESC
WHERE is_anonymous = TRUE AND date_posted BETWEEN SYSDATE() AND DATEADD(day, -7, SYSDATE());

-- Write a query to return all posts that have the word “Love” in the title.
SELECT *
FROM  LoveCouch.Posts
WHERE title LIKE '%Love%';
