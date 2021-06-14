'''
Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
'''

def CheckAlphabet(ch):
    if(((ch >= 'A') and (ch <= 'Z')) or ((ch >= 'a') and (ch <= 'z'))):
        return True;
    else:
        return False;
    
    
def main():
    ch = input("Enter character:");
    result = False;
    result = CheckAlphabet(ch);
    print(result);

if __name__ == "__main__":
	main();