#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int rev=0, sum =0 ;
	int digit, num;
	int product = 1;
	cout << "enter number: ";
	cin >> num;
	const int x = num;

	int count=0;
	while (num > 0)
	{
		digit = num%10;
		rev = rev *10 + num %10;
		num /= 10;
		count++;
		sum +=digit;
		if (digit!= 0&&digit% 2 != 1)
		{
			product *= digit;
		}

	}
	int lastNum = x%10;
	int firstNum = rev%10;
	cout << "reverse number is "<<rev<<endl;
	cout << "number of digit is " << count<< endl;
	cout << "sum of the digit of given number is" << sum<<endl;
	cout << "product of even digit is " << product << endl;
	cout << "The sum of first and last digit is " << (lastNum+firstNum)<<endl;

int noCenternum=(lastNum * pow(10, count - 1)+firstNum);
	int noFirstandLastnum = x - ((firstNum * pow(10,(count-1))) + (lastNum));
	int first_and_last_swap = (lastNum * pow(10, (count - 1))) + (noFirstandLastnum + firstNum);
	cout << "Swaped the first and the last digit is " << first_and_last_swap << endl;



	if (rev== x) {
		cout << "this number palindrome" << endl;
	}
	else {
		cout << "this number is not palindrome" << endl;
	}

	for (int i = 0; i < 10; i++) {
		int frequency = 0;
		int Unum = x;
		while (Unum > 0) {
			if (Unum % 10 == i) {
				frequency++;
			}
			Unum = Unum / 10;
		}
		cout << i << "\t|\t" << frequency << endl;
	}



	int Anum = x;
	int Adigit;
	int Asum=0;

		while (Anum > 0) {
			Adigit = Anum % 10;
			Asum += pow(Adigit, 3);
			Anum /= 10;
		}
		if (Asum == x) {
			cout<<x<<" is an amstrong number!!"<<endl;
		}
		else {
			cout<<x<< " is not an amstrong number!!"<<endl;
		}

		int Snum = x;
		int Ssum=0;
		int remainders, fact;
		int copynum=Snum;
		while (Snum != 0)
		{
			remainders = Snum % 10;
			fact = 1;
			for (int i = 1; i <= remainders; i++)
			{
				fact = fact * i;
			}
			Ssum = Ssum + fact;
			Snum = Snum / 10;
		}
		if (Ssum == copynum) {
			cout << copynum << " is strong numbers!!"<<endl;
		}
		else {
			cout << copynum << " is not strong numbers!!"<<endl;
		}

		int div;
		int Pnum=x;
		int Psum=0;

		for (int i = 1; i < Pnum; i++) {

			div = Pnum % i;
			if (div == 0) {
				Psum = Psum + i;
			}
		}
				if (Psum == Pnum) {
					cout << Pnum << " is a perfect number.";
				}
				else
					cout << Pnum << " is not a perfect number.";
	return 0;
}

