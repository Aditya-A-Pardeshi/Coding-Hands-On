def substraction(no1, no2):
    return no1 - no2


def SubDecorator(func_name):
    return func_name(10, 5)


def main():
    ret = SubDecorator(substraction)
    print("The substraction is:", ret)


if __name__ == "__main__":
    main()
