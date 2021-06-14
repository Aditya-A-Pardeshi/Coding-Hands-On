class Base1:
    def __init__(self):
        self.i=10
        self.j=20
        print("Inside Base1 Constructor")

class Base2:
    def __init__(self):
        self.x=30
        self.y=40
        print("Inside Base2 Constructor")

class Derived(Base2,Base1):
    def __init__(self):
        Base2.__init__(self)                    #According to the sequence
        Base1.__init__(self)
        self.a=50
        self.b=60
        print("Inside Derived Constructor")

def main():

    dobj=Derived()
    print(dobj.i)
    print(dobj.j)
    print(dobj.x)
    print(dobj.y)
    print(dobj.a)
    print(dobj.b)

if __name__=="__main__":
    main()