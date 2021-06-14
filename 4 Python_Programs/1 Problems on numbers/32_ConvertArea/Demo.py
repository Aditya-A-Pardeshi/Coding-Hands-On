'''
Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
'''

def ConvertArea(area):
    if(area <= 0):
        print("Inavlid value for area");
        return 0;
    return(area * 0.0929);

def main():
    Area_SF = float(input("Enter area in square feet: "));
    Area_SM = ConvertArea(Area_SF);
    if(Area_SM != 0):
        print("{0:.4f}".format(Area_SM));

if __name__ == "__main__":
    main();