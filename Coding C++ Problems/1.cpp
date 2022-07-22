#include <bits/stdc++.h>
using namespace std;

int maximum(vector<int>v, int n){
    int maxi = 0;
    for (int i = 0; i<n; i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}

int main(){
    int n = 10;
    vector<int>v;
    for (int i = 0; i<n; i++){
        v.push_back(i);
    }
    int na = maximum(v,n);
    cout << na;
}