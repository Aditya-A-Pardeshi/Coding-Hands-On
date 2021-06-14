'''
Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17
'''

def PrintOddNumbers(num):
    if(num<0):
        print("{} is not a positive number".format(num));
        return;
    for i in range(1,num+1):
        if(i%2 != 0):
            print(i,end = " ");

def main():
    no = int(input("Enter a positive number: "));
    PrintOddNumbers(no);

if __name__ == "__main__":
    main();