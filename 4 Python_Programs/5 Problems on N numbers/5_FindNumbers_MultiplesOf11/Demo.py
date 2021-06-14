'''
Accept N numbers from user and display all such elements which are multiples of 11.
Input : N : 6
Elements : 85 66 3 55 93 88
Output : 66 55 88 
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    for i in range(0,len(arr)):
        print(arr[i]);
        
def CheckDivisibility(arr,brr):
    for i in arr:
        if(i%11 == 0):
            brr.append(i);

def main():
    size = int(input("Enter number of elements:"));
    if(size<=0):
        print("Invalid size");
        return;
    src = [];
    dest = [];
    AcceptElements(src,size);
    print("Elements of the array are:");
    DisplayElements(src);
    CheckDivisibility(src,dest);
    print("Elements multiples of 11:");
    DisplayElements(dest);
    

if __name__ == "__main__":
    main();