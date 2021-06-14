'''
Write a program which accept number from user and display all its non factors
Input : 12
Output : 5 7 8 9 10 11 
'''

def DisplayNonFactors(num):
    if(num<0):
        num = -num;
    for i in range(1,num+1):
        if(num%i != 0):
            print(i,end = " ");

def main():
    no = int(input("Enter number: "));
    DisplayNonFactors(no);

if __name__ == "__main__":
    main();