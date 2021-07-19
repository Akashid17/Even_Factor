'''
Write a program which accept number from user and print even factors of that
number.
'''

def EvenFact(iNo):

    if iNo < 0:
        iNo = -iNo
    
    for x in range(2,int(iNo/2)+1):
        if x%2 == 0 and iNo%x == 0:
            print(x,end="\t")
    print()


if __name__ == "__main__":
    iValue = int(input("Enter Number\n"))

    EvenFact(iValue)