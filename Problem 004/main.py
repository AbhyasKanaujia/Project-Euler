largest = 0

def isPalindrome(num):
    temp = num
    reverse = 0
    while(temp):
        reverse = (reverse * 10) + (temp % 10)
        temp = int(temp / 10)
    if(num == reverse):
        return True
    return False

for firstNumber in range(999, 100, -1):
    for secondNumber in range(firstNumber, 100, -1):
        product = firstNumber * secondNumber
        if(isPalindrome(product)):
            if(product > largest):
                largest = product

print(str(largest))
