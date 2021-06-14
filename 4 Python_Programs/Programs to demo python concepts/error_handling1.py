
def main():

    while True:

        try:
            age=int(input("Enter your age:"))
            print("10/Age is:",10/age)

        except ValueError:
            print("Please enter number..")

        except ZeroDivisionError:
            print("Please enter value higher than 0..")

        else:
            print("Thank you..")
            break

if __name__=="__main__":
    main()