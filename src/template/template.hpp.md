---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/template/template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\nconst ll INF = 4e18;\nusing ld =\
    \ long double;\nconst ld INFD = INFINITY;\nconst ld EPS = LDBL_EPSILON;\ntemplate<class\
    \ T, class Comp = less<T>> using p_que = priority_queue<T, vector<T>, Comp>;\n\
    array sin90 = {0, 1, 0, -1}, cos90 = {1, 0, -1, 0};\n#define p1 first\n#define\
    \ p2 second\n#define reps(i, l, r) for(ll i = (l), i##_right = (r); i < i##_right;\
    \ i++)\n#define rep(i, n) reps(i, 0, n)\n#define all(a) begin(a), end(a)\n#define\
    \ sz(a) ssize(a)\nbool chmin(auto& a, auto b) { return a > b ? a = b, 1 : 0; }\n\
    bool chmax(auto& a, auto b) { return a < b ? a = b, 1 : 0; }\n\n#define DEBUG\n\
    \n#define DUMPOUT cerr\nvoid dump_func() {\n    DUMPOUT << endl;\n}\ntemplate\
    \ <class Head, class... Tail>\nvoid dump_func(Head &&head, Tail &&... tail) {\n\
    \    DUMPOUT << head;\n    if (sizeof...(Tail) > 0) {\n        DUMPOUT << \",\
    \ \";\n    }\n    dump_func(std::move(tail)...);\n}\n#ifdef DEBUG\n#define DEB\n\
    #define dump(...)                                                            \
    \  \\\n    DUMPOUT << \"\\033[1m\\033[41m\"                                  \
    \             \\\n            << \"  \" << string(#__VA_ARGS__) << \": \"    \
    \                        \\\n            << \"[\" << to_string(__LINE__) << \"\
    :\" << __FUNCTION__ << \"]\"        \\\n            << endl                  \
    \                                          \\\n            << \"\\033[49m\\033[0m\
    \    \",                                                         \\\n        dump_func(__VA_ARGS__)\n\
    #else\n#define DEB if (false)\n#define dump(...)\n#endif\n\ntemplate<typename\
    \ T1, typename T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) {\n\
    \   os << \"(\" << p.first << \",\" << p.second << \")\";\n   return os;\n}\n\n\
    template<typename T1, typename T2> istream& operator>>(istream& is, pair<T1, T2>&\
    \ p) {\n   is >> p.first >> p.second;\n   return is;\n}\n\ntemplate<typename T>\
    \ ostream& operator<<(ostream& os, const vector<T>& v) {\n   os << \"[\";\n  \
    \ for(int i = 0; i < (int)v.size(); i++) { os << v[i] << (i + 1 != (int)v.size()\
    \ ? \", \" : \"\"); }\n   os << \"]\";\n   return os;\n}\n\ntemplate<typename\
    \ T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {\n   for(int\
    \ i = 0; i < (int)v.size(); i++) { os << v[i] << endl; }\n   return os;\n}\n\n\
    template<typename T> ostream& operator<<(ostream& os, const vector<vector<vector<T>>>&\
    \ v) {\n   for(int i = 0; i < (int)v.size(); i++) {\n      os << \"i = \" << i\
    \ << endl;\n      os << v[i];\n   }\n   return os;\n}\n\ntemplate<typename T>\
    \ istream& operator>>(istream& is, vector<T>& v) {\n   for(T& in : v) is >> in;\n\
    \   return is;\n}\n\ntemplate<typename T, typename S> ostream& operator<<(ostream&\
    \ os, const map<T, S>& mp) {\n   for(auto& [key, val] : mp) { os << key << \"\
    :\" << val << \" \"; }\n   return os;\n}\n\ntemplate<typename T> ostream& operator<<(ostream&\
    \ os, const set<T>& st) {\n   os << \"{\";\n   auto itr = st.begin();\n   for(int\
    \ i = 0; i < (int)st.size(); i++) {\n      os << *itr << (i + 1 != (int)st.size()\
    \ ? \", \" : \"\");\n      itr++;\n   }\n   os << \"}\";\n   return os;\n}\n\n\
    template<typename T> ostream& operator<<(ostream& os, const multiset<T>& st) {\n\
    \   auto itr = st.begin();\n   for(int i = 0; i < (int)st.size(); i++) {\n   \
    \   os << *itr << (i + 1 != (int)st.size() ? \" \" : \"\");\n      itr++;\n  \
    \ }\n   return os;\n}\n\ntemplate<typename T> ostream& operator<<(ostream& os,\
    \ queue<T> q) {\n   while(q.size()) {\n      os << q.front() << \" \";\n     \
    \ q.pop();\n   }\n   return os;\n}\n\ntemplate<typename T> ostream& operator<<(ostream&\
    \ os, deque<T> q) {\n   while(q.size()) {\n      os << q.front() << \" \";\n \
    \     q.pop_front();\n   }\n   return os;\n}\n\ntemplate<typename T> ostream&\
    \ operator<<(ostream& os, stack<T> st) {\n   while(st.size()) {\n      os << st.top()\
    \ << \" \";\n      st.pop();\n   }\n   return os;\n}\n\ntemplate<class T, class\
    \ Container, class Compare>\nostream& operator<<(ostream& os, priority_queue<T,\
    \ Container, Compare> pq) {\n   while(pq.size()) {\n      os << pq.top() << \"\
    \ \";\n      pq.pop();\n   }\n   return os;\n}\n\nint main() {\n   cin.tie(0)->sync_with_stdio(0);\n\
    \   cout << fixed << setprecision(20);\n\n   // your code here...\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nconst\
    \ ll INF = 4e18;\nusing ld = long double;\nconst ld INFD = INFINITY;\nconst ld\
    \ EPS = LDBL_EPSILON;\ntemplate<class T, class Comp = less<T>> using p_que = priority_queue<T,\
    \ vector<T>, Comp>;\narray sin90 = {0, 1, 0, -1}, cos90 = {1, 0, -1, 0};\n#define\
    \ p1 first\n#define p2 second\n#define reps(i, l, r) for(ll i = (l), i##_right\
    \ = (r); i < i##_right; i++)\n#define rep(i, n) reps(i, 0, n)\n#define all(a)\
    \ begin(a), end(a)\n#define sz(a) ssize(a)\nbool chmin(auto& a, auto b) { return\
    \ a > b ? a = b, 1 : 0; }\nbool chmax(auto& a, auto b) { return a < b ? a = b,\
    \ 1 : 0; }\n\n#define DEBUG\n\n#define DUMPOUT cerr\nvoid dump_func() {\n    DUMPOUT\
    \ << endl;\n}\ntemplate <class Head, class... Tail>\nvoid dump_func(Head &&head,\
    \ Tail &&... tail) {\n    DUMPOUT << head;\n    if (sizeof...(Tail) > 0) {\n \
    \       DUMPOUT << \", \";\n    }\n    dump_func(std::move(tail)...);\n}\n#ifdef\
    \ DEBUG\n#define DEB\n#define dump(...)                                      \
    \                        \\\n    DUMPOUT << \"\\033[1m\\033[41m\"            \
    \                                   \\\n            << \"  \" << string(#__VA_ARGS__)\
    \ << \": \"                            \\\n            << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\"        \\\n            << endl           \
    \                                                 \\\n            << \"\\033[49m\\\
    033[0m    \",                                                         \\\n   \
    \     dump_func(__VA_ARGS__)\n#else\n#define DEB if (false)\n#define dump(...)\n\
    #endif\n\ntemplate<typename T1, typename T2> ostream& operator<<(ostream& os,\
    \ const pair<T1, T2>& p) {\n   os << \"(\" << p.first << \",\" << p.second <<\
    \ \")\";\n   return os;\n}\n\ntemplate<typename T1, typename T2> istream& operator>>(istream&\
    \ is, pair<T1, T2>& p) {\n   is >> p.first >> p.second;\n   return is;\n}\n\n\
    template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {\n\
    \   os << \"[\";\n   for(int i = 0; i < (int)v.size(); i++) { os << v[i] << (i\
    \ + 1 != (int)v.size() ? \", \" : \"\"); }\n   os << \"]\";\n   return os;\n}\n\
    \ntemplate<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>&\
    \ v) {\n   for(int i = 0; i < (int)v.size(); i++) { os << v[i] << endl; }\n  \
    \ return os;\n}\n\ntemplate<typename T> ostream& operator<<(ostream& os, const\
    \ vector<vector<vector<T>>>& v) {\n   for(int i = 0; i < (int)v.size(); i++) {\n\
    \      os << \"i = \" << i << endl;\n      os << v[i];\n   }\n   return os;\n\
    }\n\ntemplate<typename T> istream& operator>>(istream& is, vector<T>& v) {\n \
    \  for(T& in : v) is >> in;\n   return is;\n}\n\ntemplate<typename T, typename\
    \ S> ostream& operator<<(ostream& os, const map<T, S>& mp) {\n   for(auto& [key,\
    \ val] : mp) { os << key << \":\" << val << \" \"; }\n   return os;\n}\n\ntemplate<typename\
    \ T> ostream& operator<<(ostream& os, const set<T>& st) {\n   os << \"{\";\n \
    \  auto itr = st.begin();\n   for(int i = 0; i < (int)st.size(); i++) {\n    \
    \  os << *itr << (i + 1 != (int)st.size() ? \", \" : \"\");\n      itr++;\n  \
    \ }\n   os << \"}\";\n   return os;\n}\n\ntemplate<typename T> ostream& operator<<(ostream&\
    \ os, const multiset<T>& st) {\n   auto itr = st.begin();\n   for(int i = 0; i\
    \ < (int)st.size(); i++) {\n      os << *itr << (i + 1 != (int)st.size() ? \"\
    \ \" : \"\");\n      itr++;\n   }\n   return os;\n}\n\ntemplate<typename T> ostream&\
    \ operator<<(ostream& os, queue<T> q) {\n   while(q.size()) {\n      os << q.front()\
    \ << \" \";\n      q.pop();\n   }\n   return os;\n}\n\ntemplate<typename T> ostream&\
    \ operator<<(ostream& os, deque<T> q) {\n   while(q.size()) {\n      os << q.front()\
    \ << \" \";\n      q.pop_front();\n   }\n   return os;\n}\n\ntemplate<typename\
    \ T> ostream& operator<<(ostream& os, stack<T> st) {\n   while(st.size()) {\n\
    \      os << st.top() << \" \";\n      st.pop();\n   }\n   return os;\n}\n\ntemplate<class\
    \ T, class Container, class Compare>\nostream& operator<<(ostream& os, priority_queue<T,\
    \ Container, Compare> pq) {\n   while(pq.size()) {\n      os << pq.top() << \"\
    \ \";\n      pq.pop();\n   }\n   return os;\n}\n\nint main() {\n   cin.tie(0)->sync_with_stdio(0);\n\
    \   cout << fixed << setprecision(20);\n\n   // your code here...\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/template/template.hpp
  requiredBy: []
  timestamp: '2024-06-29 12:59:30+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/template/template.hpp
layout: document
redirect_from:
- /library/src/template/template.hpp
- /library/src/template/template.hpp.html
title: src/template/template.hpp
---
