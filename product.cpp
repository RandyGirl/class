#include <iostream>
#include <cmath>

using namespace std;

double max(double num1, double num2)
{
	return num1 > num2 ? num1 : num2;	
}

double abs(double num)
{
	return num < 0 ? -num : num;
}

double product(int num1, int num2)
{
	double product = 1;
	for(int i = num1; i <= num2; i += 2)
	{
		product *= max((i - 4.1)*(i - 4.1), sqrt(abs(i)));
	}
	return product;
}


int main()
{
	int a = 0;
	int b = 0;
	cout << "Enter the two numbers: ";
	cin >> a >> b;
	cout << "The product is: " << product(a, b) << endl;

	return 0;
}
