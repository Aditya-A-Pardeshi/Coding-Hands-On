class Arithematic:

    def __init__(self, no1, no2):
        self.no1 = no1
        self.no2 = no2

    def Addition(self):
        return self.no1 + self.no2

    def Substraction(self):
        return self.no1 - self.no2


obj = Arithematic(21, 11)

iRet = obj.Addition()
print("The addition is:", iRet)

iRet = obj.Substraction()
print("The substraction is:", iRet)
