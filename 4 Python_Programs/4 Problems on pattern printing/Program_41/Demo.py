'''
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M
 M a
 M a r
 M a r v
 M a r v e
 M a r v e l
 M a r v e l l
 M a r v e l l o
 M a r v e l l o u
 M a r v e l l o u s
'''

def Display(s1):
    for i in range(0,len(s1)):
        for j in range(0,i+1):
            print(s1[j],end = " ");
        print();


def main():
    s1 = "Marvellous";
    Display(s1);


if __name__ == "__main__":
    main();