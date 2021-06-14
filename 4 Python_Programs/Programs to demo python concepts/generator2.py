def my_generator(num):
    for i in range(num):
        yield i


def main():
    for item in my_generator(10):
        print(item)


if __name__ == "__main__":
    main()
