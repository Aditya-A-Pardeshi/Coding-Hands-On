class Base1:
    def __init__(self):
        print("Inside Base1 Constructor")

    def fun(self):
        print("Inside Base1 Fun")

class Base2:
    def __init__(self):
        print("Inside Base2 Constructor")

    def fun(self):
        print("Inside Base2 Fun")

class Derived(Base1,Base2):       #Method Resolution Order(MRO)       #flow of the output depends on this
    def __init__(self):
        Base1.__init__(self)        #According to the sequence
        Base2.__init__(self)

    #def fun(self):
        #print("Inside Derived fun")

def main():

    dobj=Derived()
    dobj.fun()              #(Base1,Base2) sequence so output of Base1

    print(Derived.mro())

if __name__=="__main__":
    main()