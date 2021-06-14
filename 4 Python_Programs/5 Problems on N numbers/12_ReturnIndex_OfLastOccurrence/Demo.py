'''
Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1 
'''

def AcceptElements(arr,size):
    print("Enter the elements:");
    for i in range(0,size):
        arr.append(int(input()));
        
def DisplayElements(arr):
    for i in arr:
        print(i);
        
def FindLastOccurance(arr,no):
    index = -1;
    for i in range(0,len(arr)):
        if(arr[i] == no):
            index = i;
    return index;


def main():
    size = int(input("Enter number of elements: "));
    arr = [];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    num = int(input("Enter element to search:"));
    index = FindLastOccurance(arr,num);
    print("Index: {}".format(index));


if __name__ == "__main__":
    main();