6,A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it will take to send a file, given the file size. 
1,PROBLEM ANALYSIS
1.1,INPUT=transmition rate,number of bytes
1.2,OUTPUT=time taken in second, time taken in hour, time taken in day
1.3,OPERATION/PROCESS
    -read number of bytes
    -define transmition rate as constant
    -calculate time taken in second=numberofbytes/transmission_rate
    -calculate timetakeninhour=timetaken/3600
    -calculate timetakenindays=timetakeninhour/24
    -display the result
2,Pseudocode Algorihm
step1=start
step2=read number of bytes
step3=define transmition rate as constant
step4=calculate time taken in second=numberofbytes/transmission_rate
step5=calculate timetakeninhour=timetaken/3600
step6=calculate timetakenindays=timetakeninhour/24
step7=display the result
step8=end
