# StopIteration Error
def my_generator(num):
    for i in range(num):
        yield i


def main():
    gen = my_generator(1)

    print(next(gen))
    print(next(gen))
    print(next(gen))
    print(next(gen))


if __name__ == "__main__":
    main()
