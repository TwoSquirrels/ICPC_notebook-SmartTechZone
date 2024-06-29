---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/data-structure/pbds_set.test.cpp
    title: test/data-structure/pbds_set.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "src/data-structure/pbds_set.hpp"

    #include <ext/pb_ds/assoc_container.hpp>

    #include <ext/pb_ds/tree_policy.hpp>


    using namespace __gnu_pbds;

    template<typename T> using pbds_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

    '
  code: '#include <ext/pb_ds/assoc_container.hpp>

    #include <ext/pb_ds/tree_policy.hpp>


    using namespace __gnu_pbds;

    template<typename T> using pbds_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

    '
  dependsOn: []
  isVerificationFile: false
  path: src/data-structure/pbds_set.hpp
  requiredBy: []
  timestamp: '2024-06-28 07:46:18+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/data-structure/pbds_set.test.cpp
documentation_of: src/data-structure/pbds_set.hpp
layout: document
redirect_from:
- /library/src/data-structure/pbds_set.hpp
- /library/src/data-structure/pbds_set.hpp.html
title: src/data-structure/pbds_set.hpp
---
