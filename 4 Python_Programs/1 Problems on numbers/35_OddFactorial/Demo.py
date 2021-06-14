'''
Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
'''

def OddFactorial(num):
    ans = 1;
    if(num == 0):
        return 0;
    if(num<0):
        num = -num;
    for i in range(1,num+1):
        if(i%2 != 0):
            ans = ans * i;
    return ans;

def main():
    no = int(input("Enter number: "));
    result = OddFactorial(no);
    print(result);

if __name__ == "__main__":
    main();