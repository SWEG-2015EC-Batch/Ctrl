# Problem Analysis:

  - a,Print the Reverse of the Number:
   - Input: An integer
   - Output: The reverse of the number
   - operation;
     - read the number
     - compute reversed = reversed * 10 + num % 10;
        num /= 10;
     - display the result
 - b,Count the Number of Digits:
  - Input: An integer
  - Output: The count of digits in the number
  - operation;
    - read the number 
    - compute num /= 10 then incremenent the count
    - display the result

 - c,Sum of Digits:
  - Input: An integer
  - Output: The sum of the digits in the number
  - operation;
    - read the Number
    - compute sum += num % 10;
        num /= 10;
    - display the result
 - d,Product of Even Digits:
  - Input: An integer
  - Output: The product of even digits in the number
  - operation;
    - read the number 
    - compute  digit = num % 10;
    - if digit % 2 == 0 
    - compute product *= digit;
        num /= 10;
 - e, First and Last Digit and Their Sum:
  - Input: An integer
  - Output: The first and last digit, and their sum
  - operation;
   - read tne Number
   - compute last = num % 10;
        - first = num % 10;
        - num /= 10;
        - sum = first + last;
   - display the result
 - f,Swap First and Last Digits:
  - Input: An integer
  - Output: The number with the first and last digits swapped
  - operation:
      - read the number 
      - identify reversed = last;
      - compute temp = num % pow(10, countDigits(num) - 1);
      - temp /= 10;
      - reversed += temp * 10 + first
      - display he result 
 - g,Check Palindrome:
   - Input: An integer
   - Output: True if the number is a palindrome, False otherwise
   - operation: operation
     - read the Number
     - check if num == reverseNumber(num)
     - if it is true return the result
   
 - h,Frequency of Each Digit:
  - Input: An integer
  - Output: Frequency of each digit in a table format
  - operation:
      - read the number 
      - comput digit = num % 10;
        - frequency[digit]++;
        - num /= 10;
      - dislay the result
 - i,Check Armstrong Number:
   - Input: An integer
   - Output: True if the number is an Armstrong number, False otherwise
   - operation;
     - read the number
     - identify original = num;
     - compute n = countDigits(num);
       - digit = num % 10;
       - sum += static_cast<int>(pow(digit, n));
       - num /= 10;
       - display the result
 - j,Check Strong Number:
   - Input: An integer
   - Output: True if the number is a Strong number, False otherwise
   - operation 
     - read the number 
     - compute num /= 10;
     - incremenent the result
     - display the result
 - k,Check Perfect Number:
   - Input: An integer
   - Output: True if the number is a Perfect number, False otherwise
   - operation 
     - read the Number
     - compute 
         - (num % i == 0) 
            - sum += i;
     - return sum == num
     - 
  # PSEDOCODE
## a) Print the reverse of the number
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'reversed' to 0.
- Step 4: While the input number is greater than 0:
  - a. Extract the last digit of the number.
  - b. Multiply 'reversed' by 10 and add the extracted digit.
  - c. Remove the last digit from the input number.
- Step 5: Print the 'reversed' number.
- Step 6: end

## b) Count the number of digits in a given number:
- Step 1: Start
- Step 2:  Input an integer from the user.
- Step 3:  Initialize a variable 'count' to 0.
- Step 4: While the input number is greater than 0:
   - a. Increment 'count'.
   -  b. Remove the last digit from the input number.
- Step 5: Print the 'count' value.
- Step 6: end

## c) Find the sum of the digits of a given number:
- step 1: Start
- Step 2: Input an integer from the user.
- Step 3:  Initialize a variable 'sum' to 0.
- Step 4: While the input number is greater than 0:
  - a. Add the last digit to 'sum'.
  - b. Remove the last digit from the input number.
- Step 5:Print the 'sum' value.
- Step 6: end

## d) Find the product of even digits of a given number:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'product' to 1.
- Step 4: While the input number is greater than 0:
  - a. Extract the last digit of the number.
  - b. If the digit is even, multiply 'product' by the digit.
  - c. Remove the last digit from the input number.
- Step 5: Print the 'product' value.
- Step 6: end 

## e) Print the first and the last digit of the number and find their sum:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3:Extract the last digit of the number and store it in a variable 'lastDigit'.
- Step 4: While the input number is greater than 9, remove the last digit.
- Step 5: Extract the first digit of the number (now the only digit) and store it in a variable 'firstDigit'.
- Step 6: Print 'firstDigit' and 'lastDigit'.
- Step 7: Calculate and print the sum of 'firstDigit' and 'lastDigit'.
- Step 8: end

## f) Swap the first and the last digit of the number:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Extract the last digit of the number and store it in a variable 'lastDigit'.
- Step 4: While the input number is greater than 9, remove the last digit.
- Step 5: Extract the first digit of the number (now the only digit) and store it in a variable 'firstDigit'.
- Step 6: Calculate the new number by replacing the first digit with 'lastDigit' and vice versa.
- Step 7:  Print the new number.
- Step 8: end

## g) Check whether a number is palindrome or not:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'original' with the input number.
- Step 4: Initialize a variable 'reversed' to 0.
- Step 5: While 'original' is greater than 0:
   a. Extract the last digit of 'original'.
  - b. Multiply 'reversed' by 10 and add the extracted digit.
  - c. Remove the last digit from 'original'.
- Step 6: If 'reversed' is equal to the original input number, print "Palindrome"; otherwise, print "Not Palindrome".
- Step 7: end

## h) Find the frequency of each digit in a given integer and print in table format:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize an array 'frequency' of size 10 (for digits 0 to 9) with all elements set to 0.
- Step 4: While the input number is greater than 0:
  - a. Extract the last digit of the number.
  - b. Increment the corresponding element in 'frequency'.
  - c. Remove the last digit from the input number.
- Step 5:Print the frequency table.
- Step 6: end

## i) Check if a number is Armstrong or not:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'original' with the input number.
- Step 4: Initialize a variable 'sum' to 0.
- Step 5: While 'original' is greater than 0:
   - a. Extract the last digit of 'original'.
   - b. Add the cube of the extracted digit to 'sum'.
   - c. Remove the last digit from 'original'.
- Step 6: If 'sum' is equal to the original input number, print "Armstrong"; otherwise, print "Not Armstrong".
- Step 7: end
 ## j) Check if a number is Strong or not:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'original' with the input number.
- Step 4: Initialize a variable 'sum' to 0.
- Step 5: While 'original' is greater than 0:
   - a. Extract the last digit of 'original'.
   - b. Calculate the factorial of the extracted digit and add it to 'sum'.
   - c. Remove the last digit from 'original'.
- Step 6:  If 'sum' is equal to the original input number, print "Strong"; otherwise, print "Not Strong".
- Step 7: end

## k) Check whether a number is Perfect number or not:
- Step 1: Start
- Step 2: Input an integer from the user.
- Step 3: Initialize a variable 'sum' to 0.
- Step 4: Iterate from 1 to (number / 2):
  - a. If 'i' is a divisor of the input number, add 'i' to 'sum'.
- Step 5:  If 'sum' is equal to the input number, print "Perfect"; otherwise, print "Not Perfect".  
- Step 6: end
