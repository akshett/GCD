#include <iostream>

int gcd(int a, int b)
{
	if (a == b)
		return a;
	else
		a > b ? gcd(b , a - b): gcd(a, b - a);
}

int main()
{
	int num1, num2;
	std::cout << "Enter two integers: " << '\n';
	std::cin >> num1;
	std::cin >> num2;
	int num_gcd = gcd(num1, num2);
	std::cout << "GCD is : " << num_gcd << '\n';
	 
	return 0;
}
