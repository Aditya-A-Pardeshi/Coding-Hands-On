'''
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700 
'''

def ConvertDollarToRupee(amount):
    if(amount<=0):
        print("Invalid amount");
        return 0;
    return(amount * 70);

def main():
    amount_dollar = float(input("Enter amount in dolloar: "));
    amount_rupee = ConvertDollarToRupee(amount_dollar);
    if(amount_rupee != 0):
        print("{0:.4f}".format(amount_rupee));

if __name__ == "__main__":
    main();