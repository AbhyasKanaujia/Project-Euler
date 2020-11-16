num = int(input("Enter a number: "))
temp = num
reverse = 0
while(temp != 0):
    reverse = (reverse * 10) + (temp % 10)
    temp = int(temp / 10)
if(reverse == num):
    print(str(num) + " is palindrome")
else:
    print(str(num) + " is not palindrome")
