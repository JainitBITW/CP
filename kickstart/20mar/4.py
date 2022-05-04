def check(a):
    n=0
    m=1
    while( a>0):
        x=a%10
        n+=x
        m*=x
        a/=10
    if m%n==0:
        return True
    else:
        return False
        
    
t= int (input())
for i in range(t):
   y= int(input())
   z= int(input())
   ct =0
   for j in range (y, z+1):
       if check(j):
           ct+=1
    
print("Case #", i+1, ": ", ct, sep="")
   
   

