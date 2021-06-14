'''
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S 
'''

def Display(s1):
    for i in range(0,len(s1)):
        for j in s1:
            print(j.upper(),end = " ");
        print();


def main():
    s1 = "Marvellous";
    Display(s1);


if __name__ == "__main__":
    main();