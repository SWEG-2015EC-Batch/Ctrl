#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers;
  int numElements;

  cout << "Enter the number of elements: ";
  cin >> numElements;

  cout << "Enter " << numElements << " numbers:\n";
  for (int i = 0; i < numElements; ++i) {
    int num;
    cin >> num;
    numbers.push_back(num);
  }

  cout << "\nEven numbers in reverse order:\n";
  for (int i = numElements - 1; i >= 0; --i) {
    if (numbers[i] % 2 == 0) {
      cout << numbers[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
