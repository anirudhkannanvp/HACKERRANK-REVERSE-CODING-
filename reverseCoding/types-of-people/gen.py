from random import randint
t=randint(50,50)
print(t)
while(t):
	t-=1
	n=randint(100000,100000)
	start=randint(1,10000)
	a=list(range(start,start+n))
	print(n)
	print(*a)
	print(a[n-1])