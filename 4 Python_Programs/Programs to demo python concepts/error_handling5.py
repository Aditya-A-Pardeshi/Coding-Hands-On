# user define exception using raise
def main():
    while True:

        try:
            age = int(input("Enter your age:"))
            age
            raise ValueError("Hey cut it off")
            raise Exception("Hey cut it off")

        except ZeroDivisionError as err:
            print(err)

        finally:
            print("Finally..")


if __name__ == "__main__":
    main()
