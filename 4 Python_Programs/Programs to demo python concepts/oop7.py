class Player:

    def __init__(self, name="Anonymous", age=0):  # Default Parameters
        self.name = name
        self.age = age

    def Display(self):
        print(f"My name is: {self.name}")
        print(f"My age is: {self.age}")

def main():
    obj = Player()
    help(obj)

if __name__=="__main__":
    main()