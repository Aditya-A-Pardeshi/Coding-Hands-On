class Player:

    def __init__(self, name="Anonymous", age=0):        #Default Parameters
        self.name = name
        self.age = age

    def Display(self):
        print(f"My name is: {self.name}")
        print(f"My age is: {self.age}")

def main():

    print("The information of object1:")
    obj1 = Player()
    obj1.Display()

    print("The information of object2:")
    obj2 = Player("Pruthvi", 24)
    obj2.Display()

if __name__=="__main__":
    main()