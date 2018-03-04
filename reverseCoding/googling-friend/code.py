fib=[1,1]
for i in range(10000):
	fib.append(fib[-1]+fib[-2])
t=int(input())
while(t):
	t-=1
	n=int(input())
	print((fib[n]+n*n+n)%1000000007)