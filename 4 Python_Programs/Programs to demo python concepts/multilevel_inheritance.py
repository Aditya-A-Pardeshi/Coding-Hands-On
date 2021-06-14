class Base:
    def __init__(self):
        self.a=10
        self.b=20
        print("Inside Base Constructor ")

class Derived1(Base):
    def __init__(self):
        Base.__init__(self)
        self.i=30
        self.j=40
        print("Inside Derived1 Constructor")

class Derived2(Derived1):
    def __init__(self):
        Derived1.__init__(self)
        self.x=50
        self.y=60
        print("Inside Derived2 Constructor")

def main():

    dobj=Derived2()
    print(dobj.a)
    print(dobj.b)
    print(dobj.i)
    print(dobj.j)
    print(dobj.x)
    print(dobj.y)



if __name__=="__main__":
    main()