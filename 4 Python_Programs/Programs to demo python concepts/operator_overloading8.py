class Student:

    def __init__(self, name, m1, m2, m3):
        self.name = name
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def __eq__(self, other):
        return ((self.m1 == other.m1) and (self.m2 == other.m2) and (self.m3 == other.m3))

    def __gt__(self, other):
        return ((self.m1 > other.m1) and (self.m2 > other.m2) and (self.m3 > other.m3))


def main():
    obj1 = Student("Aditya", 70, 91, 80)
    obj2 = Student("Pruthvi", 56, 90, 78)

#we will overload both eq and gt method for both the objects

    if obj1 == obj2:
        print("Both the objects are same")
    else:
        print("Both the objects are different")

    if obj1 > obj2:
        print("object1 is greater")
    else:
        print("object2 is greater")


if __name__ == "__main__":
    main()
