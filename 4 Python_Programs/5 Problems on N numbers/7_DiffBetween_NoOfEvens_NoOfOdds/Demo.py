'''
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3) 
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    for i in range(0,len(arr)):
        print(arr[i]);
        
def FindDiff(arr):
    iEvenCnt = 0;
    iOddCnt = 0;
    for i in arr:
        if(i%2 == 0):
            iEvenCnt = iEvenCnt + 1;
        else:
            iOddCnt = iOddCnt + 1;
    return (iEvenCnt - iOddCnt);

def main():
    size = int(input("Enter number of elements:"));
    if(size<=0):
        print("Invalid size");
        return;
    src = [];
    AcceptElements(src,size);
    print("Elements of the array are:");
    DisplayElements(src);
    iCnt = FindDiff(src);
    print("Difference between number of even and odd elements is: {}".format(iCnt));

if __name__ == "__main__":
    main();