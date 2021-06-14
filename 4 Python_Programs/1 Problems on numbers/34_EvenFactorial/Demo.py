'''
Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
'''

def EvenFactorial(num):
    if(num == 0):
        return 0;
    if(num<0):
        num = -num;
    ans = 1;
    for i in range(1,num+1):
        if(i%2 == 0):
            ans = ans * i;
    return ans;

def main():
    no = int(input("Enter number: "));
    result = EvenFactorial(no);
    print(result);
    
if __name__ == "__main__":
    main();