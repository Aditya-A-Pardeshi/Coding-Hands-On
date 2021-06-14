'''
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
'''
# ord() function converts character to ASCII value
def ToggleCase(ch):
    if((ch >= 'A') and (ch <= 'Z')):
        return chr((ord(ch) + 32));
    elif((ch >= 'a') and (ch <= 'z')):
        return chr((ord(ch) - 32));
    return ch;

def main():
    ch = input("Enter character: ");
    result = '\0';
    result = ToggleCase(ch);
    print(result);

if __name__ == "__main__":
    main();