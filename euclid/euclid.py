def gcd(u, v):
    temp = 0
    while(u):
        if(u<v):
            temp = v
            v = u
            u = temp
        u -= v
    return v

def gcd_mod(u, v):
    temp = 0
    while(u):
        if(u<v):
            temp = v
            v = u
            u = temp
        u %= v
    return v

print("Enter two positive integers")
u = int(input())
v = int(input())
print("the result is ", gcd(u,v))
print("Enter two positive integers")
u = int(input())
v = int(input())
print("the result is ", gcd_mod(u,v))