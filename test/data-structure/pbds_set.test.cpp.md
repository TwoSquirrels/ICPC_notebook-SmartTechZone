---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/data-structure/pbds_set.hpp
    title: src/data-structure/pbds_set.hpp
  - icon: ':heavy_check_mark:'
    path: test/template.hpp
    title: test/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/predecessor_problem
    links:
    - https://judge.yosupo.jp/problem/predecessor_problem
  bundledCode: "#line 1 \"test/data-structure/pbds_set.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/predecessor_problem\"\n#line 1 \"test/template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nconst\
    \ ll INF = LLONG_MAX / 4;\n#define rep(i, a, b) for(ll i = a; i < (b); i++)\n\
    #define all(a) begin(a), end(a)\n#define sz(a) ssize(a)\nbool chmin(auto& a, auto\
    \ b) { return a > b ? a = b, 1 : 0; }\nbool chmax(auto& a, auto b) { return a\
    \ < b ? a = b, 1 : 0; }\n#line 3 \"test/data-structure/pbds_set.test.cpp\"\nusing\
    \ u64 = uint64_t;\n#line 1 \"src/data-structure/pbds_set.hpp\"\n#include <ext/pb_ds/assoc_container.hpp>\n\
    #include <ext/pb_ds/tree_policy.hpp>\n\nusing namespace __gnu_pbds;\ntemplate<typename\
    \ T> using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;\n\
    #line 5 \"test/data-structure/pbds_set.test.cpp\"\n\nint main() {\n   cin.tie(0)->sync_with_stdio(0);\n\
    \   ll N, Q;\n   cin >> N >> Q;\n   string S;\n   cin >> S;\n   pbds_set<int>\
    \ s;\n   rep(i, 0, N) if(S[i] == '1') s.insert(i);\n   while(Q--) {\n      ll\
    \ c, k;\n      cin >> c >> k;\n      if(c == 0) s.insert(k);\n      if(c == 1)\
    \ s.erase(k);\n      if(c == 2) cout << (s.find(k) != s.end()) << '\\n';\n   \
    \   if(c == 3) {\n         auto ans = s.order_of_key(k);\n         cout << (ans\
    \ == s.size() ? -1 : *s.find_by_order(ans)) << '\\n';\n      }\n      if(c ==\
    \ 4) {\n         auto ans = s.order_of_key(k + 1);\n         cout << (ans == 0\
    \ ? -1 : *s.find_by_order(--ans)) << '\\n';\n      }\n   }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/predecessor_problem\"\n\
    #include \"test/template.hpp\"\nusing u64 = uint64_t;\n#include \"src/data-structure/pbds_set.hpp\"\
    \n\nint main() {\n   cin.tie(0)->sync_with_stdio(0);\n   ll N, Q;\n   cin >> N\
    \ >> Q;\n   string S;\n   cin >> S;\n   pbds_set<int> s;\n   rep(i, 0, N) if(S[i]\
    \ == '1') s.insert(i);\n   while(Q--) {\n      ll c, k;\n      cin >> c >> k;\n\
    \      if(c == 0) s.insert(k);\n      if(c == 1) s.erase(k);\n      if(c == 2)\
    \ cout << (s.find(k) != s.end()) << '\\n';\n      if(c == 3) {\n         auto\
    \ ans = s.order_of_key(k);\n         cout << (ans == s.size() ? -1 : *s.find_by_order(ans))\
    \ << '\\n';\n      }\n      if(c == 4) {\n         auto ans = s.order_of_key(k\
    \ + 1);\n         cout << (ans == 0 ? -1 : *s.find_by_order(--ans)) << '\\n';\n\
    \      }\n   }\n}\n"
  dependsOn:
  - test/template.hpp
  - src/data-structure/pbds_set.hpp
  isVerificationFile: true
  path: test/data-structure/pbds_set.test.cpp
  requiredBy: []
  timestamp: '2024-06-28 07:46:18+00:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/data-structure/pbds_set.test.cpp
layout: document
redirect_from:
- /verify/test/data-structure/pbds_set.test.cpp
- /verify/test/data-structure/pbds_set.test.cpp.html
title: test/data-structure/pbds_set.test.cpp
---
