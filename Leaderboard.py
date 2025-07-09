def duplicate(rank,newl):
 for i in range(0,len(rank)):
    for j in range(i+1,len(rank)-1):
        if(rank[i]==rank[j]):
            newl.pop(j)

n=int(input())
rank=[int(x) for x in input().split()]
m=int(input())
play=[int(x) for x in input().split()]
newl=rank
duplicate(rank,newl)
for i in play:
    rank.append(i)
    rank.sort(reverse=True)
    duplicate(rank,newl)
    for j in  range(0,len(rank)):
        if(rank[j]==i):
         print(j+1)
    