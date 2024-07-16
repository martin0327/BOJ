#include <bits/stdc++.h>
#define endl "\n"
#define int long long
 
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
 
int maxn = 1e4+7;
int t;
int R,C,r,c;


void move_forward(int fw_dir, int dist, vi &path) {
  for (int i=0; i<dist; i++) {
    path.push_back(fw_dir);
  }
}

void zigzag(int fw_dir, int lr, int lr_dist, int fw_dist, vi &path) {
  // fw_dir: forward direction {0: east, 1: north, 2: west, 3:south}
  // lr : left first or right first {0: left first, 1: right first}
  // lr_dist: left, right direction distance
  // fw_dist: forward direction dist
  int lr_dir;
  if (lr == 0) lr_dir = (fw_dir + 1) % 4;  // left of forward direction
  else lr_dir = (fw_dir - 1) % 4;  // right of forward direction
  
  for (int i=0; i<fw_dist; i++) {
    path.push_back(fw_dir);
    move_forward(lr_dir,lr_dist,path);
    lr_dir = (lr_dir+2) % 4; // change left-right direction
  }
}

void solve4(int R, int C, int r, int c, vi &path) {
  if ((r+c) % 2 == 1) return;
  if (c == 1) {
    move_forward(1,r-1,path);
    move_forward(0,C-1,path);
    zigzag(3,1,C-2,r-1,path);
    zigzag(3,1,C-1,R-r,path);
  }
  else if (r % 2 == 0){
    move_forward(1,r-1,path);
    move_forward(2,c-1,path);
    zigzag(3,0,c-2,r-2,path);
    move_forward(3,2,path);
    zigzag(0,0,1,c-2,path);
    move_forward(0,1,path);
    zigzag(3,1,c-1,R-r-1,path);
    zigzag(0,0,R-1,C-c,path);
  }
  else {
    move_forward(1,r-1,path);
    move_forward(2,c-1,path);
    zigzag(3,0,c-2,r-1,path);
    move_forward(3,R-r,path);
    zigzag(0,0,R-r-1,c-1,path);
    zigzag(0,0,R-1,C-c,path);
  }
}


void solve3(int R, int C, int r, int c, vi &path) {
  if (c == 1) {
    if (r % 2 == 0) {
      move_forward(3,R-r,path); 
      move_forward(0,C-1,path);
      zigzag(1,0,C-2,R-r,path);
      zigzag(1,0,C-1,r-1,path);
    }
    else {
      move_forward(1,r-1,path);
      move_forward(0,C-1,path);
      zigzag(3,1,C-2,r-1,path);
      zigzag(3,1,C-1,R-r,path);
    }
  }
  else {
    if (r % 2 == 0) {
      move_forward(3,R-r,path);
      move_forward(2,c-1,path);
      zigzag(1,1,c-2,R-r,path);
      zigzag(1,1,c-1,r-1,path);
      zigzag(0,1,R-1,C-c,path);
    }
    else {
      move_forward(1,r-1,path);
      move_forward(2,c-1,path);
      zigzag(3,0,c-2,r-1,path);
      zigzag(3,0,c-1,R-r,path);
      zigzag(0,0,R-1,C-c,path);
    }
  }
}

void solve2(int R, int C, int r, int c, vi &path) {
  if (R % 2 == 0) {
    solve3(R,C,r,c,path);
  }
  else if (C % 2 == 0) {
    solve3(C,R,c,r,path);
    vi switch_dict = {3,2,1,0};
    for (int i=0; i<path.size(); i++) {
      path[i] = switch_dict[path[i]];
    }
  }
  else if ((r+c) % 2 == 0){
    solve4(R,C,r,c,path);
  }
}


void solve(int R, int C, int r, int c, vi &path) {
  if (R == 1) {
    if (c == 1) {
      for (int i=0; i<C-1; i++) {
        path.push_back(0);
      }
    }
    else if (c == C) {
      for (int i=0; i<C-1; i++) {
        path.push_back(2);
      }
    } 
  }
  else if (C == 1) {
    if (r == 1) {
      for (int i=0; i<R-1; i++) {
        path.push_back(3);
      }
    }
    else if (r == R) {
      for (int i=0; i<R-1; i++) {
        path.push_back(1);
      }
    }
  }
  else {
    solve2(R,C,r,c,path);
    return;
  }
}


signed main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); 
  cin.tie(nullptr); 


  vector<char> dir_dict = {'R','U','L','D'};

  cin >> t;

  while (t--) {
    cin >> R >> C >> r >> c;
    vi path;
    solve(R,C,r,c,path);
    if (path.empty()) {
      cout << "IMPOSSIBLE" << endl;
    } 
    else {
      for (auto p : path) {
        cout << dir_dict[p];
      }
      cout << endl;
    }
  }

  return 0;
} 

