n = int(input())
ls = []
ks = []
while(n!=0):
  ls.append(n%10)
  n = n//10
for i in range(len(ls)):
  ks.append(ls[len(ls)-i-1])
print(ls==ks)