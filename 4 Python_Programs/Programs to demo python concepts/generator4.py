from time import time

def performance(fun):
    def wrap(*args,**kwargs):
        t1=time()
        result=fun(*args,**kwargs)
        t2=time()
        print(f"Your function takes {t2-t1} ms time")
        return result
    return wrap

def main():

    @performance
    def long_time1():
        print("1")
        for i in range(100000000):
            i*5

    @performance
    def long_time2():
        print("2")
        for i in list(range(100000000)):
            i*5

    long_time1()
    long_time2()

if __name__=="__main__":
    main()

#output:
#1
#Your function takes 12.476077318191528 ms time
#2
#Your function takes 40.3953857421875 ms time

#Shows difference between the range and list function.