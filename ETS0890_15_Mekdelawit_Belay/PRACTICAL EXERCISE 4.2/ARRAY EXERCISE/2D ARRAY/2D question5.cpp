#include <iostream>

using namespace std;

int main() {

 // 5,Suppose indices represent people and that the value at row i, column j of a 2D array is true
//just in case i and j are friends and false otherwise. Initialize the 2D array to represent the
//following configuration. Then the program counts how many pairs of friends are represented
//in the array. Note that each friendship pair appears twice in the array, so in the example
//above below there are 6 pairs of friends. 
  
    bool friends[6][6] = {

        {false, false, true, false, false, false},
        {false, false, false, true, false, false},
        {true, false, true, false, true, true},
        {false, true, false, false, true,false},
        {false, false, true, true, true, false},
        {false, false, true, false, false, true}
    };

    int friendnum = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (friends[i][j]) {
                friendnum++;
            }
        }
    }

    cout << "Number of paired people: " << friendnum << endl;

    return 0;
}
