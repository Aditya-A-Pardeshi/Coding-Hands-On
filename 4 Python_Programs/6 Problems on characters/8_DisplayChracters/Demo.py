'''
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
'''

def DisplayCharacters(ch):
    if((ch >= 'A') and (ch <= 'Z')):
        for i in range(ord(ch),ord('Z')+1):
            print(chr(i),end = " ");
    elif((ch >= 'a') and (ch <= 'z')):
        for i in range(ord(ch),ord('a')-1,-1):
            print(chr(i),end = " ");
    else:
        print(ch);

def main():
    ch = input("Enter character: ");
    DisplayCharacters(ch);

if __name__ == "__main__":
    main();