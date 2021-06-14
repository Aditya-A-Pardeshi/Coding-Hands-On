#Accept a number from user. Accept another number from user and display whether first number is divisible by second number

def CheckDivisibility(no1,no2):
    if(no2 == 0):
        print("Invalid value for second number");
    elif (no1%no2 == 0):
        return True;
    else:
        return False;
        
def main():
    no1 = int(input("Enter first number:"));
    no2 = int(input("Enter second number:"));
    
    ans = CheckDivisibility(no1,no2);
    print(ans);
    
if __name__ == "__main__":
    main();
  
