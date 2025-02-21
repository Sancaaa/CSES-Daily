#include<iostream>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long stemp = 0;
    int temp;
    for (int i = 0; i < x-1; i++){
        cin >> temp;
        stemp += temp;
    } 

    long long sum = x*(2+(x-1))/2;
    cout << sum - stemp;
}