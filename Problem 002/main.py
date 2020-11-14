a = 1; b = 2; sum = 0
while a < 4000000:
    if a % 2 == 0:
        sum += a
    temp = a + b
    a = b
    b = temp
print("Sum of the even-valued terms in he Fibonacci sequence whose values do not exceed four million is " + str(sum))
