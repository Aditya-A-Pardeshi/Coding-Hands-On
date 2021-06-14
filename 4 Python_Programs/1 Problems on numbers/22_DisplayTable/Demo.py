'''
Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
'''

def PrintTable(num):
    if(num == 0):
        return;
    for i in range(1,11):
        print(num*i,end = " ");


def main():
    no = int(input("Enter number: "));
    PrintTable(no);

if __name__ == "__main__":
    main();