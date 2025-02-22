#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if (((n*(n+1))/2)%2==1){
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;

    long long sum = n*(n+1)/4;
    int x = 0, y = 0;
    long long tsum = 0;
    
    long long arr1[n], arr2[n];
    for(int i = n; i >= 1; i--){
        if(tsum + i <= sum){
            arr1[x++] = i;
            tsum +=i;
        } else arr2[y++] = i;
    }

    cout << x << endl;
    for (int i = 0; i < x; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << y << endl;
    for (int i = 0; i < y; i++) cout << arr2[i] << " ";


}