#include <iostream>

bool isPalendrome(int num);

int main()
{
    int firstNumber, secondNumber, largest = 0;
    for (firstNumber = 999; firstNumber >= 100; firstNumber--)
        for (secondNumber = firstNumber; secondNumber >= 100; secondNumber--)
        {
            int product = firstNumber * secondNumber;
            if (isPalendrome(product))
                if (product > largest)
                    largest = product;
        }

    std::cout << largest;
}

bool isPalendrome(int num)
{
    int temp, reverse = 0;
    for (temp = num; temp; temp /= 10)
        reverse = (reverse * 10) + (temp % 10);
    if (reverse == num)
        return true;
    return false;
}
