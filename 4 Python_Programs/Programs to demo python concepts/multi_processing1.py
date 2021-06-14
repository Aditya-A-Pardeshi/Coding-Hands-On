import os

def main():

    print("Inside main Process")

    print("PID of current process is:",os.getpid())

    print("The PPID of parent process is:",os.getppid())


if __name__=="__main__":
    main()