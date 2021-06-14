import os
import multiprocessing


def Process1():
    print("Inside Process1")
    print("The PID of Process1 is:", os.getpid())
    print("The PPID of Parent process of Process1 is:", os.getppid())


def Process2():
    print("Inside Process2")
    print("The PID of Process2 is:", os.getpid())
    print("The PPID of Parent Process of Process2 is:", os.getppid())


def main():
    print("Inside main Process")

    print("PID of main process is:", os.getpid())

    print("The PPID of parent process of main is:", os.getppid())

    p1 = multiprocessing.Process(target=Process1, args=())
    p2 = multiprocessing.Process(target=Process2, args=())

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("End of main process")


if __name__ == "__main__":
    main()
