#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    long long count = 0;
    for (int i = 0 ; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++){
        while(arr[i] < arr[i-1]){
            arr[i]++;
            count++;
        }
    }
    cout << count;

}