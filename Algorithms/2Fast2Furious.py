'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/2-fast-2-furious/?utm_campaign=weekly_hackathon_reco&utm_medium=email&utm_source=recommendation&utm_content=hackathon
# Write your code here
n = int(input())
temp,a,brian,dom=0,0,0,0

x = input().split(" ")
y = input().split(" ")

for i in range(n):
    if abs(temp-int(x[i])) > dom :
        dom = abs(temp-int(x[i]))
    temp = int(x[i])

if abs(temp-int(x[i])) > dom :
    dom = abs(temp-int(x[i]))
    
temp,a = 0,0
for i in range(n):
    if abs(temp-int(y[i])) > brian :
        brian = abs(temp-int(y[i]))
    temp = int(y[i])
    
if abs(temp-int(y[i])) > brian :
    brian = abs(temp-int(y[i]))
    
if brian > dom:
    print("Brian\n")
    print(brian)
elif brian < dom :
    print("Dom\n")
    print(dom)
else :
    print("Tie\n")
    print(dom)
    
