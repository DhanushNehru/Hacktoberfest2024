// CodeForces round 979(Div2)
// B: Minimize oneness

/*
f(t)−g(t)is odd.
Proof: f(t)+g(t)is the set of all non-empty subsets of t, which is 2|t|-1, which is odd.
The sum and difference of two integers has the same parity, so f(t)−g(t) is always odd.

By including exactly one 1 in the string s, we can make f(s)=2n−1−1
and g(s)=2n−1, or f(s)−g(s)=1 by the multiplication principle. 
Clearly, this is the best we can do. So, we print out any string with exactly one 1
*/
#include <bits/stdc++.h>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7 
#define pb push_back 
#define pob pop_back
#define ll long long
using namespace std;

// My code ;) but there is clean implementation below, you can refer that
void solve(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<'0';
        cout<<'\n';
        return ;
    }
    if(n==2){
        cout<<"01 \n";
        return;
    }
    while(n-2>0){
        cout<<'0';
        n--;
    }
    cout<<"10 \n";
    return;
}
int main()
    {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        {
            solve();
        }
    return 0;
    }

    // Clean Implementation 
    /*
    int main() {
        int t;
        cin >> t;
        while(t--) {
            int n;
            cin >> n;
            cout << '1';
            for(int i = 1; i < n; i++) cout << '0';
            cout << endl;
        }
    }   
    */ 