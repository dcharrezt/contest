n = int(input())

bids = [ int(x) for x in input().split() ]
    
for i in range(n):
    tmp = bids[i]
    while( tmp % 2 == 0 ):
        tmp /= 2
    while( tmp % 3 == 0 ):
        tmp /= 3
    bids[i] = tmp

if bids[1:] == bids[:-1]:
    print("Yes")
else:
    print("No")

