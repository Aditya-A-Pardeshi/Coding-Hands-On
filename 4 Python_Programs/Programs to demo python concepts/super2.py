class Base:
    def __init__(self):
        self.i = 10
        self.j = 20

    def fun(self):
        print("Inside Base fun")


class Derived(Base):
    def __init__(self):
        # self.__init__()    #Recursion
        super().__init__()  # Calling base class constructor
        self.x = 30
        self.y = 40

    def gun(self):
        print("Inside Derived Gun")
        print(self.j)
        Base.fun(self)
        self.fun()  # fun(self)

        super().fun()
        # print(i)       #NameError
        print(self.i)
        # print(super().i)   #AttributeError


def main():
    dobj = Derived()
    dobj.gun()


if __name__ == "__main__":
    main()
