class Base:

    def __init__(self):
        self.i=10
        self.j=20
        print("Inside Base Constructor")

    def fun(self):
        print("Inside base fun")

    def gun(self):
        print("Inside Base gun")

class Derived(Base):
    def __init__(self):
        Base.__init__(self)
        self.x=30
        self.y=40
        print("Inside Derived Constructor")

    def sun(self):
        print("Inside Derived sun")

    def gun(self):                      #overriding
        print("Inside Derived gun")


def main():

    bobj=Base()
    print(bobj.i)
    print(bobj.j)
    bobj.fun()
    bobj.gun()

    dobj=Derived()
    print(dobj.i)
    print(dobj.j)
    print(dobj.x)
    print(dobj.y)
    dobj.fun()
    dobj.sun()
    dobj.gun()

if __name__=="__main__":
    main()