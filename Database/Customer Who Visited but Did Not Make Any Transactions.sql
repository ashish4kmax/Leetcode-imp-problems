# Write your MySQL query statement below
SELECT customer_id , count(*) as count_no_trans from Visits 
where visit_id not in(
SELECT DISTINCT visit_id from Transactions) 
group by customer_id 
order by count_no_trans DESC;
