# Inbuild function from module(we consider as)
def substraction(no1, no2):
    return no1 - no2


def main():
    no1 = int(input("Enter the first number:"))
    no2 = int(input("Enter the second number:"))

    ret = substraction(no1, no2)
    print("The substraction is:", ret)


if __name__ == "__main__":
    main()
