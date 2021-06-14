#Accept a positive number from user and print numbers starting from that number till 1

def DisplayNumbers(no1):
    if(no1 < 0):
        print("Number is not positive");
    else:
        for i in range(no1,0,-1):
            print(i);


def main():
    no1 = int(input("Enter number: "));
    DisplayNumbers(no1);


if __name__ == "__main__":
    main();