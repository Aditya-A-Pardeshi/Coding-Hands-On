'''
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
'''

def Display(s1):
    for i in range(0,len(s1)):
        for j in s1:
            print(j.lower(),end = " ");
        print();


def main():
    s1 = "Marvellous";
    Display(s1);


if __name__ == "__main__":
    main();