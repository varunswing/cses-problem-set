#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n-1);
    bool flag = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] != i+1){
            cout << i+1;
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout << n;
    }


    return 0;
}
