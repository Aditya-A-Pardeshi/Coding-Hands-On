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
        
def SumOfDigits(arr):
    print("Result:");
    for i in arr:
        iSum = 0;
        temp = i;
        while(temp != 0):
            iSum = iSum+(temp%10);
            temp = int(temp/10);
        print(i);
		
def main():
    size = int(input("Enter number of elements: "));
    arr = [size];
    AcceptElements(arr,size);
    print("Entered elements are:");
    DisplayElements(arr);
    SumOfDigits(arr);

if __name__ == "__main__":
    main();