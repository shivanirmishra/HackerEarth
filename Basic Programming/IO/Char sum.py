#https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/
a =  input()
t = 0
for c in a:
    t = t + ord(c) - 96
print(t)