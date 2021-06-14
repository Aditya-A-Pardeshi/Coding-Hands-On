'''
Write a program to find factorial of given number
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1) 
'''

def FindFactorial(num):
    if(num == 0):
        return 0;
    if(num < 0):
        num = -num;
    ans = 1;
    for i in range(1,num+1):
        ans = ans*i;
    return ans;

def main():
    no = int(input("Enter number: "));
    result = FindFactorial(no);
    print(result);

if __name__ == "__main__":
    main();