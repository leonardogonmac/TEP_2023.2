s = input().split()


for i in range(len(s)):
    s[i] = int(s[i])

if(len(s) == 4):
    res = min(s)
else:
    res = 0

print(res)