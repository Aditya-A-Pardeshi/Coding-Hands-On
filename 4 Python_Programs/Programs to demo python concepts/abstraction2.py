class Demo:

    def __init__(self):
        self.public=11
        self._protected=21
        self.__private=51

    def publicfun(self):
        print("Inside publicfun")
        self.__privatefun()

    def _protectedfun(self):
        print("Inside protectedfun")

    def __privatefun(self):
        print("Inside privatefun")

def main():

    obj=Demo()
    print(obj.public)
    print(obj._protected)
    #print(obj.__private)           #not allowed

    obj.publicfun()
    obj._protectedfun()
    #obj.__privatefun()             #not allowed

if __name__=="__main__":
    main()