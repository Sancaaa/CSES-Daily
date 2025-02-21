#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    int count = 1;
    int cbest = 1;
    for (int i = 0; i < len -  1; i++){
        if (s[i+1] != s[i]) {
            count = 1;
        } else {
            count++;
            if(cbest < count) cbest = count;
        }
    }
    
    cout << cbest;

    
}