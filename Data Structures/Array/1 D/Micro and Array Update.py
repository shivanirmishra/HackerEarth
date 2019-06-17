#https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
t = int(input())
while t:
    t-=1
    a,b = input().split()
    n=int(a)
    k=int(b)
    numbers = [int(n) for n in input().split()]
    small = 0
    for i in range(n):
        if i == 0:
            small=numbers[i]
        else:
            if small > numbers[i]:
                small = numbers[i]
    
    print(k-small)