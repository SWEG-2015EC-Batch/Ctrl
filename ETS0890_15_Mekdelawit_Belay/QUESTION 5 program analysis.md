Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, tax: 15%).
1,PROBLEM ANALYSIS 
1.1,Input-----weekly working hours, bonus rate per hour, gross salary,
1.2,output-----base salary, net salary and bonus payment 
1.3,operation/process
    -read weekly working hours,employee name,gross salary,bonus
	-initiallize overtime from 0,
	-define pension rate and tax rate as constant 
    -calculate base salary=gross salary-tax-pension 
    -calculate net salary= gross salary-tax-pension+overtime 
    -calculate bonus payment= overtime or bonus rate per hour* weekly working hour-56 
    -to calculate the above operation
     1,calculate tax=taxrate*gross salary
     2,calculate pension=pensionrate*gross salary
    -display base salary, net salary and bonus payment 
 
2,Pseudocode Algorithm 
step1= start 
step2=employee name, read weekly working hours, bonus rate per hour and gross salary 
step3=initiallized overtime from 1
step4=define pansion rate and tax rate as constant  
step5=calculate tax=tax rate*gross salary
step6=calculate pension=pension*gross salary
step7=calculate base salary=gross salary-tax-pension
step8=calculate net salary= gross salary-tax-pension+overtime 
step9=calculate bonus payment= overtime or bonus rate per hour* weekly working hour-56 
step10=display results 
step11=end 
