'''
Program to demonstrate datatypes in python and concept of typecasting
'''

def main():
    print("Demonstration of data types");
    
    no = None;
    print(no);
    print(type(no));
    print(id(no));
    
    no = 11;
    print(no);
    print(type(no));
    print(id(no));
    
    no = 3.14;
    print(no);
    print(type(no));
    print(id(no));
    
    no = True;
    print(no);
    print(type(no));
    print(id(no));
    
    no = "Hello";
    print(no);
    print(type(no));
    print(id(no));
    
    no = 3+4j;
    print(no);
    print(type(no));
    print(id(no));
    
    #typecasting - convert from one data type to another
    
    no = 11;
    print(type(no));
    no = (float(no));
    print(type(no));
    
    no = 3.14;
    print(type(no));
    no = (int(no));
    print(type(no));
    
    #sequence data types
    
    List1 = [10,20,30,40];
    print(List1);
    print(type(List1));
    
    Set1 = {10,20,30,40};
    print(Set1);
    print(type(Set1));
    
    Tup1 = (10,20,30,40);
    print(Tup1);
    print(type(Tup1));
    
    List2 = list(range(1,10));
    print(List2);
    
    #dictionary data type
    Student = {"Anwesha":10,"Utkarsh":7,"Rahul":11};
    print(Student);
    print(type(Student));
    print(Student.keys());
    print(Student.values());
    print(Student['Anwesha']);

if __name__ == "__main__":
    main();