#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll v[101];
void fib(){
    v[0]=0;v[1]=1;
    for(ll i=2;i<100;i++){
        v[i]=v[i-1]+v[i-2]+1;
    }
}
int main() {
    fib();
    ll n;
    cin>>n;
        printf("%lld %lld\n",v[n],v[n+1]);
    return 0;
}
