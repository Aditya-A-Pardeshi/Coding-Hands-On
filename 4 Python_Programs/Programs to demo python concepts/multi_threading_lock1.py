Amount = 1000


def ATM(func):
    func()


def Deposite():
    value = int(input("Please Enter the Amount to Deposite:"))
    global Amount
    Amount = Amount + value
    print("Deposite successful-Balance is: ", Amount)


def Withdraw():
    value = int(input("Please Enter the Amount to Withdraw:"))
    global Amount
    if value > Amount:
        print("Insufficient Balance in Your Account")
    else:
        Amount = Amount - value
        print("Withdraw successful-Balance is: ", Amount)


def main():
    print("----Welcome to Marvellous ATM----")
    trans = input("Enter the Deposite/Withdraw what you want to do: ")
    if trans.lower() == "deposite":
        ATM(Deposite)
    if trans.lower() == "withdraw":
        ATM(Withdraw)


if __name__ == "__main__":
    main()
