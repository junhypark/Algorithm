import math

def is_prime(n):
    sqr = int(math.sqrt(n))
    for i in range(2,sqr+1):
        if(n%i == 0):
            return False        
    return True

def get_prime(n):
    temp = []

    for i in range(n):
        temp.append(0)

    for i in range(2, n):
        if(temp[i] == 1):
            continue
        j=i
        while(j+i <= len(temp)-1):
            j += i
            temp[j] = 1

    for i,(X) in enumerate(temp):
        if(X == 0):
            print(i, end=" ")
            
# have to fix

x = int(input("put number "))
print("Result 1 is ", is_prime(x))
print("Result 2 is");
get_prime(x)