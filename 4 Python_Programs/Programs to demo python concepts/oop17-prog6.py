# 3. Write a program which contains one class named as Numbers.
# Arithmetic class contains one instance variables as Value.
# Inside init method initialise that instance variables to the value which is accepted from user.
# There are four instance methods inside class as ChkPrime(), ChkPerfect(), SumFactors(),
# Factors().
# ChkPrime() method will returns true if number is prime otherwise return false.
# ChkPerfect() method will returns true if number is perfect otherwise return false.
# Factors() method will display all factors of instance variable.
# SumFactors() method will return addition of all factors. Use this method in any another method
# as a helper method if required.
# After designing the above class call all instance methods by creating multiple objects.

class Arithematic:

    def Accept(self):
        self.value = int(input("Enter the number:"))

    def ChkPrime(self):
        for i in range(2, self.value):
            if (((self.value) % i) == 0):
                break
        if (self.value == (i + 1)):
            return True
        else:
            return False

    def ChkPerfect(self):
        iSum = 0
        for i in range(1, self.value):
            if (((self.value) % i) == 0):
                iSum = iSum + i

        if (self.value == iSum):
            return True
        else:
            return False

    def Factors(self):
        for i in range(1, self.value):
            if (((self.value) % i) == 0):
                print(i)

    def SumFactors(self):
        iSum = 0
        for i in range(1, self.value):
            if (((self.value) % i) == 0):
                iSum = iSum + i
        return iSum


def main():
    obj1 = Arithematic()
    obj1.Accept()
    bRet = obj1.ChkPrime()
    if (bRet == True):
        print("Number is Prime")
    else:
        print("Number is not prime")

    bRet = obj1.ChkPerfect()
    if (bRet == True):
        print("Number is a Perfect Number")
    else:
        print("Number is not a Perfect Number")

    print("The Factors of number are:")
    obj1.Factors()

    iRet = obj1.SumFactors()
    print("The sum of factors is:", iRet)


if __name__ == "__main__":
    main()
