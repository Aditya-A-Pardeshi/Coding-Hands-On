'''
Write a program which accept number from user and return summation of all its non factors
Input : 12
Output : 50
'''

def SumNonFactors(num):
    if(num<0):
        num = -num;
    ans = 0;
    for i in range(1,num+1):
        if(num%i != 0):
            ans = ans + i;
    return ans;

def main():
    no = int(input("Enter number: "));
    result = SumNonFactors(no);
    print(result);

if __name__ == "__main__":
    main();