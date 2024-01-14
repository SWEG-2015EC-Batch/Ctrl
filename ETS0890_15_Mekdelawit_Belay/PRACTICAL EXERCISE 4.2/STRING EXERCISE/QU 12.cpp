#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  //12. Design a program that store an answer sheet for a test containing 10 multiple choice
 //questions. The program should accept the student answer, and print the test score along withthe marked student answer.
       const int  num=10;  
    char correctAnswers[10] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[10];
                 
    // Accept the student's answers
    std::cout << "Enter your answers for the test (A, B, C, or D):\n";
    for (int i = 0; i < 10 ; ++i) {
        std::cout << "Question " << i + 1 << ": ";
        std::cin >> studentAnswers[i];
       studentAnswers[i]=toupper(studentAnswers[i]);
    }
    // Print the test score and marked student answers
    int score = 0;
    std::cout << "\nTest Score and Marked Student Answers:\n";
    for (int i = 0; i <10; ++i) {
        cout << "Question " << i + 1 << ": ";
        cout << "Correct Answer: " << correctAnswers[i] << ", ";
        cout << "Your Answer: " << studentAnswers[i];

        if (correctAnswers[i] == studentAnswers[i]) {
            cout << " (Correct)";
            ++score;
        } else {
            cout << " (Incorrect)";
        }
        cout << "\n";
    }
    // Print the final test score
  cout << "\nYour Test Score: " << score << " out of " << " 10 " << "\n";

          
    return 0;
}
