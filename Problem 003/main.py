import math

num = int(input("Enter a number: "))
temp = num

for factor in range(2, math.ceil(num / 2)):
    while (temp % factor == 0 and factor != temp):
        temp /= factor
    if (factor == temp):
        break

print("Largest prime factor of " + str(num) + " is " + str(factor))