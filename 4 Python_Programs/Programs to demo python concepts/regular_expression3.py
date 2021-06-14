# Password validation minimum 8 characters(first 7->A-Z,a-z,0-9,$%#@ and ends with a number.
import re

pattern = re.compile(r"([A-Za-z0-9$%#@]{7,}[0-9]$)")
password = input("Please enter the password:")

try:
    a = pattern.search(password)
    ret=a.group()

except Exception:
    print("Password doesnt matches the requirement")

else:
    print("Password matches the requirement")