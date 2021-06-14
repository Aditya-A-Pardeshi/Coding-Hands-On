'''
Program to demonstrate the command line arguments in python
Note:
command line arguments are stored as a list argv[] declared in sys module
First argument is always the name of python script
run this file as <filename> 10 20
'''

import sys;

def main():
    print("First argument: {}".format(sys.argv[0]));
    print("Second argument: {}".format(sys.argv[1]));
    print("Third argument: {}".format(sys.argv[2]));
    no = int(sys.argv[1]) + int(sys.argv[2]);
    print(no);

if __name__ == "__main__":
    main();