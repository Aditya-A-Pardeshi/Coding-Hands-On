#Accept a number from user and print * on screen those many number of times

def Display(no1):
    if(no1<=0):
        print("Invalid number");
    else:
        for i in range(0,no1):
            print("* ",end = ' ');
            
def main():
    no1 = int(input("Enter a positive number:"));
    Display(no1);
    
if __name__ == "__main__":
    main();