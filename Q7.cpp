//Write a function to compute the sum of the digits of a given number.The function should return the sum of the digits of the number.

#include <bits/stdc++.h>
using namespace std;

class ABC {
public:
	int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}
};

int main()
{
	ABC g;
	int n = 687;
	cout << g.getSum(n);
	return 0;
}
