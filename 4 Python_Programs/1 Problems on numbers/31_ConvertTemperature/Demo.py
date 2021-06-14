'''
Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
'''

def ConvertTemperature(num):
    return((num - 32) * (5/9));


def main():
    Temperature_F = float(input("Enter temperature in Celcius: "));
    Temperature_C = ConvertTemperature(Temperature_F);
    print("{0:.4f}".format(Temperature_C));


if __name__ == "__main__":
    main();