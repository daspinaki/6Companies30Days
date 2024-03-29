// Ugly Numbers 
//Name: Pinaki Das
//https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution{
public:	
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull>s;
	    s.insert(1);
	    n--;
	    while(n--){
	        auto it = s.begin();
	        ull x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    }
	    return *s.begin();
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}