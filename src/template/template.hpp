#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 4e18;
using ld = long double;
const ld INFD = INFINITY;
const ld EPS = LDBL_EPSILON;
template<class T, class Comp = less<T>> using p_que = priority_queue<T, vector<T>, Comp>;
array sin90 = {0, 1, 0, -1}, cos90 = {1, 0, -1, 0};
#define p1 first
#define p2 second
#define reps(i, l, r) for(ll i = (l), i##_right = (r); i < i##_right; i++)
#define rep(i, n) reps(i, 0, n)
#define all(a) begin(a), end(a)
#define sz(a) ssize(a)
bool chmin(auto& a, auto b) { return a > b ? a = b, 1 : 0; }
bool chmax(auto& a, auto b) { return a < b ? a = b, 1 : 0; }

#define DEBUG

#define DUMPOUT cerr
void dump_func() {
    DUMPOUT << endl;
}
template <class Head, class... Tail>
void dump_func(Head &&head, Tail &&... tail) {
    DUMPOUT << head;
    if (sizeof...(Tail) > 0) {
        DUMPOUT << ", ";
    }
    dump_func(std::move(tail)...);
}
#ifdef DEBUG
#define DEB
#define dump(...)                                                              \
    DUMPOUT << "\033[1m\033[41m"                                               \
            << "  " << string(#__VA_ARGS__) << ": "                            \
            << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]"        \
            << endl                                                            \
            << "\033[49m\033[0m    ",                                                         \
        dump_func(__VA_ARGS__)
#else
#define DEB if (false)
#define dump(...)
#endif

int main() {
   cin.tie(0)->sync_with_stdio(0);
   cout << fixed << setprecision(20);

   // your code here...
}
