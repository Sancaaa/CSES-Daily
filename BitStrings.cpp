#include<iostream>
#include<cmath>

#define ll long long
ll mod = 1e9 + 7;

using namespace std;

int power(ll base, ll exp){
    ll res = 1;
    while(exp > 0){
        if(exp & 1)
            res = (res * base)%mod;
        base = (base * base)%mod;
        exp >>= 1;
    }
    return res;
}

int main(){
    ll n;
    
    cin >> n;
    cout << power(2,n);
}

//https://cp-algorithms.com/algebra/binary-exp.html