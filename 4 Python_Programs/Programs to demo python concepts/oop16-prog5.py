# 2. Write a program which contains one class named as BankAccount.
# BankAccount class contains two instance variables as Name & Amount.
# That class contains one class variable as ROI which is initialise to 10.5.
# Inside init method initialise all name and amount variables by accepting the values from user.
# There are Four instance methods inside class as Display(), Deposit(), Withdraw(), CalculateIntrest().
# Deposit() method will accept the amount from user and add that value in class instance variable Amount.
# Withdraw() method will accept amount to be withdrawn from user and subtract that amount from class instance variable Amount.
# CalculateIntrest() method calculate the interest based on Amount by considering rate of interest which is Class variable as ROI.
# And Display() method will display value of all the instance variables as Name and Amount.
# After designing the above class call all instance methods by creating multiple objects.


class BankAccount:
    ROI=10.5

    def __init__(self,Name,Amount):
        self.Name=Name
        self.Amount=Amount
        self.Interest=0

    def DisplayA(self):
        print("The Initial amount is:", self.Amount)

    def Deposite(self):
        value=int(input("Enter the value to Deposite:"))
        self.Amount=self.Amount+value
        print("The amount after deposite is:",self.Amount)

    def Withdraw(self):
        value = int(input("Enter the value to Withdraw:"))
        self.Amount = self.Amount - value
        print("The amount after Withdraw is:", self.Amount)

    def CalculateInterest(self):
        self.Interest=(self.Amount*BankAccount.ROI*1)/100
        print("Intrest Added is:", self.Interest)

    def Display(self):
        print("Name of Customer is :", self.Name)
        print("Current balance in the Account is :", self.Amount+self.Interest)

def main():
    obj1 = BankAccount("Aditya Pardeshi", 1000)

    obj1.DisplayA()
    obj1.Deposite()
    obj1.Withdraw()
    obj1.CalculateInterest()
    obj1.Display()

if __name__=="__main__":
    main()