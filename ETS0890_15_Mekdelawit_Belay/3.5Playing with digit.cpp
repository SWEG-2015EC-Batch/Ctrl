#include <iostream>
#include <cmath>

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to find the sum of the digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the product of even digits of a number
int productOfEvenDigits(int num) {
    int product = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }

    return product;
}

// Function to find the first and last digit of a number and their sum
void firstLastDigitAndSum(int num, int& first, int& last, int& sum) {
    last = num % 10;

    while (num > 0) {
        first = num % 10;
        num /= 10;
    }

    sum = first + last;
}

// Function to swap the first and last digit of a number
int swapFirstLastDigit(int num) {
    int first, last, sum;
    firstLastDigitAndSum(num, first, last, sum);

    int reversed = last;
    int temp = num % (int)pow(10, countDigits(num) - 1);
    temp /= 10;
    reversed += temp * 10 + first;

    return reversed;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

// Function to find the frequency of each digit in a number
void digitFrequency(int num) {
    int frequency[10] = {0}; // Assuming the number has at most 10 different digits

    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    // Print frequency table
    std::cout << "Digit\tFrequency" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (frequency[i] > 0) {
            std::cout << i << "\t" << frequency[i] << std::endl;
        }
    }
}

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num;
    int n = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += static_cast<int>(pow(digit, n));
        num /= 10;
    }

    return sum == original;
}

// Function to check if a number is Strong
bool isStrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; ++i) {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    return sum == original;
}

// Function to check if a number is Perfect
bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int number;

    // Input the integer from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Display menu
    std::cout << "\nMenu:" << std::endl;
    std::cout << "a) Print the reverse of the number" << std::endl;
    std::cout << "b) Count the number of digits in the given number" << std::endl;
    std::cout << "c) Find the sum of the digits of the given number" << std::endl;
    std::cout << "d) Find the product of even digits of the given number" << std::endl;
    std::cout << "e) Print the first and last digit of the number and find their sum" << std::endl;
    std::cout << "f) Swap the first and the last digit of the number" << std::endl;
    std::cout << "g) Check whether a number is palindrome or not" << std::endl;
    std::cout << "h) Find the frequency of each digit in the given integer" << std::endl;
    std::cout << "i) Check if a number is Armstrong or not" << std::endl;
    std::cout << "j) Check if a number is Strong or not" << std::endl;
    std::cout << "k) Check whether a number is Perfect number or not" << std::endl;

    char choice;
    std::cout << "Enter your choice (a-k): ";
    std::cin >> choice;

    switch (choice) {
        case 'a':
            // Print the reverse of the number
            std::cout << "Reverse of " << number << " is: " << reverseNumber(number) << std::endl;
            break;
        case 'b':
            // Count the number of digits in the given number
            std::cout << "Number of digits in " << number << " is: " << countDigits(number) << std::endl;
            break;
        case 'c':
            // Find the sum of the digits of the given number
            std::cout << "Sum of digits of " << number << " is: " << sumOfDigits(number) << std::endl;
            break;
        case 'd':
            // Find the product of even digits of the given number
            std::cout << "Product of even digits of " << number << " is: " << productOfEvenDigits(number) << std::endl;
            break;
        case 'e':
            // Print the first and last digit of the number and find their sum
            {
                int first, last, sum;
                firstLastDigitAndSum(number, first, last, sum);
                std::cout << "First digit: " << first << std::endl;
                std::cout << "Last digit: " << last << std::endl;
                std::cout << "Sum of first and last digit: " << sum << std::endl;
            }
            break;
        case 'f':
            // Swap the first and the last digit of the number
            std::cout << "After swapping first and last digit: " << swapFirstLastDigit(number) << std::endl;
            break;
        case 'g':
            // Check whether a number is palindrome or not
            if (isPalindrome(number)) {
                std::cout << number << " is a palindrome." << std::endl;
            } else {
                std::cout << number << " is not a palindrome." << std::endl;
            }
            break;
        case 'h':
            // Find the frequency of each digit in the given integer
            digitFrequency(number);
            break;
        case 'i':
            // Check if a number is Armstrong or not
            if (isArmstrong(number)) {
                std::cout << number << " is an Armstrong number." << std::endl;
            } else {
                std::cout << number << " is not an Armstrong number." << std::endl;
            }
            break;
        case 'j':
            // Check if a number is Strong or not
            if (isStrong(number)) {
                std::cout << number << " is a Strong number." << std::endl;
            } else {
                std::cout << number << " is not a Strong number." << std::endl;
            }
            break;
        case 'k':
            // Check whether a number is Perfect number or not
            if (isPerfect(number)) {
                std::cout << number << " is a Perfect number." << std::endl;
            } else {
                std::cout << number << " is not a Perfect number." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}
