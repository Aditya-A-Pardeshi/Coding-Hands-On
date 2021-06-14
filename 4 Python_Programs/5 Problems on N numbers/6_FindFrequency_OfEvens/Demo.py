'''
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3 
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    for i in range(0,len(arr)):
        print(arr[i]);
        
def CountEven(arr):
    iCnt = 0;
    for i in arr:
        if(i%2 == 0):
            iCnt = iCnt + 1;
    return iCnt;

def main():
    size = int(input("Enter number of elements:"));
    if(size<=0):
        print("Invalid size");
        return;
    src = [];
    AcceptElements(src,size);
    print("Elements of the array are:");
    DisplayElements(src);
    iCnt = CountEven(src);
    print("Number of even elements are: {}".format(iCnt));

if __name__ == "__main__":
    main();