'''
Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE 
'''

def CheckDigit(ch):
    if((ch >= 'a') and (ch <= 'z')):
        return True;
    else:
        return False;
    
    
def main():
    ch = input("Enter character:");
    result = False;
    result = CheckDigit(ch);
    print(result);

if __name__ == "__main__":
	main();