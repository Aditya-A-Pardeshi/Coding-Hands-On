#Generator allows us to generate sequence of values over time.
#using range and yield we can create generators in python.
def my_generator(num):
    for i in range(num):
        yield i


def main():
    gen = my_generator(10)
    # Two ways in which we can use next function
    print(gen.__next__())
    print(next(gen))
    print(next(gen))
    print(next(gen))
    print(next(gen))


if __name__ == "__main__":
    main()
