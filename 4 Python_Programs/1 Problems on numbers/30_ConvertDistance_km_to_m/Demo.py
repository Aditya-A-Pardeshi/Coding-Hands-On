'''
Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
Input : 5
Output : 5000 
'''

def ConvertKmToMeter(num):
    if(num<=0):
        print("Invalid distance");
        return 0;
    return num*1000;

def main():
    Distance = float(input("Enter distance in km: "));
    DistanceInMetere = ConvertKmToMeter(Distance);
    if(DistanceInMetere != 0):
        print("Distance in meter: {}".format(DistanceInMetere));

if __name__ == "__main__":
    main();