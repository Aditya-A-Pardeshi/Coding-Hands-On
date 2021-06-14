'''
Python program that demonstrates variables in python
Python is dynamically typed language
type() function returns data type of its argument
'''

def main():
    x = 11;
    y = 3.14;
    z = "Hello world";
    a = 776768247562;
    print("x value: {}, x datatype: {}".format(x,type(x)));
    print("y value: {}, y datatype: {}".format(y,type(y)));
    print("z value: {}, z datatype: {}".format(z,type(z)));
    print("a value: {}, a datatype: {}".format(a,type(a)));

if __name__ == "__main__":
    main();