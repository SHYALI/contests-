#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(p)      p.begin(),p.end()
#define yesprint    cout <<"YES\n";
#define noprint     cout <<"NO\n";
int mod = 1e9+7;


void solvebysmitrupapara()
{
    //code here
    int n;
    cin>>n;

    int a[n],sum=0;

    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];

    if(sum%3==0){
        cout<<0<<endl;
        return;
    }
    if(sum%3==2){
        cout<<1<<endl;
        return;
    }

    int f=1;

    for(int i=0;i<n;i++){
        if(a[i]%3==1){
            cout<<1<<endl;
            return;
        }
    }

    cout<<2<<endl;


    
}


int main()
{
    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    ll T;
    cin >> T;
    
    while(T--)
    {
        solvebysmitrupapara();
    }

    return 0;
}