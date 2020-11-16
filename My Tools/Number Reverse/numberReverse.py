num = int(input("Enter a number: "))
temp = num
reverse = 0
while(temp):
    reverse = (reverse * 10) + (temp % 10)
    temp = int(temp / 10)

print("Reversed: " + str(reverse))