n=input()
n=int(n)

#fibonacci efficient algo 
l=[1,1]
for x in range(len(l),n):
    if n>2:
        l.append(l[len(l)-1]+l[len(l)-2])
print(l)

#fibonacci naive recursion
#Time Complexity : O(2^n)
def fib(n):
    if(n==0 or n==1):
        return 1
    else:
        return fib(n-1)+fib(n-2)
print(fib(n-1))
