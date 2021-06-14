import os

def main():
    print("The number of cores in your CPU is:",os.cpu_count())

if __name__=="__main__":
    main()