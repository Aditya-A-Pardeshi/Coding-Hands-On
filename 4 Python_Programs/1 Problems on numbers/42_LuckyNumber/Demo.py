'''
Accept N numbers from user and display all lucky numbers from thosee numbers
Lucky number is such a number whose value is addition of its neighbours
Input N = 10
5 8 12 4 -8 8 10 2 2 0
12 4 10 2
'''

def DisplayLuckyNumbers(arr):
    for i in range(1,len(arr)-1):
        if(arr[i] == (arr[i-1] + arr[i+1])):
            print(arr[i],end = " ");

def main():
    size = int(input("Enter size: "));
    arr = [];
    print("Enter {} numbers: ".format(size));
    for i in range(0,size):
        arr.append(int(input()));
    DisplayLuckyNumbers(arr);

if __name__ == "__main__":
    main();