'''
Write a program which accept number from user and return difference between summation of all its factors and non factors
Input : 12
Output : -34 (16 - 50) 
'''

def FindDiff(num):
    if(num<0):
        num = -num;
    sumfactor = 0;
    sumnonfactor = 0;
    for i in range(1,num):
        if(num%i == 0):
            sumfactor = sumfactor + i;
        else:
            sumnonfactor = sumnonfactor + i;
    return (sumfactor - sumnonfactor);

def main():
    no = int(input("Enter number: "));
    result = FindDiff(no);
    print(result);

if __name__ == "__main__":
    main();