'''
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0 
'''

def AcceptElements(arr,size):
    print("Enter the elements:");
    for i in range(0,size):
        arr.append(int(input()));
        
def DisplayElements(arr):
    for i in arr:
        print(i);
        
def FindProduct(arr):
    res = False;
    ans = 1;
    for i in arr:
        if(i%2 != 0):
            res = True;
            ans = ans * i;
    if(res == False):
        return 0;
    else:
        return ans;

def main():
    size = int(input("Enter number of elements: "));
    arr = [];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    result = FindProduct(arr);
    print("Answer: {}".format(result));

if __name__ == "__main__":
    main();