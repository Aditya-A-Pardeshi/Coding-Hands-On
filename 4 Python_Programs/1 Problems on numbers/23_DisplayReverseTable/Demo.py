'''
Write a program which accept number from user and display its table in reverse order
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2 
'''

def ReverseTable(num):
    if(num == 0):
        return;
    for i in range(10,0,-1):
        print(num*i,end = " ");

def main():
    no = int(input("Enter number: "));
    ReverseTable(no);

if __name__ == "__main__":
    main();