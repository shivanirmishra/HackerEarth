#https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/

t = int(input())
m = int(input())

for i in range(t):
    a = int(input())
    if a < m:
        print("NO")
    else:
        print("YES")