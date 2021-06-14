'''
Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
'''
fact = 1;
def FindFact(num):
    if(num<0):
        num = -num;
    global fact;
    if(num != 0):
        fact = fact * num;
        num = num - 1;
        FindFact(num);
    return fact;
    

def main():
    no = int(input("Enter number: "));
    result = FindFact(no);
    print("Factorial: {}".format(result));

if __name__ == "__main__":
    main();