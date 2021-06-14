'''
Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
'''

def Display(no):
    for i in range(no,0,-1):
        print("{} #".format(i),end = " ");

def main():
    no = int(input("Enter number: "));
    Display(no);
    
if __name__ == "__main__":
    main();

