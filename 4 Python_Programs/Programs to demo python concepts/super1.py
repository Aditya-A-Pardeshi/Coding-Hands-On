class Base:
    def __init__(self):
        self.i = 10

    def fun(self):
        print("Inside Base Fun")


class Derived(Base):
    def __init__(self):
        Base.__init__(self)
        self.j = 20

    def fun(self):
        print("Inside Derived Fun")

    def gun(self):
        print("Inside Derived Gun")
        self.fun()

        super().fun()

        print(Base().i)
        print(self.j)


def main():
    dobj = Derived()
    dobj.gun()


if __name__ == "__main__":
    main()
