
def fact(n):
    ans=1

    for i in range(1,n+1):
        ans*=i

    return ans

n=input()
print fact(100)