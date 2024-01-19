//https://www.hackerrank.com/challenges/a-chocolate-fiesta/problem?isFullScreen=true


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007 

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            b--;
            ans = ans*a%MOD;
        }
        else{
            b = b/2%MOD;
            a = a*a%MOD;
        }
    }
    return ans;
    /*if(b==0)return 1;
    long long res = power(a, b / 2 );
    if (b % 2)return res * res % MOD * a % MOD ;
    else return res * res % MOD;*/
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    ll ans = 0,even = 0 , odd=0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]&1)odd++;
        else even++;
    }
    ll evBe = 0;
    ll odBe = 0;

    if(even!=0){
        evBe = power(2,even) % MOD ;
        evBe--;
    }
    if(odd!=0){
        odd--;
        odBe = (power(2,odd) % MOD);
        odBe--;
    }
    cout<<(((evBe*odBe%MOD)+evBe)%MOD+odBe)%MOD;
}
