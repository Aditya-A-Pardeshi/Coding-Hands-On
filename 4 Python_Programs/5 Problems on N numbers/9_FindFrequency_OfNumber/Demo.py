'''
Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0 
'''

def AcceptElements(arr,size):
    print("Enter elements: ");
    for i in range(0,size):
        arr.append(int(input()));
     
def DisplayElements(arr):
    for i in range(0,len(arr)):
        print(arr[i]);
        
def FindFrequency(arr,no):
    iCnt = 0;
    for i in arr:
        if(i == no):
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
    num = int(input("Enter element to search:"));
    result = FindFrequency(src,num);
    print("Frequency of {} is: {}".format(num,result));

if __name__ == "__main__":
    main();