#Accept a number from user and print "Hello World" that many times on screen

def Display(no1):
    for i in range(0,no1):
        print("Hello World");

def main():
    no1 = int(input("Enter number: "));
    Display(no1);
    
    
if __name__ == "__main__":
    main();