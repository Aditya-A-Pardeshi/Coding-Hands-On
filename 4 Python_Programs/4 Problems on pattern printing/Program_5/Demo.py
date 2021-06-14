'''
Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 * 
'''

def Display(no):
    for i in range(1,no+1):
        print("{} *".format(i),end = " ");

def main():
    no = int(input("Enter number: "));
    Display(no);
    
if __name__ == "__main__":
    main();

