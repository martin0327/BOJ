n = int(input())

lo, hi = 0, n
tg = -1
while (lo <= hi):
    mid = (lo+hi) // 2
    if ((mid+1)*mid//2 <= n):
        tg = mid 
        lo = mid + 1
    else:
        hi = mid - 1
    
s = (tg+1)*tg//2
rem = n - s
ans = 2*(n-1) 
if (rem == 0): ans -= (tg-2) 
else: ans -= (tg-1)

print(ans)


