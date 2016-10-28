#include <cstdlib>
#include <iostream>

using namespace std;

int highest_square(int n) {
	// set the highest to 1, since its the smallest perfect square
	int highest = 1;
	/* for loop for finding the biggest square, goes until i<=n/2 since there
	will be no square that is smaller than n */
	for (int i = 1; i <= (n / 2); i++)
	{
		// 
		if ((i*i > highest) && (i*i <= n))
		{
			highest = i*i;
		}
	}
	return highest;
}

int main() {
	int a, n, high;
	cin >> n;
	high = highest_square(n);
	cout << "Highest square in " << n << " is " << high << endl;
	cin >> a;
}