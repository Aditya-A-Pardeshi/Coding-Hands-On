'''
Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE 
'''

def CheckCapital(ch):
    if((ch >= 'A') and (ch <= 'Z')):
        return True;
    else:
        return False;
    
    
def main():
    ch = input("Enter character:");
    result = False;
    result = CheckCapital(ch);
    print(result);

if __name__ == "__main__":
	main();