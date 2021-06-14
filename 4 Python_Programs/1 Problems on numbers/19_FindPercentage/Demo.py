'''
Write a program which accept total marks & obtained marks from user and calculate percentage
Input : 1000 745
Output : 74.5% 
'''

def FindPercentage(TotalMarks,ObtainedMarks):
    return ((ObtainedMarks/TotalMarks) * 100);

def main():
    TotalMarks = int(input("Enter total marks: "));
    ObtainedMarks = int(input("Enter obtained marks: "));
    Percentage = FindPercentage(TotalMarks,ObtainedMarks);
    print("{}%".format(Percentage));

if __name__ == "__main__":
    main();