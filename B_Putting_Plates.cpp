    #include <iostream>
    #include <bits/stdc++.h>
    #define ll long long
    #define lld long double
    #define ff first
    #define ss second
    #define pb push_back
    #define mp make_pair
    #define fl(i,m,n) for(int i=m;i<n;i++)
    #define rl(i,m,n) for(int i=n;i>=m;i--)
    #define py cout<<"YES\n";
    #define pn cout<<"NO\n";
    #define vr(v) v.begin(),v.end()
    #define rv(v) v.end(),v.begin()
    #define fast ios_base::sync_with_stdio(false);
    #define input cin.tie(NULL);
    #define output cout.tie(NULL);
    using namespace std;
    ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
    bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
    bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
    //Code by Abhinav Awasthi
    //Language C++
    //Practice->Success
    void asquare()
    {
        int h,w,ww,hh;
        vector <string> v;
        string s1="",s2="";
        cin>>h>>w;
        ww=w;
        hh=h;
        w-=2;
        h-=2;
        if(w%2==1)
        {
            w/=2;
            s1+="1";
            fl(i,0,w)
            s1+="01";
            s1+="01";
        }
        else
        {
            w/=2;
            w-=1;
            s1+="1";
            fl(i,0,w)
            s1+="01";
            s1+="001";
        }
        cout<<s1<<"\n";
        fl(i,0,ww-2)
        s2+="0";
        if(h%2==1)
        {
            h/=2;
            fl(i,0,h)
            {
                cout<<"0"<<s2<<"0"<<"\n";
                cout<<"1"<<s2<<"1"<<"\n";
            }
            cout<<"0"<<s2<<"0"<<"\n";
        }
        else
        {
            h/=2;
            h-=1;
            fl(i,0,h)
            {
                cout<<"0"<<s2<<"0"<<"\n";
                cout<<"1"<<s2<<"1"<<"\n";
            }
            cout<<"0"<<s2<<"0"<<"\n";
            cout<<"0"<<s2<<"0"<<"\n";
        }
        cout<<s1<<"\n";
    }
    int main()
    {
        fast input output
        int t;
        cin>>t;
        while(t--)
        {
            asquare();
            cout<<"\n";
        }
        return 0;
    }