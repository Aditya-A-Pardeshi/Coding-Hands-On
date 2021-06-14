user_name=input("Heyy..Whats your user name?\n")
password=input("Heyy..Whats your password?\n")

password_length=len(password)

secret_password='*' * password_length

print(f'Hey \'{user_name}\' your password \'{secret_password}\' is \'{password_length}\' letter long..')