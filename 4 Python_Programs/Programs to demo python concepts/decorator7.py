# authenticated decorator

user1 = {"name": "Aditya", "valid": True}

def authenticated(func):
    def wrap_func(*args, **kwargs):
        if args[0]["valid"]:
            return func(*args, **kwargs)
    return wrap_func

@authenticated
def messege_friend(user):
    print("Messege send")

messege_friend(user1)
