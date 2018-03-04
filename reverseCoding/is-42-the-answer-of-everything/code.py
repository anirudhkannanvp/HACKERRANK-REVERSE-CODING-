from math import gcd
t=int(input())
while(t):
	t-=1
	a,b=list(map(int,input().split()))
	print(gcd(a,b)*42,42,(a*b)//gcd(a,b)+42)