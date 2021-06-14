class Student:

    def __init__(self, x, y):
        self.i = x
        self.j = y

    def __add__(self, other):       #add method is overloaded
        no1 = self.i + other.i
        no2 = self.j + other.j
        s3=Student(no1,no2)
        return s3

    def __str__(self):              #str method is overloaded
        return self.i,self.j

def main():
    s1 = Student(10, 20)
    s2 = Student(30, 40)

    s3 = s1 + s2
    print(s3.i,s3.j)

    a=9
    print(a.__str__())

    print(s1.__str__())
    print(s2.__str__())
    print(s3.__str__())

if __name__ == "__main__":
    main()
