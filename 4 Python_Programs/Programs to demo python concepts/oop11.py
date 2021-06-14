class Student:
    School_Name="Navjeevan"

    def __init__(self,no1,no2,no3):
        self.no1=no1
        self.no2=no2
        self.no3=no3

    def Average(self):
        return (self.no1+self.no2+self.no3)/3

    @classmethod
    def Display_School(cls):
        print("The school name is:",Student.School_Name)

    @staticmethod
    def Display():
        print("Inside static method")

def main():

    obj=Student(10,20,30)
    ret=obj.Average()
    print("The average is:",ret)
    obj.Display_School()
    obj.Display()

if __name__=="__main__":
    main()