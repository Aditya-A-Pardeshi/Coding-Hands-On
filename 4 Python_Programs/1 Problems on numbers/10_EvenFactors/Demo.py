'''
Write a program which accept number from user and print even factors of that number
Input : 24
Output: 2 4 6 8 12
'''

def PrintEvenFactors(no):
    if(no<0):
        no = -no;
    for i in range(2,int(no/2)+1):
        if(no%i == 0):
            print("{} ".format(i),end = " ");
        

def main():
    no = int(input("Enter number:"));
    PrintEvenFactors(no);


if __name__ == "__main__":
    main();