'''
Write a program which accept number from user and print numbers till that number
Input : 8
Output : 1 2 3 4 5 6 7 8 
'''

def PrintNumbers(num):
    if(num<0):
        print("{} is not a positive number".format(num));
    for i in range(1,num+1):
        print(i,end = " ");

def main():
    no = int(input("Enter number: "));
    PrintNumbers(no);

if __name__ == "__main__":
    main();