import sys
def countNumberOfDigits(num):
    numberOfDigits = 0
    while(num != 0):
        numberOfDigits += 1
        num = num // 10
    return numberOfDigits

def isAmstrong(num):
    numberOfDigits = countNumberOfDigits(num)
    number = num
    numberFormed = 0
    for i in range(0 , numberOfDigits):
        numberFormed += pow(num % 10 , numberOfDigits)
        num = num // 10
    return number == numberFormed

start = sys.argv[1]
end = sys.argv[1]
for num in range(start + 1 , end):
    if(isAmstrong(num)):
        print(num)
