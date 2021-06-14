# Synchronization
import threading

Amount = 1000


def ATM(func, lockkk):
    func(lockkk)


def Deposite(lockkk):
    lockkk.acquire()
    value = int(input("Please Enter the Amount to Deposite:"))
    global Amount
    Amount = Amount + value
    print("Deposite successful-Balance is: ", Amount)
    lockkk.release()


def Withdraw(lockkk):
    lockkk.acquire()
    value = int(input("Please Enter the Amount to Withdraw:"))
    global Amount
    if value > Amount:
        print("Insufficient Balance in Your Account")
    else:
        Amount = Amount - value
        print("Withdraw successful-Balance is: ", Amount)
    lockkk.release()


def main():
    lockkk = threading.Lock()

    t1 = threading.Thread(target=ATM, args=(Deposite, lockkk,))
    t2 = threading.Thread(target=ATM, args=(Withdraw, lockkk,))

    print("----Welcome to Marvellous ATM----")
    print("Your Balance is Rs.1000 INR")
    trans = input("Enter the Deposite/Withdraw what you want to do: ")
    if trans.lower() == "deposite":
        t1.start()
        t1.join()
    if trans.lower() == "withdraw":
        t2.start()
        t2.join()

    print("Marvellous ATM apllication is Closed")


if __name__ == "__main__":
    main()
