#Serial Programming on 1 core
#Parallel Programming on 4 Cores

import os
import time
import multiprocessing

def Square(no):
    return no*no

def ParallelProcessing():
    start=time.time()
    print("Parallel Processing")
    arr=range(100000)

    pobj= multiprocessing.Pool()
    ret=pobj.map(Square,arr)

    end=time.time()
    print("The time taken by Parallel processing is:", end - start)

def SerialProcessing():
    start=time.time()
    print("Serial Processing")

    arr=range(100000)
    print(arr)
    brr=[]

    for i in arr:
        brr.append(Square(i))

    #print("The result of serial processing is:",brr)
    end=time.time()
    print("The time taken by Serial processing is:",end-start)

def main():

    ParallelProcessing()
    SerialProcessing()

if __name__=="__main__":
    main()