from random import randint
t=randint(1,10)
print(t)
while(t):
	t-=1
	n=randint(1,100)
	q=randint(1,100)
	print(n,q)
	for i in range(n):
		print(randint(1,1000),end=" ")
	print()
	for i in range(q):
		x=randint(1,n)
		y=randint(1,n)
		print(min(x,y),max(x,y),randint(1,1000))