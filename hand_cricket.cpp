#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ul;
#define tc(t) int t;cin>>t;for(int ttttt=1;ttttt<=t;ttttt++)
#define len (ll)1e5+5
#define mod (ll)(1e9+6)
#define gcd(a,b) __gcd(a,b)
#define pq(a) priority_queue< a >
#define pqd(b) priority_queue< b , vector< b > , greater< b >>
#define MP make_pair
#define v(i) vector<i>
#define p(aa,bb) pair< aa,bb>
#define in insert
#define clr(a) memset((a),0,sizeof((a)))
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repd(i,a,b) for(ll i=(a);i>=(b);i--)
#define all(a) (a).begin(),(a).end()
#define ff first
#define ss second
#define ln length()
#define pb push_back
#define INF (1LL<<61)
#define co cout<<
#define ci cin>>
#define sd(o) scanf("%d",&(o))
#define sld(o) scanf("%ld",&(o))
#define sul(o) scanf("%lld",&(o))
#define sf(o) scanf("%f",&(o))
#define pf printf
#define nl "\n"
#define show(a) for(auto u:a)co u<<" ";co nl;

#define fio(a,b) freopen(" a ","r",stdin); freopen(" b","w",stdout);
#define ios ios::sync_with_stdio(0); cin.tie(0);

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vpi vector<pair<int,int> >
#define all(v) (v).begin(), (v).end()
#define pb push_back
const int inf=INT_MAX;
char cur;
main(){
    co "Enter the Tails(1) or Heads (2) :";
    int t;ci t;
    int tt=rand();tt=tt%2+1;
    if(tt==1)
        co "It's Tails!\n";
    else co "It's Heads!\n";
    if(tt==t){
        co "You wins.\nChoose t for batting and l for balling : ";
        ci cur;
        if(cur=='t')co "You choose batting first.\n";
        else co "You choose bowling first\n";
    }else{
        co "You Loose.\n";
        int tmp=rand();tmp=tmp%2+1;
        if(tmp==1){cur='l';co "Computer chooses to Batting first.\n";}
        else {cur='t';co "Computer chooses to Bawling first.\n";}
    }
    co "Rules: choose no from 1-6 to make your run.\n\n";
    if(cur=='t')co "Your Batting!!\n";
    else co "Computer's Batting!!\n";
    int sm=0,in=0;
    int bt,bl;
    co "your run -- ";
    if(cur=='t'){ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
    else {ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
    sm+=bt;
    co "run : "<<sm<<nl;
    while(bl!=bt){
        co "your run -- ";
        if(cur=='t'){ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
        else {ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
        if(bt!=bl)
            sm+=bt;
        co "run : "<<sm<<nl;
    }
    co "Inning ended.\nTarget = "<<sm<<nl;
    if(cur=='t')co "Computer's Batting!!\n";
    else co "Your Batting!!\n";
    co "your run -- ";
    if(cur=='t'){ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
    else {ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
    sm-=bt;
    co sm<<" run to win!"<<nl;
    int res;
    while(bt!=bl){
        if(sm<0){res=1;break;}
        co "your run -- ";
        if(cur=='t'){ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
        else {ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
        if(bt!=bl)
            sm-=bt;
        co sm<<" run to win!"<<nl;
    }
    if(sm==0)co "Draw\n";
    if(sm<0){
        if(cur=='t')co "Computer Wins :(";
        else co "You Wins :)";
    }else{
        if(cur=='t')co "You Wins :)";
        else co "Computer Wins :(";
    }
}
using namespace std;

typedef long long ll;
typedef unsigned long long ul;
#define tc(t) int t;cin>>t;for(int ttttt=1;ttttt<=t;ttttt++)
#define len (ll)1e5+5
#define mod (ll)(1e9+6)
#define gcd(a,b) __gcd(a,b)
#define pq(a) priority_queue< a >
#define pqd(b) priority_queue< b , vector< b > , greater< b >>
#define MP make_pair
#define v(i) vector<i>
#define p(aa,bb) pair< aa,bb>
#define in insert
#define clr(a) memset((a),0,sizeof((a)))
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repd(i,a,b) for(ll i=(a);i>=(b);i--)
#define all(a) (a).begin(),(a).end()
#define ff first
#define ss second
#define ln length()
#define pb push_back
#define INF (1LL<<61)
#define co cout<<
#define ci cin>>
#define sd(o) scanf("%d",&(o))
#define sld(o) scanf("%ld",&(o))
#define sul(o) scanf("%lld",&(o))
#define sf(o) scanf("%f",&(o))
#define pf printf
#define nl "\n"
#define show(a) for(auto u:a)co u<<" ";co nl;

#define fio(a,b) freopen(" a ","r",stdin); freopen(" b","w",stdout);
#define ios ios::sync_with_stdio(0); cin.tie(0);

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vpi vector<pair<int,int> >
#define all(v) (v).begin(), (v).end()
#define pb push_back
const int inf=INT_MAX;
char cur;
main(){
    co "Enter the Tails(1) or Heads (2) :";
    int t;ci t;
    int tt=rand();tt=tt%2+1;
    if(tt==1)
        co "It's Tails!\n";
    else co "It's Heads!\n";
    if(tt==t){
        co "You wins.\nChoose t for batting and l for balling : ";
        ci cur;
        if(cur=='t')co "You choose batting first.\n";
        else co "You choose bowling first\n";
    }else{
        co "You Loose.\n";
        int tmp=rand();tmp=tmp%2+1;
        if(tmp==1){cur='l';co "Computer chooses to Batting first.\n";}
        else {cur='t';co "Computer chooses to Bawling first.\n";}
    }
    co "Rules: choose no from 1-6 to make your run.\n\n";
    if(cur=='t')co "Your Batting!!\n";
    else co "Computer's Batting!!\n";
    int sm=0,in=0;
    int bt,bl;
    co "your run -- ";
    if(cur=='t'){ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
    else {ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
    sm+=bt;
    co "run : "<<sm<<nl;
    while(bl!=bt){
        co "your run -- ";
        if(cur=='t'){ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
        else {ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
        if(bt!=bl)
            sm+=bt;
        co "run : "<<sm<<nl;
    }
    co "Inning ended.\nTarget = "<<sm<<nl;
    if(cur=='t')co "Computer's Batting!!\n";
    else co "Your Batting!!\n";
    co "your run -- ";
    if(cur=='t'){ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
    else {ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
    sm-=bt;
    co sm<<" run to win!"<<nl;
    int res;
    while(bt!=bl){
        if(sm<0){res=1;break;}
        co "your run -- ";
        if(cur=='t'){ci bl;bt=rand();bt=bt%6+1;bl=bl%6+1;}
        else {ci bt;bl=rand();bt=bt%6+1;bl=bl%6+1;}
        if(bt!=bl)
            sm-=bt;
        co sm<<" run to win!"<<nl;
    }
    if(sm==0)co "Draw\n";
    if(sm<0){
        if(cur=='t')co "Computer Wins :(";
        else co "You Wins :)";
    }else{
        if(cur=='t')co "You Wins :)";
        else co "Computer Wins :(";
    }
}
