Input: The program takes a single character as input from the user.

Process:

The program uses conditional statements to determine the type of character:
a. Checks if the character is alphabetic (uppercase or lowercase). 
b. Checks if the character is a digit.
c. Identifies special characters.
If the character is alphabetic, the program further checks:
a. Whether it is uppercase or lowercase. 
b. Whether it is a vowel or a consonant.
If the character is a digit, the program checks whether it is even or odd.
Output: The program provides information about the input character based on the following criteria:

Uppercase letter, lowercase letter, digit, or special character.

Vowel or consonant (if alphabetic).

Even or odd number (if a digit).

             Algorithm Design (Pseudocode)
Display "Enter a character: " message to prompt the user for input.

Read the input character and store it in the variable ch.

// Check character type

If ch is an alphabetic character:
a. Display "Alphabetic character." message.

b. If ch is an uppercase letter:

i. Display "Uppercase letter." message.

c. Else:

i. Display "Lowercase letter." message.

Else if ch is a digit:

a. Display "Digit." message.

Else:

a. Display "Special character." message.

// Check if alphabetic character is a vowel or consonant

If ch is an alphabetic character: a. Convert ch to lowercase using tolower(ch). b. Switch on the lowercase character: i. Case 'a', 'e', 'i', 'o', 'u':

- Display "Vowel." message.

 - Break.
ii. Default:

 - Display "Consonant." message.
// Check if numeric character is even or odd

If ch is a digit: a. Convert ch to an integer: num = ch - '0'.

b. If num is even:

- Display "Even number." message.
c. Else:

- Display "Odd number." message.
End
