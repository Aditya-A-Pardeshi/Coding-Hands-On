batches={"PPA":"12500","LB":"11000","Python":"13000","Angular":"10000","LSP":"11000"}

names=input("Enter batch name:")

#print("The fees is:",batches[names])
#print(batches.get(names))
print(batches.get(names,"There is no such batch"))