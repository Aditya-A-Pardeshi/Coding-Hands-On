'''
Write a program which accept number from user and print multiplication of its factors
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
'''

def MultiplyFactors(num):
    if(num == 0):
        return 0;
    if(num<0):
        num = -num;
    ans = 1;
    for i in range(1,int(num/2)+1):
        if(num%i == 0):
            ans = ans * i;
    return ans;

def main():
    no = int(input("Enter number: "));
    result = MultiplyFactors(no);
    print(result);

if __name__ == "__main__":
    main();