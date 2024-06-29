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
void dump_func() { DUMPOUT << endl; }
template<class Head, class... Tail> void dump_func(Head&& head, Tail&&... tail) {
   DUMPOUT << head;
   if(sizeof...(Tail) > 0) { DUMPOUT << ", "; }
   dump_func(std::move(tail)...);
}
#ifdef DEBUG
#define DEB
#define dump(...)                                                              \
   DUMPOUT << "\033[1m\033[41m"                                                \
           << "  " << string(#__VA_ARGS__) << ": "                             \
           << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]" << endl \
           << "\033[49m\033[0m    ",                                           \
       dump_func(__VA_ARGS__)
#else
#define DEB if(false)
#define dump(...)
#endif

template<typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
   os << "(" << p.first << "," << p.second << ")";
   return os;
}

template<typename T1, typename T2> istream& operator>>(istream& is, pair<T1, T2>& p) {
   is >> p.first >> p.second;
   return is;
}

template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
   os << "[";
   for(int i = 0; i < (int)v.size(); i++) { os << v[i] << (i + 1 != (int)v.size() ? ", " : ""); }
   os << "]";
   return os;
}

template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
   for(int i = 0; i < (int)v.size(); i++) { os << v[i] << endl; }
   return os;
}

template<typename T> ostream& operator<<(ostream& os, const vector<vector<vector<T>>>& v) {
   for(int i = 0; i < (int)v.size(); i++) {
      os << "i = " << i << endl;
      os << v[i];
   }
   return os;
}

template<typename T> istream& operator>>(istream& is, vector<T>& v) {
   for(T& in : v) is >> in;
   return is;
}

template<typename T, typename S> ostream& operator<<(ostream& os, const map<T, S>& mp) {
   for(auto& [key, val] : mp) { os << key << ":" << val << " "; }
   return os;
}

template<typename T> ostream& operator<<(ostream& os, const set<T>& st) {
   os << "{";
   auto itr = st.begin();
   for(int i = 0; i < (int)st.size(); i++) {
      os << *itr << (i + 1 != (int)st.size() ? ", " : "");
      itr++;
   }
   os << "}";
   return os;
}

template<typename T> ostream& operator<<(ostream& os, const multiset<T>& st) {
   auto itr = st.begin();
   for(int i = 0; i < (int)st.size(); i++) {
      os << *itr << (i + 1 != (int)st.size() ? " " : "");
      itr++;
   }
   return os;
}

template<typename T> ostream& operator<<(ostream& os, queue<T> q) {
   while(q.size()) {
      os << q.front() << " ";
      q.pop();
   }
   return os;
}

template<typename T> ostream& operator<<(ostream& os, deque<T> q) {
   while(q.size()) {
      os << q.front() << " ";
      q.pop_front();
   }
   return os;
}

template<typename T> ostream& operator<<(ostream& os, stack<T> st) {
   while(st.size()) {
      os << st.top() << " ";
      st.pop();
   }
   return os;
}

template<class T, class Container, class Compare>
ostream& operator<<(ostream& os, priority_queue<T, Container, Compare> pq) {
   while(pq.size()) {
      os << pq.top() << " ";
      pq.pop();
   }
   return os;
}

int main() {
   cin.tie(0)->sync_with_stdio(0);
   cout << fixed << setprecision(20);

   // your code here...
}
