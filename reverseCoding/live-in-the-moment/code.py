def f(n):
	ans=1
	while(n):
		ans*=max(1,n%10)
		n//=10
	return ans
out=[0]
for i in range(1,100001):
	out.append(out[i-1]+f(out[i-1]))
t=int(input())
while(t):
	t-=1
	n=int(input())
	print(out[n])