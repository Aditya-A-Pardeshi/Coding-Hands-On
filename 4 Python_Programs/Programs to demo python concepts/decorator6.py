#performance decorator

from time import time

def performance(func):
    def wrap_func(*args,**kwargs):
        t1=time()
        result=func(*args,**kwargs)
        t2=time()
        print(f"Your code takes {t2-t1} ms")
        return result
    return wrap_func()

@performance
def long_time():
    for i in range(10000000):
        i*5

long_time

