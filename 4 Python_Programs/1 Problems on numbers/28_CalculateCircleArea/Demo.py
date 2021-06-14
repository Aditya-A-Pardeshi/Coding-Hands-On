'''
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
'''

def FindCircleArea(PI,Radius):
    if(Radius<=0):
        print("Invalid radius");
        return 0;
    Area = PI * Radius * Radius;
    return Area;

def main():
    PI = 3.14;
    Radius = float(input("Enter radius: "));
    Area = FindCircleArea(PI,Radius);
    if(Area != 0):
        print("{0:.3f}".format(Area));

if __name__ == "__main__":
    main();