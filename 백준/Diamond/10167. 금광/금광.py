# 10167 금광
inf = int(2e18)

class SegmentTree:
    def __init__(self, N):
        self.N = N
        t = 0 
        while (1<<t) < N: t += 1
        self.sz = 1<<t
        self.tree = [[0,0,0,0] for _ in range(2*self.sz)] 

    def update(self, pos, value):
        pos += self.sz
        self.tree[pos] = (value,value,value,value)
        while pos > 0:
            pos //= 2
            CL_Lval, CL_Rval, CL_val, CL_all = self.tree[2 * pos]
            CR_Lval, CR_Rval, CR_val, CR_all = self.tree[2 * pos + 1]
            Lval = max(CL_Lval, CL_all+CR_Lval)
            Rval = max(CR_Rval, CR_all+CL_Rval)
            val = max(CL_val, CR_val, CL_Rval+CR_Lval)
            all = CL_all+CR_all
            self.tree[pos] = (Lval,Rval,val,all)

    def get_val(self,n):
        n += self.sz
        return self.tree[n][2]
    
    def get_total_val(self):
        return self.tree[1][2]

N = int(input())
golds = []
input_x = set()
input_y = set()
for n in range(N):
    x, y, w = map(int,input().split())
    input_x.add(x)
    input_y.add(y)
    golds.append((x,y,w))
input_x = sorted(input_x)
input_y = sorted(input_y)
xsz = len(input_x)
ysz = len(input_y)

# 좌표 압축
coord_to_index_x = {coord: index for index, coord in enumerate(input_x)}
coord_to_index_y = {coord: index for index, coord in enumerate(input_y)}
golds_sortby_x = [[] for _ in range(xsz)]
for n in range(N):
    x, y, w = golds[n]
    golds_sortby_x[coord_to_index_x[x]].append([coord_to_index_y[y],w])

ans = 0
for i in range(xsz):
    segment_tree = SegmentTree(ysz)
    for j in range(i,xsz):
        for y,w in golds_sortby_x[j]:
            segment_tree.update(y,segment_tree.get_val(y)+w)
        ans = max(ans,segment_tree.get_total_val())
print(ans)