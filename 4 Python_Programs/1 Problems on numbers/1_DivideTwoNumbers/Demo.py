#Problem statement Write a program that divides two numbers

def Divide(no1, no2):
    if(no2 == 0):
        print("Invalid input for second number");
    else:
        return (no1/no2);
    

def main():
    no1 = int(input("Enter first number:"));
    no2 = int(input("Enter second number:"));
    ans = Divide(no1,no2);
    print("Answer: ",ans);
    
if __name__ == "__main__":
    main();