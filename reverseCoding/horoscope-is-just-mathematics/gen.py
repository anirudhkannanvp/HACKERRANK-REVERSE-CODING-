from random import randint
t=randint(10,50)
print(t)
s="abcdefghijklmnopqrstuvwxyz"
while(t):
	t-=1
	m,n=randint(800,1000),randint(800,1000)
	a,b="",""
	for i in range(m):
		a+=s[randint(0,25)]
	for i in range(n):
		b+=s[randint(0,25)]
	print(a,b)