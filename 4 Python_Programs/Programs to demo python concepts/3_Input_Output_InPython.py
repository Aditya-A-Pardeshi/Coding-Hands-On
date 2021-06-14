'''
Demonstration of input output functions in python
print() function displays on standard output device (console)
input() function reads input in string format from standard input device (keyboard)
'''


def main():
    print("Demonstration of Input Output in python");
    
    print("Enter first number: ");
    x = int(input());
    
    print("Enter second number: ");
    y = int(input());
    
    z = x+y;
    
    print("Answer: {}".format(z));

if __name__ == "__main__":
    main();