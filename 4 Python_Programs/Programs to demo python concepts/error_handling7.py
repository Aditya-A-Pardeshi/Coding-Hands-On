try:
    no1=int(input("Enter 1st number:"))
    no2=int(input("Enter 2nd number:"))
    ans=no1/no2

except Exception as err:
    print(f"The error occured is: {err}")

else:
    print("The division is:", ans)

finally:
    print("Release all resources")

print("End of exception handling application")