# Write your MySQL query statement below
select visit.customer_id , count(*) as count_no_trans from  Visits  as visit 
    left join 
    Transactions as trans 

    on visit.visit_id = trans.visit_id  
    where trans.visit_id is null 
    group by  visit.customer_id  ;