#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 200010;

int inf = 1e9;
int mod = 1e9 + 7;


class MyStructure {
private:
	multiset<int> mySet;
	ll sum=0LL;

public:
	// MyStructure() : sum(0LL) {};

	void add(int x) {
		mySet.insert(x);
		sum += x;
	}

	void remove(int x) {
		if(mySet.find(x) != mySet.end()) {
			mySet.erase(mySet.find(x));
			sum -= x;
		}
		return;
	}

	int getMin() {
		if(mySet.empty()) return -1;
		return *(mySet.begin());
	}

	int getMax() {
		if(mySet.empty()) return -1;
		return *(mySet.rbegin());
	}

	ll getSum() {
		return sum;
	}
};

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int Q; cin >> Q;

    MyStructure M;

    while(Q--) {
    	int t; cin >> t;
    	if(t == 1) {
    		int x; cin >> x;
    		M.add(x);
    	}
    	else if(t == 2) {
    		int x; cin >> x;
    		M.remove(x);
    	}
    	else if(t == 3) {
    		char c; cin >> c;
    		cout << M.getMin() << "\n";
    	}
    	else if(t == 4) {
    		char c; cin >> c;
    		cout << M.getMax() << "\n";
    	}
    	else if(t == 5) {
    		char c; cin >> c;
    		cout << M.getSum() << "\n";
    	}
    	else {
    		//asserting this condition never happens
    		assert(1 == 0);
    	}
    }

    return 0;
}