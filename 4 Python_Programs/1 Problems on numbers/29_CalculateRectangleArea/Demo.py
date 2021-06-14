'''
Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834 
'''

def FindRectangleArea(Width,Height):
    if((Width <= 0) or (Height <= 0)):
        print("Invalid dimensions");
        return 0;
    return (Width * Height);

def main():
    Width = float(input("Enter width: "));
    Height = float(input("Enter height: "));
    Area = FindRectangleArea(Width,Height);
    if(Area != 0):
        print("{0:.3f}".format(Area));

if __name__ == "__main__":
    main();