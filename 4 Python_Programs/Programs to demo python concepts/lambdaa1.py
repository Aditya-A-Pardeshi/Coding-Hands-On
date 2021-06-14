# Named function
def Addition(no1, no2):
    return no1 + no2

# Lambda Function
# name=Lambda parameters:Body

Sum = lambda no1, no2: no1 + no2

def Fun(name):
    ret = name(10, 20)
    print("Value from Fun is :", ret)


def main():
    value1 = int(input("Enter number 1: "))

    value2 = int(input("Enter number 2: "))

    ret = Addition(value1, value2)
    print("Addition is: ", ret)

    ret = Sum(value1, value2)
    print("Addition Lambda is: ", ret)

    Fun(Sum)


if __name__ == "__main__":
    main()