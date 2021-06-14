'''
Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
'''

def PrintMultiples(num):
    for i in range(1,6):
        print(i*num,end = " ");

def main():
    no = int(input("Enter number: "));
    PrintMultiples(no);

if __name__ == "__main__":
    main();