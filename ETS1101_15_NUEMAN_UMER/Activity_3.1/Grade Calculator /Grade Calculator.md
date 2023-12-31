                    Analysis

Input:
The program prompts the user for test results, quiz results, project results, assignment results, and final exam results, each with specific maximum values. The input is validated to ensure it falls within the specified range.

Process:
The program calculates the total score by summing up the individual scores. It then determines the lettered grade based on predefined grade ranges.

Output:
The program displays the calculated lettered grade based on the total score.

                  Algorithm Design (Pseudocode)
1. Display "Grade Calculator" title
2. Declare variables: test, quiz, project, assignment, finalmark, total
3. Repeat the following steps for each category of results (test, quiz, project, assignment, finalmark):
   a. Prompt user for input: "Please enter your [category] results out of [maximum value]: "

   b. Read user input and store it in the corresponding variable (e.g., test)

   c. Validate input: If input is greater than the specified maximum value, display an error message and repeat step b
4. Calculate total = test + quiz + project + assignment + finalmark
5. Determine lettered grade based on total:
   a. If total >= 90, display "Your grade is: A+"
   
   b. Else if total >= 80, display "Your grade is: A"

   c. Else if total >= 75, display "Your grade is: B+"

   d. Else if total >= 60, display "Your grade is: B"

   e. Else if total >= 55, display "Your grade is: C+"

   f. Else if total >= 45, display "Your grade is: C"

   g. Else if total >= 30, display "Your grade is: D"

   h. Else, display "Your grade is: F"
6. Display "Thank you for using the program."
9. End program
