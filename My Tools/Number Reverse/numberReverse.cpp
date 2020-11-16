#include <iostream>

main()
{
    int num, temp, reverse = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (temp = num; temp; temp /= 10)
        reverse = reverse * 10 + temp % 10;

    std::cout << "Reversed: " << reverse;
}
