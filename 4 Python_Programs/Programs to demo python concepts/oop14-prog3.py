# 3. Write a program which contains one class named as Arithmetic.
# Arithmetic class contains two instance variables as Value1 ,Value2.
# Inside init method initialise all instance variables to 0.
# There are three instance methods inside class as Accept(), Addition(), Subtraction(), Multiplication(), Division().
# Accept method will accept value of Value1 and Value2 from user.
# Addition() method will perform addition of Value1 ,Value2 and return result.
# Subtraction() method will perform subtraction of Value1 ,Value2 and return result.
# Multiplication() method will perform multiplication of Value1 ,Value2 and return result.
# Division() method will perform division of Value1 ,Value2 and return result.
# After designing the above class call all instance methods by creating multiple objects.

class Arithematic:

    def __init__(self):
        self.Value1=0
        self.Value2=0
        self.Result=0

    def Accept(self):
        self.Value1=int(input("Enter first number:"))
        self.Value2=int(input("Enter second number:"))

    def Addition(self):
        self.Result=self.Value1+self.Value2
        return self.Result

    def Substraction(self):
        self.Result=self.Value1-self.Value2
        return self.Result

    def Multiplication(self):
        self.Result=self.Value1*self.Value2
        return self.Result

    def Division(self):
        self.Result = self.Value1 / self.Value2
        return self.Result

def main():
    obj1=Arithematic()

    obj1.Accept()

    ret=obj1.Addition()
    print("The addition is:",ret)

    ret=obj1.Substraction()
    print("The substraction is:",ret)

    ret=obj1.Multiplication()
    print("The multiplication is:",ret)

    ret=obj1.Division()
    print("The division is:",ret)

if __name__=="__main__":
    main()