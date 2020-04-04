
def fact(n):
    res=1

    for i in range(1,n+1):
        res*=i 
    return res 

def ncr(n,r):
    return fact(n)/(fact(n-r)*fact(r)) 


n,r=raw_input().split(" ")
n=int(n)
r=int(r)
print (int(ncr(n,r)%1000000007))