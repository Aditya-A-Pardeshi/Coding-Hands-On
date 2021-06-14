class Demo:
    def __init__(self):
        print("Inside Constructor")
        self.i = 10
        self.j = 20

    def Display(self):
        print("The value of i is:", self.i)
        print("The value of j is:", self.j)

    def __del__(self):
        print("Inside Destructor")


def main():
    obj1 = Demo()
    obj1.Display()

    obj2 = Demo()
    obj2.Display()

    del obj1
    del obj2

    # obj1.Display()     #UnboundLocalError


if __name__ == "__main__":
    main()
