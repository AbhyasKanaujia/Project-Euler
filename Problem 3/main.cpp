#include<iostream>

int main()
{
	int num, factor = 2;
	std::cout << "Enter a number: ";
	std::cin >> num;

	for (int temp = num; factor <= num / 2 && factor != temp; factor++)
	{
		while (temp % factor == 0 && factor != temp)
			temp /= factor;
	}
 
	std::cout << "Largest prime factor of " << num << " is " << factor;
}