'''
Write a program which accept number from user and check whether it contains 0 in it or not
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero 
'''

def CheckZero(num):
    result = False;
    while(num != 0):
        if(num%10 == 0):
            result = True;
            break;
        num = int(num/10);
    return result;


def main():
    no = int(input("Enter number:"));
    ans = CheckZero(no);
    if(ans == True):
        print("Contains zero");
    else:
        print("Does not contain zero");


if __name__ == "__main__":
    main();