program analysis
Input:
•	➢ gross salary,
•	➢ worked hours,
•	➢ over-time bonus rate/hour
Output:
➢ Net-Pay of an employee
Operation:
•	➢ Calculate pension, income tax
o	if gross salary <=200 income tax rate=0
o	if gross salary is between 200 and 600 income tax rate=10%
o	if gross salary is between 1200 and 600 income tax rate=15%
o	if gross salary is between 1200 and 2000 income tax rate= 20%
o	if gross salary is between 2000 and 3500 income tax rate=25%
o	if gross salary>= 3500 income tax rate=30%
•	pension = gross salary * 7/100
•	income tax = gross salary * tax rate
•	➢ Check if the employee worked hoursexceed 40 hrs.
•	➢ bonus payment= overtime or bonus rate per hour* weekly working hour-40
•	➢ Compute Net-Pay of an employee
•	✓ net Salary = (gross Salary – pension –income tax) + Overtime payment
Pseudocode:
•	step1,start
•	step2,read gross salary,worked hours,over-time bonus rate/hour
•	step3,calculte pension = gross salary * 7/100
•	step4,check
o	if gross salary <=200 income tax rate=0
o	if gross salary is between 200 and 600 income tax rate=10%
o	if gross salary is between 1200 and 600 income tax rate=15%
o	if gross salary is between 1200 and 2000 income tax rate= 20%
o	if gross salary is between 2000 and 3500 income tax rate=25%
o	if gross salary>= 3500 income tax rate=30%
•	step5,calaculate income tax = gross salary * tax rate
•	step6,calculate bonus payment= overtime or bonus rate per hour* weekly working hour-40
•	step7,calculate net Salary = (gross Salary – pension –income tax) + Overtime payment
•	step8,print net salary
•	step9,end


