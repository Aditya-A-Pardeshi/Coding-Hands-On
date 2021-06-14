class Student:

    def __init__(self, name, m1, m2, m3):
        self.name = name
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def __eq__(self, other):
        if self.m1 == other.m1 and self.m2 == other.m2 and self.m3 == other.m3:
            return True
        else:
            return False


def main():

    obj1 = Student("Aditya", 56, 89, 78)
    obj2 = Student("Pruthvi", 56, 89, 78)

    if obj1 == obj2:                                #eq method is overloaded
        print("Both the objects are same")
    else:
        print("Both the objects are different")


if __name__ == "__main__":
    main()
