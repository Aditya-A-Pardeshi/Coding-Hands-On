def my_decorator(func):
    def wrap_func(*args,**kwargs):  #passing parameters
        func(*args,**kwargs)
    return wrap_func


@my_decorator
def hello(msg,emoji=":)"):  #positional and keyword arguments
    print(msg,emoji)

hello("HIIII")