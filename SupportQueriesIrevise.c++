Solution 1
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

struct data {
  map<ll, ll> mp;
  ll sum = 0;
  void add(ll x) {
    sum += x;
    mp[x]++;
  }
  void remove(ll x) {
    if (mp.find(x) != mp.end()) {
      if (mp[x] != 0) {
        sum -= x;
        mp[x]--;
      }
      if (mp[x] == 0)
        mp.erase(x);  // If the element count becomes 0 its better to remove the
                      // key x from the map
    }
  }
  void min() {
    if ((int)mp.size() != 0)
      cout << mp.begin()->first << '\n';
    else
      cout << "-1\n";
  }
  void max() {
    if ((int)mp.size() != 0)
      cout << (*mp.rbegin()).first << '\n';
    else
      cout << "-1\n";
  }
  void cur_sum() { cout << sum << '\n'; }
};

void solve() {
  data mystructure;
  ll q;
  cin >> q;
  while (q--) {
    int x, t;
    char y;
    cin >> t;
    if (t == 1) {
      cin >> x;
      mystructure.add(x);
    } else if (t == 2) {
      cin >> x;
      mystructure.remove(x);
    } else if (t == 3) {
      cin >> y;
      mystructure.min();
    } else if (t == 4) {
      cin >> y;
      mystructure.max();
    } else if (t == 5) {
      cin >> y;
      mystructure.cur_sum();
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // int t;cin >> t;while(t--)
  solve();
}
Solution 2
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
typedef long long ll;
#define endl '\n'

struct data {
  multiset<int> st;
  ll sm = 0;

  void insert(int x) {
    st.insert(x);
    sm += x;
  }

  void remove(int x) {
    auto it = st.find(x);
    if (it != st.end()) {
      st.erase(it);
      sm -= x;
    }
  }

  int maximum() {
    if (!st.empty())
      return *(--st.end());
    else
      return -1;
  }

  int minimum() {
    if (!st.empty())
      return *(st.begin());
    else
      return -1;
  }

  ll sum() {
    if (!st.empty())
      return sm;
    else
      return 0;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  // freopen("IN", "r", stdin);
  // freopen("OUT", "w", stdout);
  int q;
  cin >> q;
  data mystructure;
  while (q--) {
    int option;
    cin >> option;
    if (option == 1) {
      int x;
      cin >> x;
      mystructure.insert(x);
    } else if (option == 2) {
      int x;
      cin >> x;
      mystructure.remove(x);
    } else if (option == 3) {
      char x;
      cin >> x;
      cout << mystructure.minimum() << endl;
    } else if (option == 4) {
      char x;
      cin >> x;
      cout << mystructure.maximum() << endl;
    } else if (option == 5) {
      char x;
      cin >> x;
      cout << mystructure.sum() << endl;
    }
  }
}