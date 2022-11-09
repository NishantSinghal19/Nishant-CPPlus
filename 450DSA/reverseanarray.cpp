#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> v(n);
        for(auto& i : v){
        cin>>i;
        }
        for (auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << " ";}
 
	    cout<<endl;
	}
	return 0;
}