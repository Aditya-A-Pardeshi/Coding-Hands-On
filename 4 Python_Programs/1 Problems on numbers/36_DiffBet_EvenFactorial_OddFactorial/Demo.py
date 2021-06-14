'''
Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15) 
'''

def FindDiff(num):
    if(num == 0):
        return 0;
    if(num<0):
        num = -num;
    EvenFactorial = 1;
    OddFactorial = 1;
    for i in range(1,num+1):
        if(i%2 == 0):
            EvenFactorial = EvenFactorial * i;
        else:
            OddFactorial = OddFactorial * i;
    return (EvenFactorial - OddFactorial);

def main():
    no = int(input("Enter number: "));
    result = FindDiff(no);
    print(result);

if __name__ == "__main__":
    main();