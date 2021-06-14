'''
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    for i in range(0,len(arr)):
        print(arr[i]);
        
def SearchElement(arr,no):
    ans = False;
    for i in arr:
        if(i == no):
            ans = True;
            break;
    return ans;

def main():
    size = int(input("Enter number of elements:"));
    if(size<=0):
        print("Invalid size");
        return;
    src = [];
    AcceptElements(src,size);
    print("Elements of the array are:");
    DisplayElements(src);
    num = int(input("Enter element to search:"));
    result = SearchElement(src,num);
    if(result == True):
        print("{} is present".format(num));
    else:
        print("{} is not present".format(num));

if __name__ == "__main__":
    main();