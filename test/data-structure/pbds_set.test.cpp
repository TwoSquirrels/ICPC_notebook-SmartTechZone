#define PROBLEM "https://judge.yosupo.jp/problem/predecessor_problem"
#include "test/template.hpp"
using u64 = uint64_t;
#include "src/data-structure/pbds_set.hpp"

int main() {
   cin.tie(0)->sync_with_stdio(0);
   ll N, Q;
   cin >> N >> Q;
   string S;
   cin >> S;
   pbds_set<int> s;
   rep(i, 0, N) if(S[i] == '1') s.insert(i);
   while(Q--) {
      ll c, k;
      cin >> c >> k;
      if(c == 0) s.insert(k);
      if(c == 1) s.erase(k);
      if(c == 2) cout << (s.find(k) != s.end()) << '\n';
      if(c == 3) {
         auto ans = s.order_of_key(k);
         cout << (ans == s.size() ? -1 : *s.find_by_order(ans)) << '\n';
      }
      if(c == 4) {
         auto ans = s.order_of_key(k + 1);
         cout << (ans == 0 ? -1 : *s.find_by_order(--ans)) << '\n';
      }
   }
}
