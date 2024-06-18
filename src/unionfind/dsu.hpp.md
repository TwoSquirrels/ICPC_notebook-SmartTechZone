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
  bundledCode: "#line 1 \"src/unionfind/dsu.hpp\"\nstruct dsu {\n   vector<int> p;\n\
    \   int g;\n   dsu(int n): p(n, -1), g(n) {}\n   int leader(int a) {\n      return\
    \ p[a] < 0 ? a : (p[a] = leader(p[a]));\n   }\n   bool same(int a, int b) {\n\
    \      return leader(a) == leader(b);\n   }\n   bool merge(int a, int b) {\n \
    \     a = leader(a), b = leader(b);\n      if (same(a, b)) return false;\n   \
    \   if(-p[a] < -p[b]) swap(a, b);\n      p[a] += p[b];\n      p[b] = a;\n    \
    \  g--;\n      return true;\n   }\n   int size(int a) {\n      return -p[leader(a)];\n\
    \   }\n};\n"
  code: "struct dsu {\n   vector<int> p;\n   int g;\n   dsu(int n): p(n, -1), g(n)\
    \ {}\n   int leader(int a) {\n      return p[a] < 0 ? a : (p[a] = leader(p[a]));\n\
    \   }\n   bool same(int a, int b) {\n      return leader(a) == leader(b);\n  \
    \ }\n   bool merge(int a, int b) {\n      a = leader(a), b = leader(b);\n    \
    \  if (same(a, b)) return false;\n      if(-p[a] < -p[b]) swap(a, b);\n      p[a]\
    \ += p[b];\n      p[b] = a;\n      g--;\n      return true;\n   }\n   int size(int\
    \ a) {\n      return -p[leader(a)];\n   }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/unionfind/dsu.hpp
  requiredBy: []
  timestamp: '2024-05-26 20:21:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/unionfind/dsu.hpp
layout: document
redirect_from:
- /library/src/unionfind/dsu.hpp
- /library/src/unionfind/dsu.hpp.html
title: src/unionfind/dsu.hpp
---
