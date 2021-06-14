'''
Accept number from user and display below pattern.
Input : 5
Output : A B C D E 
'''

def Display(no):
    ch = 65;
    for i in range(1,no+1):
        print(chr(ch),end = " ");
        ch = ch + 1;        

def main():
    no = int(input("Enter number: "));
    Display(no);
    
if __name__ == "__main__":
    main();

