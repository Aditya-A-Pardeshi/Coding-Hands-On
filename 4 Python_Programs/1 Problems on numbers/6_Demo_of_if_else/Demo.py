'''
Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”
'''

def CheckNumber(no1):
    if(no1 < 10):
        print("Hello");
    else:
        print("Demo");

def main():
    no1 = int(input("Enter a number:"));
    CheckNumber(no1);

if __name__ == "__main__":
    main();