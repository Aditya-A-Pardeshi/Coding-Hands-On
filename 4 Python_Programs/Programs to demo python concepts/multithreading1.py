import os
import threading
from time import sleep

def Thread1(no):
    print("Inside Thread1")
    print("The PID of Thread1 is:",os.getpid())
    print("The PPID of Thread1 is:",os.getppid())

    for i in range(no):
        sleep(1)
        print("Thread-1",i)


def Thread2(no):
    print("Inside Thread2")
    print("The PID of Thread2 is:", os.getpid())
    print("The PPID of Thread2 is:", os.getppid())

    for i in range(no):
        sleep(1)
        print("Thread-2", i)

def main():

    print("Inside main thread")

    print("The PID of main thread is:",os.getpid())
    print("The PPID of main thread is:",os.getppid())

    value=10

    t1=threading.Thread(target=Thread1,args=(value,))
    t2 = threading.Thread(target=Thread2, args=(value,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

if __name__=="__main__":
    main()