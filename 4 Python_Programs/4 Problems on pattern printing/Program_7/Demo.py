'''
Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16 
'''

def Display(no):
    i = 1;
    while(no != 0):
        if(i%2 == 0):
            print(i,end = " ");
            no = no - 1;
        i = i + 1;

def main():
    no = int(input("Enter number: "));
    Display(no);
    
if __name__ == "__main__":
    main();