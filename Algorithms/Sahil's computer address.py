#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sahils-computer-address-20/?utm_campaign=weekly_hackathon_reco&utm_medium=email&utm_source=recommendation&utm_content=hackathon
ip = input()
l = len(ip)
flag,count=0,0

for j in range(l-1): 
    if (ip[j] == '.' and ip[j+1] == '.'):
        flag=1

if (flag == 0 and l > 6):
    n = ip.split('.')    
    for i in n:
        if ( int(i) > 255 or int(i) < 0):
            flag = 1
        count+=1

    if count != 4:
        flag = 1


if (flag == 0 and l > 6):
    print("YES")
else:
    print("NO")