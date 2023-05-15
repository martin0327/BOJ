#include <cassert>
#include <numeric>
#include <type_traits>
 
#ifdef _MSC_VER
#include <intrin.h>
#endif
 
 
#include <utility>
 
#ifdef _MSC_VER
#include <intrin.h>
#endif
 
namespace atcoder {
 
namespace internal {
 
constexpr long long safe_mod(long long x, long long m) {
    x %= m;
    if (x < 0) x += m;
    return x;
}
 
struct barrett {
    unsigned int _m;
    unsigned long long im;
 
    barrett(unsigned int m) : _m(m), im((unsigned long long)(-1) / m + 1) {}
 
    unsigned int umod() const { return _m; }
 
    unsigned int mul(unsigned int a, unsigned int b) const {
 
        unsigned long long z = a;
        z *= b;
#ifdef _MSC_VER
        unsigned long long x;
        _umul128(z, im, &x);
#else
        unsigned long long x =
            (unsigned long long)(((unsigned __int128)(z)*im) >> 64);
#endif
        unsigned int v = (unsigned int)(z - x * _m);
        if (_m <= v) v += _m;
        return v;
    }
};
 
constexpr long long pow_mod_constexpr(long long x, long long n, int m) {
    if (m == 1) return 0;
    unsigned int _m = (unsigned int)(m);
    unsigned long long r = 1;
    unsigned long long y = safe_mod(x, m);
    while (n) {
        if (n & 1) r = (r * y) % _m;
        y = (y * y) % _m;
        n >>= 1;
    }
    return r;
}
 
constexpr bool is_prime_constexpr(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 7 || n == 61) return true;
    if (n % 2 == 0) return false;
    long long d = n - 1;
    while (d % 2 == 0) d /= 2;
    constexpr long long bases[3] = {2, 7, 61};
    for (long long a : bases) {
        long long t = d;
        long long y = pow_mod_constexpr(a, t, n);
        while (t != n - 1 && y != 1 && y != n - 1) {
            y = y * y % n;
            t <<= 1;
        }
        if (y != n - 1 && t % 2 == 0) {
            return false;
        }
    }
    return true;
}
template <int n> constexpr bool is_prime = is_prime_constexpr(n);
 
constexpr std::pair<long long, long long> inv_gcd(long long a, long long b) {
    a = safe_mod(a, b);
    if (a == 0) return {b, 0};
 
    long long s = b, t = a;
    long long m0 = 0, m1 = 1;
 
    while (t) {
        long long u = s / t;
        s -= t * u;
        m0 -= m1 * u;  // |m1 * u| <= |m1| * s <= b
 
 
        auto tmp = s;
        s = t;
        t = tmp;
        tmp = m0;
        m0 = m1;
        m1 = tmp;
    }
    if (m0 < 0) m0 += b / s;
    return {s, m0};
}
 
constexpr int primitive_root_constexpr(int m) {
    if (m == 2) return 1;
    if (m == 167772161) return 3;
    if (m == 469762049) return 3;
    if (m == 754974721) return 11;
    if (m == 998244353) return 3;
    int divs[20] = {};
    divs[0] = 2;
    int cnt = 1;
    int x = (m - 1) / 2;
    while (x % 2 == 0) x /= 2;
    for (int i = 3; (long long)(i)*i <= x; i += 2) {
        if (x % i == 0) {
            divs[cnt++] = i;
            while (x % i == 0) {
                x /= i;
            }
        }
    }
    if (x > 1) {
        divs[cnt++] = x;
    }
    for (int g = 2;; g++) {
        bool ok = true;
        for (int i = 0; i < cnt; i++) {
            if (pow_mod_constexpr(g, (m - 1) / divs[i], m) == 1) {
                ok = false;
                break;
            }
        }
        if (ok) return g;
    }
}
template <int m> constexpr int primitive_root = primitive_root_constexpr(m);
 
}  // namespace internal
 
}  // namespace atcoder
 
 
#include <cassert>
#include <numeric>
#include <type_traits>
 
namespace atcoder {
 
namespace internal {
 
#ifndef _MSC_VER
template <class T>
using is_signed_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value ||
                                  std::is_same<T, __int128>::value,
                              std::true_type,
                              std::false_type>::type;
 
template <class T>
using is_unsigned_int128 =
    typename std::conditional<std::is_same<T, __uint128_t>::value ||
                                  std::is_same<T, unsigned __int128>::value,
                              std::true_type,
                              std::false_type>::type;
 
template <class T>
using make_unsigned_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value,
                              __uint128_t,
                              unsigned __int128>;
 
template <class T>
using is_integral = typename std::conditional<std::is_integral<T>::value ||
                                                  is_signed_int128<T>::value ||
                                                  is_unsigned_int128<T>::value,
                                              std::true_type,
                                              std::false_type>::type;
 
template <class T>
using is_signed_int = typename std::conditional<(is_integral<T>::value &&
                                                 std::is_signed<T>::value) ||
                                                    is_signed_int128<T>::value,
                                                std::true_type,
                                                std::false_type>::type;
 
template <class T>
using is_unsigned_int =
    typename std::conditional<(is_integral<T>::value &&
                               std::is_unsigned<T>::value) ||
                                  is_unsigned_int128<T>::value,
                              std::true_type,
                              std::false_type>::type;
 
template <class T>
using to_unsigned = typename std::conditional<
    is_signed_int128<T>::value,
    make_unsigned_int128<T>,
    typename std::conditional<std::is_signed<T>::value,
                              std::make_unsigned<T>,
                              std::common_type<T>>::type>::type;
 
#else
 
template <class T> using is_integral = typename std::is_integral<T>;
 
template <class T>
using is_signed_int =
    typename std::conditional<is_integral<T>::value && std::is_signed<T>::value,
                              std::true_type,
                              std::false_type>::type;
 
template <class T>
using is_unsigned_int =
    typename std::conditional<is_integral<T>::value &&
                                  std::is_unsigned<T>::value,
                              std::true_type,
                              std::false_type>::type;
 
template <class T>
using to_unsigned = typename std::conditional<is_signed_int<T>::value,
                                              std::make_unsigned<T>,
                                              std::common_type<T>>::type;
 
#endif
 
template <class T>
using is_signed_int_t = std::enable_if_t<is_signed_int<T>::value>;
 
template <class T>
using is_unsigned_int_t = std::enable_if_t<is_unsigned_int<T>::value>;
 
template <class T> using to_unsigned_t = typename to_unsigned<T>::type;
 
}  // namespace internal
 
}  // namespace atcoder
 
 
namespace atcoder {
 
namespace internal {
 
struct modint_base {};
struct static_modint_base : modint_base {};
 
template <class T> using is_modint = std::is_base_of<modint_base, T>;
template <class T> using is_modint_t = std::enable_if_t<is_modint<T>::value>;
 
}  // namespace internal
 
template <int m, std::enable_if_t<(1 <= m)>* = nullptr>
struct static_modint : internal::static_modint_base {
    using mint = static_modint;
 
  public:
    static constexpr int mod() { return m; }
    static mint raw(int v) {
        mint x;
        x._v = v;
        return x;
    }
 
    static_modint() : _v(0) {}
    template <class T, internal::is_signed_int_t<T>* = nullptr>
    static_modint(T v) {
        long long x = (long long)(v % (long long)(umod()));
        if (x < 0) x += umod();
        _v = (unsigned int)(x);
    }
    template <class T, internal::is_unsigned_int_t<T>* = nullptr>
    static_modint(T v) {
        _v = (unsigned int)(v % umod());
    }
 
    unsigned int val() const { return _v; }
 
    mint& operator++() {
        _v++;
        if (_v == umod()) _v = 0;
        return *this;
    }
    mint& operator--() {
        if (_v == 0) _v = umod();
        _v--;
        return *this;
    }
    mint operator++(int) {
        mint result = *this;
        ++*this;
        return result;
    }
    mint operator--(int) {
        mint result = *this;
        --*this;
        return result;
    }
 
    mint& operator+=(const mint& rhs) {
        _v += rhs._v;
        if (_v >= umod()) _v -= umod();
        return *this;
    }
    mint& operator-=(const mint& rhs) {
        _v -= rhs._v;
        if (_v >= umod()) _v += umod();
        return *this;
    }
    mint& operator*=(const mint& rhs) {
        unsigned long long z = _v;
        z *= rhs._v;
        _v = (unsigned int)(z % umod());
        return *this;
    }
    mint& operator/=(const mint& rhs) { return *this = *this * rhs.inv(); }
 
    mint operator+() const { return *this; }
    mint operator-() const { return mint() - *this; }
 
    mint pow(long long n) const {
        assert(0 <= n);
        mint x = *this, r = 1;
        while (n) {
            if (n & 1) r *= x;
            x *= x;
            n >>= 1;
        }
        return r;
    }
    mint inv() const {
        if (prime) {
            assert(_v);
            return pow(umod() - 2);
        } else {
            auto eg = internal::inv_gcd(_v, m);
            assert(eg.first == 1);
            return eg.second;
        }
    }
 
    friend mint operator+(const mint& lhs, const mint& rhs) {
        return mint(lhs) += rhs;
    }
    friend mint operator-(const mint& lhs, const mint& rhs) {
        return mint(lhs) -= rhs;
    }
    friend mint operator*(const mint& lhs, const mint& rhs) {
        return mint(lhs) *= rhs;
    }
    friend mint operator/(const mint& lhs, const mint& rhs) {
        return mint(lhs) /= rhs;
    }
    friend bool operator==(const mint& lhs, const mint& rhs) {
        return lhs._v == rhs._v;
    }
    friend bool operator!=(const mint& lhs, const mint& rhs) {
        return lhs._v != rhs._v;
    }
 
  private:
    unsigned int _v;
    static constexpr unsigned int umod() { return m; }
    static constexpr bool prime = internal::is_prime<m>;
};
 
template <int id> struct dynamic_modint : internal::modint_base {
    using mint = dynamic_modint;
 
  public:
    static int mod() { return (int)(bt.umod()); }
    static void set_mod(int m) {
        assert(1 <= m);
        bt = internal::barrett(m);
    }
    static mint raw(int v) {
        mint x;
        x._v = v;
        return x;
    }
 
    dynamic_modint() : _v(0) {}
    template <class T, internal::is_signed_int_t<T>* = nullptr>
    dynamic_modint(T v) {
        long long x = (long long)(v % (long long)(mod()));
        if (x < 0) x += mod();
        _v = (unsigned int)(x);
    }
    template <class T, internal::is_unsigned_int_t<T>* = nullptr>
    dynamic_modint(T v) {
        _v = (unsigned int)(v % mod());
    }
 
    unsigned int val() const { return _v; }
 
    mint& operator++() {
        _v++;
        if (_v == umod()) _v = 0;
        return *this;
    }
    mint& operator--() {
        if (_v == 0) _v = umod();
        _v--;
        return *this;
    }
    mint operator++(int) {
        mint result = *this;
        ++*this;
        return result;
    }
    mint operator--(int) {
        mint result = *this;
        --*this;
        return result;
    }
 
    mint& operator+=(const mint& rhs) {
        _v += rhs._v;
        if (_v >= umod()) _v -= umod();
        return *this;
    }
    mint& operator-=(const mint& rhs) {
        _v += mod() - rhs._v;
        if (_v >= umod()) _v -= umod();
        return *this;
    }
    mint& operator*=(const mint& rhs) {
        _v = bt.mul(_v, rhs._v);
        return *this;
    }
    mint& operator/=(const mint& rhs) { return *this = *this * rhs.inv(); }
 
    mint operator+() const { return *this; }
    mint operator-() const { return mint() - *this; }
 
    mint pow(long long n) const {
        assert(0 <= n);
        mint x = *this, r = 1;
        while (n) {
            if (n & 1) r *= x;
            x *= x;
            n >>= 1;
        }
        return r;
    }
    mint inv() const {
        auto eg = internal::inv_gcd(_v, mod());
        assert(eg.first == 1);
        return eg.second;
    }
 
    friend mint operator+(const mint& lhs, const mint& rhs) {
        return mint(lhs) += rhs;
    }
    friend mint operator-(const mint& lhs, const mint& rhs) {
        return mint(lhs) -= rhs;
    }
    friend mint operator*(const mint& lhs, const mint& rhs) {
        return mint(lhs) *= rhs;
    }
    friend mint operator/(const mint& lhs, const mint& rhs) {
        return mint(lhs) /= rhs;
    }
    friend bool operator==(const mint& lhs, const mint& rhs) {
        return lhs._v == rhs._v;
    }
    friend bool operator!=(const mint& lhs, const mint& rhs) {
        return lhs._v != rhs._v;
    }
 
  private:
    unsigned int _v;
    static internal::barrett bt;
    static unsigned int umod() { return bt.umod(); }
};
template <int id> internal::barrett dynamic_modint<id>::bt = 998244353;
 
using modint998244353 = static_modint<998244353>;
using modint1000000007 = static_modint<1000000007>;
using modint = dynamic_modint<-1>;
 
namespace internal {
 
template <class T>
using is_static_modint = std::is_base_of<internal::static_modint_base, T>;
 
template <class T>
using is_static_modint_t = std::enable_if_t<is_static_modint<T>::value>;
 
template <class> struct is_dynamic_modint : public std::false_type {};
template <int id>
struct is_dynamic_modint<dynamic_modint<id>> : public std::true_type {};
 
template <class T>
using is_dynamic_modint_t = std::enable_if_t<is_dynamic_modint<T>::value>;
 
}  // namespace internal
 
}  // namespace atcoder
 
using namespace atcoder;

#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define PI 3.14159265359

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

template<int D, typename T>
struct Vec : public vector<Vec<D - 1, T>> {
  static_assert(D >= 1, "Vector dimension must be greater than zero!");
  template<typename... Args>
  Vec(int n = 0, Args... args) : vector<Vec<D - 1, T>>(n, Vec<D - 1, T>(args...)) {
  }
};

template<typename T>
struct Vec<1, T> : public vector<T> {
  Vec(int n = 0, const T& val = T()) : vector<T>(n, val) {
  }
};

template<typename T>
void printv(vector<T> v) {
  for (auto e : v) {
    cout << e << " ";
  } cout << endl;
}
 
template<typename T>
void printvv(vector<T> vv) {
  for (int i=0; i<vv.size(); i++) {
    cout << i << ": ";
    for (auto e : vv[i]) {
      cout << e << " ";
    } cout << endl;
  }
}

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


int cnt_leq_x(vi &a, int x) {
  int ret = upper_bound(a.begin(), a.end(), x) - a.begin();
  return ret;
}

int cnt_leq_x(vi &a, int x, int lo, int hi) {
  int ret = upper_bound(a.begin()+lo, a.begin()+hi, x) - a.begin()+lo;
  return ret;
}

int cnt_lt_x(vi &a, int x) {
  int ret = lower_bound(a.begin(), a.end(), x) - a.begin();
  return ret;
}

int cnt_lt_x(vi &a, int x, int lo, int hi) {
  int ret = lower_bound(a.begin()+lo, a.begin()+hi, x) - a.begin()+lo;
  return ret;
}

int cnt_geq_x(vi &a, int x) {
  int ret = a.end() - lower_bound(a.begin(), a.end(), x);
  return ret;
}

int cnt_geq_x(vi &a, int x, int lo, int hi) {
  int ret = a.begin()+hi - lower_bound(a.begin()+lo, a.begin()+hi, x);
  return ret;
}

int cnt_gt_x(vi &a, int x) {
  int ret = a.end() - upper_bound(a.begin(), a.end(), x);
  return ret;
}

int cnt_gt_x(vi &a, int x, int lo, int hi) {
  int ret = a.begin()+hi - upper_bound(a.begin()+lo, a.begin()+hi, x);
  return ret;
}

bool mul_overflow(int a, int b) {
  int c;
  return __builtin_mul_overflow(a, b, &c);
}

template<typename T>
T sum(vector<T> &a) {
  T ret = 0;
  for (auto v : a) ret += v;
  return ret;
}

template<typename T>
T max(vector<T> &a) {
  T ret = *max_element(a.begin(), a.end());
  return ret;
}

template<typename T>
T min(vector<T> &a) {
  T ret = *min_element(a.begin(), a.end());
  return ret;
}

int int_pow(int base, int exp)
{
  int res = 1;
  while (exp) {
    if (exp & 1) res *= base;
    exp >>= 1;
    base *= base;
  }
  return res;
}

int highest_power_of_2(int n)
{
  while((n & (n-1)) != 0){
    n = n & (n-1);
  }
  return n;
}

int char2int(char x) {
  int y = x - '0';
  if (0<=y && y<=9) return y;
  else return x - 'a' + 10;
}

struct FenwickTree{ 
  int n;
  vi arr;

  FenwickTree(int n) {
    this->n = n;
    arr.assign(n, 0);
  }

  FenwickTree(vi a) : FenwickTree((int) a.size()) {
    for (int i=0; i< (int) a.size(); i++) {
      add(i, a[i]);
    }
  }

  int sum(int i) {
    int ret = 0;
    while (i>0) {
      ret += arr[i];
      i -= i & -i;
    }
    return ret;
  }

  int sum(int l, int r) {
    return sum(r) - sum(l-1);
  }

  void add(int i, int delta) {
    while (i < n) {
      arr[i] += delta;
      i += i & -i;
    }
  }
};

typedef int item; 
struct segtree{
  int size;
  vector<item> arr;
 
  const item identity = 0;
 
  item single (item v) {
    return v;
  }
 
  item merge(item a, item b) {
    return max(a,b);
  }
 
  void init(int n) {
    size = 1;
    while (size < n) size *= 2;
    arr.assign(2*size, identity);
  }
 
  void build(vector<item> &a, int x, int lx, int rx) {
    if (rx - lx == 1) {
      if (0<=lx && lx < (int) a.size()) {
        arr[x] = single(a[lx]);
      }
      return;
    }
    int m = (lx + rx) / 2;
    build(a, 2*x+1, lx, m);
    build(a, 2*x+2, m, rx);
 
    arr[x] = merge(arr[2*x+1], arr[2*x+2]);
  }
 
  void build(vector<item> &a) {
    build(a, 0, 0, size);
  }
 
  void set(int i, item v, int x, int lx, int rx) {
    if (rx - lx == 1) {
      arr[x] = single(v);
      return;
    }
 
    int m = (lx + rx) / 2;
 
    if (i < m) set(i, v, 2*x+1, lx, m);
    else set(i, v, 2*x+2, m, rx);
 
    arr[x] = merge(arr[2*x+1], arr[2*x+2]);
  }
 
  void set(int i, item v) {
    set(i, v, 0, 0, size);
  }
 
  item calc(int l, int r, int x, int lx, int rx) {
    if (r<=lx || rx <= l) return identity; 
    if (l<=lx && rx <= r) return arr[x];
 
    int m = (lx+rx) / 2;
    
    item left = calc(l, r, 2*x+1, lx, m);
    item right = calc(l, r, 2*x+2, m, rx);
 
    return merge(left, right);
  }
 
  item calc(int l, int r) {
    return calc(l, r, 0, 0, size);
  }
 
  int find(int k, int l, int x, int lx, int rx) {
    if (rx - lx == 1) {
      if (0<=lx && lx<=size) {
        if (arr[x] >= k && lx >=l) return lx;
        else return -1;
      }
    }
    int m = (lx + rx) / 2;
    int left = arr[2*x+1];
 
    if (l<m && k<=left) {
      int temp = find(k,l,2*x+1,lx,m);
      if (temp == -1) return find(k,l,2*x+2,m,rx);
      else return temp;
    } else {
      return find(k,l,2*x+2,m,rx);
    }
  }
 
  int find(int k, int l) {
    return find(k,l,0,0,size);
  }
};


using mint = modint1000000007;
 
vector<mint> fact;
 
void init_fact(int n) {
  fact.resize(n+1);
 
  fact[0]=1;
  for (int i=1; i<=n; i++) {
    fact[i] = fact[i-1] * i;
  }
}
 
mint ncr(int n, int r) {
  mint numer = fact[n];
  mint denom = fact[r] * fact[n-r];
  return numer * denom.inv();
}

void io_util() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); 
  cin.tie(nullptr); 
  cout.precision(17);
}

///////////////////////////////////////////////////////////////////////


int sq(int x) {
  return x*x;
}

signed main() {
  io_util();

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vi x(n), y(n);
    for (int i=0; i<n; i++) {
      cin >> x[i] >> y[i];
    }
    double ans = 3e18;
    for (int mask = 0; mask<(1<<n); mask++) {
      int m = 0;
      for (int i=0; i<n; i++) {
        if ((mask>>i)&1) m++;
      }
      if (m!=n/2) continue;
      int x1,x2,y1,y2;
      x1 = x2 = y1 = y2 = 0;
      for (int i=0; i<n; i++) {
        if ((mask>>i)&1) {
          x1 += x[i];
          y1 += y[i];
        }
        else {
          x2 += x[i];
          y2 += y[i];
        }
      }
      double temp = sqrt(sq(x1-x2) + sq(y1-y2));
      ans = min(ans, temp);
    }
    cout << ans << endl;

  }


 
  return 0;
}
