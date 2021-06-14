
def my_decorator(func):     #supercharge and add additional functinality to hello() function

    def wrap_function():
        print("----Heyyyyy----")
        func()
        print("----From:Aditya----")
    return wrap_function


def main():

    @my_decorator
    def hello():
        print("Hello")

    hello()

if __name__ == "__main__":
    main()
