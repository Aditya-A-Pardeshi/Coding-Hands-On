employee={11:{"Name":"Piyush","Age":30},21:{"Name":"Amar","Age":22},51:{"Name":"Siddhi","Age":23}}

print(employee)

for eid,emp in employee.items():
    print("The employee id is:",eid)
    for i in emp:
        print(i,emp[i])
    