#2. Write a program which contains one class named as Circle.
#Circle class contains three instance variables as Radius ,Area, Circumference.
#That class contains one class variable as PI which is initialise to 3.14.
#Inside init method initialise all instance variables to 0.0.  There are three instance methods inside class as
#Accept(),CalculateArea(), CalculateCircumference(), Display().
#Accept method will accept value of Radius from user.
#CalculateArea() method will calculate area of circle and store it into instance variable Area.
#CalculateCircumference() method will calculate circumference of circle and store it into instance variable Circumference.
#And Display() method will display value of all the instance variables as Radius , Area, Circumference.
#After designing the above class call all instance methods by creating multiple objects.

class Circle:
    PI = 3.14

    def __init__(self):
        self.Radius = 0
        self.Area = 0
        self.Circumference = 0

    def Accept(self):
        self.Radius = int(input("Enter the value of the radius:"))

    def CalculateArea(self):
        self.Area = Circle.PI * self.Radius * self.Radius

    def CalculateCircumference(self):
        self.Circumference = 2 * Circle.PI * self.Radius

    def Display(self):
        print("The area of circle is:", self.Area)
        print("The circumference of circle is:", self.Circumference)


def main():
    obj1 = Circle()
    obj1.Accept()
    obj1.CalculateArea()
    obj1.CalculateCircumference()
    obj1.Display()

    obj2 = Circle()
    obj2.Accept()
    obj2.CalculateArea()
    obj2.CalculateCircumference()
    obj2.Display()


if __name__ == "__main__":
    main()
