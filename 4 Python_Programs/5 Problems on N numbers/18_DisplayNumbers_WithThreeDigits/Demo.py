'''
Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input : N : 6 
Elements : 8225 665 3 76 953 858
Output : 665 953 858 
'''

def AcceptElements(arr,size):
    print("Enter the elements:");
    for i in range(0,size):
        arr.append(int(input()));
        
def DisplayElements(arr):
    for i in arr:
        print(i);
        
def DisplayThreeDigitNumber(arr):
    print("Result:");
    for num in arr:
        iCnt = 0;
        temp = num;
        while(temp != 0):
            iCnt = iCnt+1;
            temp = int(temp/10);
        if(iCnt == 3):
            print(num);

def main():
    size = int(input("Enter number of elements: "));
    arr = [];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    DisplayThreeDigitNumber(arr);

if __name__ == "__main__":
    main();