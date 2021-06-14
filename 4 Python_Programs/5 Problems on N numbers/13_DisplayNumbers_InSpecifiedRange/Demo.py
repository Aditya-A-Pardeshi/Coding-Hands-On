'''
Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 
'''

def AcceptElements(arr,size):
    print("Enter the elements:");
    for i in range(0,size):
        arr.append(int(input()));
        
def DisplayElements(arr):
    for i in arr:
        print(i);
        
def DisplayElementsInRange(arr,iStart,iEnd):
    for i in range(0,len(arr)):
        if((arr[i] > iStart) and (arr[i] < iEnd)):
            print(arr[i]);

def main():
    size = int(input("Enter number of elements: "));
    arr = [];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    iStart = int(input("Enter start range:"));
    iEnd = int(input("Enter end range:"));
    DisplayElementsInRange(arr,iStart,iEnd);

if __name__ == "__main__":
    main();