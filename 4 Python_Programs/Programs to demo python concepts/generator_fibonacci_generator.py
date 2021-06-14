def fib_gen(num):
    a = 0
    b = 1

    for i in range(num):
        yield a
        temp = a
        a = b
        b = temp + b


def main():
    for i in fib_gen(21):
        print(i)


if __name__ == "__main__":
    main()
