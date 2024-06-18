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
    bool chmax(auto& a, auto b) { return a < b ? a = b, 1 : 0; }\n\nint main() {\n\
    \   cin.tie(0)->sync_with_stdio(0);\n   cout << fixed << setprecision(20);\n\n\
    \   // your code here...\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nconst\
    \ ll INF = 4e18;\nusing ld = long double;\nconst ld INFD = INFINITY;\nconst ld\
    \ EPS = LDBL_EPSILON;\ntemplate<class T, class Comp = less<T>> using p_que = priority_queue<T,\
    \ vector<T>, Comp>;\narray sin90 = {0, 1, 0, -1}, cos90 = {1, 0, -1, 0};\n#define\
    \ p1 first\n#define p2 second\n#define reps(i, l, r) for(ll i = (l), i##_right\
    \ = (r); i < i##_right; i++)\n#define rep(i, n) reps(i, 0, n)\n#define all(a)\
    \ begin(a), end(a)\n#define sz(a) ssize(a)\nbool chmin(auto& a, auto b) { return\
    \ a > b ? a = b, 1 : 0; }\nbool chmax(auto& a, auto b) { return a < b ? a = b,\
    \ 1 : 0; }\n\nint main() {\n   cin.tie(0)->sync_with_stdio(0);\n   cout << fixed\
    \ << setprecision(20);\n\n   // your code here...\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/template/template.hpp
  requiredBy: []
  timestamp: '2024-06-18 01:19:06+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/template/template.hpp
layout: document
redirect_from:
- /library/src/template/template.hpp
- /library/src/template/template.hpp.html
title: src/template/template.hpp
---
