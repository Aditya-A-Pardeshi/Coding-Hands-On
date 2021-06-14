def my_decorator(func):
    def wrap_func(msg):
        func(msg)
    return wrap_func


@my_decorator
def hello(msg): #passing parameters
    print(msg)

hello("HIIII")