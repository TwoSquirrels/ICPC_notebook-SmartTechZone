struct dsu {
   vector<int> p;
   int g;
   dsu(int n) : p(n, -1), g(n) {}
   int leader(int a) { return p[a] < 0 ? a : (p[a] = leader(p[a])); }
   bool same(int a, int b) { return leader(a) == leader(b); }
   bool merge(int a, int b) {
      a = leader(a), b = leader(b);
      if(same(a, b)) return false;
      if(-p[a] < -p[b]) swap(a, b);
      p[a] += p[b];
      p[b] = a;
      g--;
      return true;
   }
   int size(int a) { return -p[leader(a)]; }
};
