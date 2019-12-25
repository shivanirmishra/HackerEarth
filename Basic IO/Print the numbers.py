#https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/print-the-numbers/
n = input()
a = list(map(int, input().split()))
print(*a)