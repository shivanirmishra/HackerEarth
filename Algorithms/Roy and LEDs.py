# Write your code here
#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-leds-6/
d,a,b,c = input().split()
t=int(d)
rr=int(a)
gg=int(b)
bb=int(c)

r=[]
g=[]
b=[]

for i in range(10000000):
    r.append(0)
    g.append(0)
    b.append(0)

i=0
while i<t:
    for j in range(rr):
        r[i]=0
        i+=1
        if i >= t:
            break
    for k in range(rr):
        r[i]=1
        i+=1
        if i >= t:
            break

i=0
while i<t:
    for j in range(gg):
        g[i]=0
        i+=1
        if i >= t:
            break
    for j in range(gg):
        g[i]=1
        i+=1
        if i >= t:
            break

i=0      
while i<t:
    for j in range(bb):
        b[i]=0
        i+=1
        if i >= t:
            break
    for j in range(bb):
        b[i]=1
        i+=1
        if i >= t:
            break

RED,GREEN,BLUE,YELLOW,CYAN,MAGENTA,WHITE,BLACK=0,0,0,0,0,0,0,0

    
for i in range(t):
    
    if ( r[i]==1 and g[i]==0 and b[i]==0 ):
        RED+=1
    if ( r[i]==0 and g[i]==1 and b[i]==0 ):
        GREEN+=1
    if ( r[i]==0 and g[i]==0 and b[i]==1 ):
        BLUE+=1
    if ( r[i]==1 and g[i]==1 and b[i]==0 ):
        YELLOW+=1
    if ( r[i]==0 and g[i]==1 and b[i]==1 ):
        CYAN+=1
    if ( r[i]==1 and g[i]==0 and b[i]==1 ):
        MAGENTA+=1
    if ( r[i]==1 and g[i]==1 and b[i]==1 ):
        WHITE+=1
    if ( r[i]==0 and g[i]==0 and b[i]==0 ):
        BLACK+=1
        
        
print(RED,GREEN,BLUE,YELLOW,CYAN,MAGENTA,WHITE,BLACK)