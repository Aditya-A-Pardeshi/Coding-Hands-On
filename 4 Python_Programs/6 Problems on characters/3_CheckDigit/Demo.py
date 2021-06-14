'''
Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
'''

def CheckDigit(ch):
    if((ch >= '0') and (ch <= '9')):
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