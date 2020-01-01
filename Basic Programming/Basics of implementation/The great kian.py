#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/
n = int(input())
a = list(map(int, input().split()))
x = 0
y = 0 
z = 0
for i in range(n):
    if i%3 == 0:
        x = x + a[i]
    elif i%3 == 1:
        y = y + a[i]
    else:
        z = z + a[i]
print(str(x) + " " + str(y) + " " + str(z))