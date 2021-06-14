#1.Write a program which contains one class named as Demo.
#Demo class contains two instance variables as no1 ,no2.
#That class contains one class variable as Value.
#There are two instance methods of class as Fun and Gun which displays values of instance variables.
#Initialise instance variable in init method by accepting the values from user.
#After creating the class create the two objects of Demo class as
#Obj1 = Demo(11,21)
#Obj2 = Demo(51,101)
#Now call the instance methods as
#Obj1.Fun()
#Obj2.Fun()
#Obj1.Gun()
#Obj2.Gun()

class Demo:  # Class Declaration
    value = 10  # Class Variables

    def __init__(self, no1, no2):
        self.no1 = no1  # Instance variable
        self.no2 = no2

    def Fun(self):  # Instance method
        print("The value of no1 in Fun is:", self.no1)
        print("The value of no2 in Fun is:", self.no2)

    def Gun(self):  # Instance method
        print("The value of no1 in Gun is:", self.no1)
        print("The value of no2 in Gun is:", self.no2)


def main():
    obj1 = Demo(11, 21)  # obj1 creation
    obj2 = Demo(51, 101)  # obj2 creation

    print("Values for obj1 is:")  # calling the instance method for obj1 and obj2
    obj1.Fun()
    obj1.Gun()

    print("Values for obj2 is:")
    obj2.Fun()
    obj2.Gun()


if __name__ == "__main__":
    main()
