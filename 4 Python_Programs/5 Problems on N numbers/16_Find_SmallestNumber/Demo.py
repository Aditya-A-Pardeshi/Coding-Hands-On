'''
Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3 
'''

def AcceptElements(arr,size):
    print("Enter the elements:");
    for i in range(0,size):
        arr.append(int(input()));
        
def DisplayElements(arr):
    for i in arr:
        print(i);
        
def FindSmallest(arr):
    min = arr[0];
    for i in arr:
        if(i<min):
            min = i;
    return min;

def main():
    size = int(input("Enter number of elements: "));
    arr = [];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    result = FindSmallest(arr);
    print("Minimum: {}".format(result));

if __name__ == "__main__":
    main();