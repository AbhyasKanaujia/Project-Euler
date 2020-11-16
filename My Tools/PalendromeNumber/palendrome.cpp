#include <iostream>

main()
{
    int num, temp, reversed = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (temp = num; temp != 0; temp /= 10)
        reversed = (reversed * 10) + (temp % 10);

    if (reversed == num)
        std::cout << num << " is a palindrome number";
    else
        std::cout << num << " is not a palindrome number";
}
