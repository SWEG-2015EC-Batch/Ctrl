                                Analysis
Input: The program takes user input to determine the type of pattern to display. The specific inputs vary depending on the chosen pattern:

For rectangular patterns (e.g., box, hollow box), the user provides the number of rows and columns.

For triangular patterns (e.g., right-angled triangle, inverted right-angled triangle), the user inputs the size or number of rows.

For character-based matrices (e.g., 'a' to 'e' matrix), no additional input is required.

The program prompts the user to continue or quit after displaying each pattern.

Process: The program employs nested loops and switch statements to handle different pattern options. For each pattern, the program uses loops to iterate over rows and columns, printing the desired characters or numbers based on the pattern logic. It validates user input to ensure the chosen pattern is within the specified range.

Output: The output consists of visually displayed patterns based on the user's choice. The patterns include geometric shapes, numbers, and characters.


                                             Algorithm Design (Pseudocode)
Display "Pattern Display" header.

Initialize variables: row, column, size, menu, status, letter = 'a', num_matrix = 1.

Start a do-while loop: a. Display welcome message.

b. Begin a nested do-while loop for pattern choices: i. Display a menu of pattern choices.

ii. Prompt user: "Choose a pattern from the above: ".

iii. Read user input into the variable menu.

iv. Validate user input: If invalid, display an error message.

c. End the nested do-while loop when a valid choice is made.

d. Use a switch statement for selected pattern logic:

i. Cases 1 to 14:

  a. Case 1:

     i. Prompt user for column and row inputs.

     ii. Loop over rows and columns, displaying '*'.

  b. Case 2:

     i. Prompt user for column and row inputs.

     ii. Loop over rows and columns, displaying '*' for borders and spaces for the interior.

  c. Case 3:

     i. Prompt user for row input.

     ii. Loop over rows, displaying an increasing number of '*' in each row.

  d. Case 4:

     i. Prompt user for size input.

     ii. Loop over rows, displaying '*' for borders and spaces for the interior.

  e. Case 5:

     i. Prompt user for row input.

     ii. Loop over rows, displaying a decreasing number of '*' in each row.

  f. Case 6:

     i. Prompt user for size input.

     ii. Loop over rows, displaying '*' for borders and spaces for the interior.

  g. Case 7:

     i. Loop over rows and columns, displaying numbers from 1 to 5 in a matrix.

  h. Case 8:

     i. Loop over rows, displaying numbers from 1 to the current row in a right-angled triangle.

  j. Case 9:

     i. Prompt user for size input.

     ii. Loop over rows and columns, displaying '*' in a pyramid shape.

  k. Case 10:

     i. Prompt user for size input.

     ii. Loop over rows and columns, displaying '*' for borders and spaces for the interior.

  l. Case 11:

     i. Prompt user for size input.

     ii. Loop over rows and columns, displaying '*' in an inverted pyramid shape.

  m. Case 12:

     i. Loop over rows and columns, displaying letters 'a' to 'e' in a matrix.

  n. Case 13:

     i. Loop over rows and columns, displaying letters 'a' to 'x' in a matrix.

  o. Case 14:

      i. Prompt user for column=10 and row=4 inputs.

      ii. Loop over rows and columns, displaying numbers starting from 10-49 in a matrix.
e. Prompt user to continue or quit:

 i. Prompt: "Please enter 0 to quit or any other number to continue: ".

 ii. Read user input into the variable status.
f. Continue the outer do-while loop if status is not 0.

