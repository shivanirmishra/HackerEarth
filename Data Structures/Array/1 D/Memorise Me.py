#https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/memorise-me/
n=int(input())
a = input().split(" ")
x=[]
y=[]
for i in range(100000):
    x.append(0)
    y.append(0)
for i in range(n):
    if int(a[i]) >= 0:
        x[int(a[i])]+=1
    else :
        y[abs(int(a[i]))]+=1

q = int(input())
temp = 0
for i in range(q):
    temp = int(input())
    if (temp >= 0 and int(x[temp]) != 0 ):
        print(x[temp])
    elif (temp < 0 and int(x[temp]) != 0 ):
        print(y[temp])
    else :
        print("NOT PRESENT")