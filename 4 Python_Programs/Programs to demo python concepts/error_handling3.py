def main():
    while True:

        try:
            age = int(input("Enter your age:"))
            print("10/Age is:", 10 / age)

        except Exception as err:
            print("The error is:",err)

        else:
            print("Thank you..")
            break


if __name__ == "__main__":
    main()
