
no1=int(input("Enter 1st number:"))
no2=int(input("Enter 2nd number:"))

try:
    ans=no1/no2
    print("The division is:",ans)

except ZeroDivisionError as err:
    print(f"The error occured is: {err}")

finally:
    print("Release all resources")

print("End of exception handling application")