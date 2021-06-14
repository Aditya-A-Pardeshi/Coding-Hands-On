import re

pattern=re.compile("and")
string="hiii and Hello!!! ladies and gentlemen..How are you and also your family??"

print(re.search("and",string))

a=re.search("and",string)
print(a.span())
print(a.start())
print(a.end())
print(a.group())

a=pattern.search(string)
print(a)
print(a.group())
b=pattern.findall(string)
print(b)
c=pattern.fullmatch(string)
print(c)
d=pattern.match(string)
print(d)