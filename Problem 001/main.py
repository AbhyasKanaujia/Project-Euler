def sumOfMultiples(n):
    limit = int(999 / n)
    return n * (limit * (limit + 1)) / 2

print(int(sumOfMultiples(5) + sumOfMultiples(3) - sumOfMultiples(15)))

# sum = 0
# for i in range(1000):
#     if i % 3 == 0 or i % 5 == 0: 
#         sum += i
# print("The sum of all the multiples of 3 or 5 below 1000 is " + str(sum))