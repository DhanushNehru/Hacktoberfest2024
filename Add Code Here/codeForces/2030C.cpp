// CodeForces round 979(Div2)
// C: A True battle

/*
Let's understand what Alice wants to do. 
She wants to separate a statement that evaluates to true between two OR's. 
This guarantees her victory since OR is evaluated after all AND's.

First, if the first or last boolean is true, then Alice instantly wins by placing OR
between the first AND second OR second to last and last booleans.

Otherwise, if there are two true's consecutively, Alice can also win. 
Alice may place OR before the first of the two on her first move. 
If Bob does not put his operator between the two true's, 
then Alice will put an OR between the two true's on her next move and win. 
Otherwise, Bob does place his operator between the two true's. 
However, no matter what Bob placed, the two true's will always evaluate to true,
so on her second move Alice can just place an OR on the other side of the two true's to win.

We claim these are the only two cases where Alice wins. 
This is because otherwise, there does not contain two true's consecutively. 
Now, whenever Alice places an OR adjacent to a true, Bob will respond by placing AND after the true,
which will invalidate this clause to be false.
*/

#include <bits/stdc++.h>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define pb push_back 
#define pob pop_back
#define ll long long
using namespace std;
 

int main()
    {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        {
            ll n;
            cin>>n;
            string s;
            cin>>s;
            
            int f=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1' && s[i+1]=='1'){
                    f = 1;
                    break;
                }
            }
            if(s[0]=='1')
                f=1;
            if(s[n-1]=='1')
                f=1;
 
            if(f)
                cout<<"Yes \n";
            else
                cout<<"No \n";    
        }
    return 0;
    }