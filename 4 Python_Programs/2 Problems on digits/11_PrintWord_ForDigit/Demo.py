'''
Accept single digit number from user and print it into word
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number
'''

def DisplayWord(ch):
    if(ch == '1'):
        print("One");
    elif(ch == '2'):    
        print("Two");
    elif(ch == '3'):    
        print("Three");
    elif(ch == '4'):    
        print("Four");
    elif(ch == '5'):    
        print("Five");
    elif(ch == '6'):    
        print("Six");
    elif(ch == '7'):    
        print("Seven");
    elif(ch == '8'):    
        print();
    elif(ch == 'Eight'):    
        print();    
    elif(ch == '9'):    
        print("Nine");    
    elif(ch == '0'):    
        print("Zero");
    else:
        print("Invalid digit");

def main():
    ch = input("Enter digit: ");
    DisplayWord(ch);

if __name__ == "__main__":
    main();