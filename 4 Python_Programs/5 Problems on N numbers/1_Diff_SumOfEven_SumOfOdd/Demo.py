'''
Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    print("Elements of the array are:");
    for i in range(0,len(arr)):
        print(arr[i]);
        
def FindDiff(arr):
    EvenSum = 0;
    OddSum = 0;
    for i in arr:
        if(i%2 == 0):
            EvenSum = EvenSum + i;
        else:
            OddSum = OddSum + i;
    return (EvenSum-OddSum);

def main():
    size = int(input("Enter number of elements:"));
    if(size<=0):
        print("Invalid size");
        return;
    arr = [];
    AcceptElements(arr,size);
    DisplayElements(arr);
    sum = FindDiff(arr);
    print("Difference between summation of even and odd elements: {}".format(sum));

if __name__ == "__main__":
    main();