#no1->Public
#no2->Protected
#no3->Private

class Base:

    def __init__(self):
        self.no1=11         #public
        self._no2=21        #protected
        self.__no3=51       #private

    def fun(self):                                  #public method
        print(self.no1,self._no2,self.__no3)

    def _fun(self):                                 #protected method
        print(self.no1,self._no2,self.__no3)

    def __fun(self):                                #private method
        print(self.no1,self._no2,self.__no3)

class Derived(Base):

    def __init__(self):
        Base.__init__(self)

    def gun(self):
        print(self.no1)
        print(self._no2)
        #print(self.__no3)                    #not allowed

        self.fun()
        self._fun()
        #self.__fun()                       #not allowed

def main():
    bobj=Base()
    print(bobj.no1)
    print(bobj._no2)
    #print(bobj.__no3)      #not allowed

    bobj.fun()
    bobj._fun()
    #bobj.__fun()           #not allowed

    dobj=Derived()
    dobj.gun()

if __name__=="__main__":
    main()