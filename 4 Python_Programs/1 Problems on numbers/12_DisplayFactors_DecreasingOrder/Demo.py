'''
Write a program which accept number from user and print its factors in decreasing order
Input : 12
Output : 6 4 3 2 1
'''

def DisplayFactors(num):
    if(num<0):
        num = -num;
    for i in range(int(num/2),0,-1):
        if(num%i == 0):
            print(i,end = " ");

def main():
    no = int(input("Enter number: "));
    DisplayFactors(no);

if __name__ == "__main__":
    main();