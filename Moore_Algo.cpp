#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
int arr[n];

for(int i = 0;i < n;i++){
    cin>>arr[i];
}

int ele = arr[0];
int cnt = 0;

for(int i = 0;i < n;i++){
    if(ele == arr[i]){
        cnt++;
    }
    else{
        if(cnt > 0)
        cnt--;

        else if(cnt == 0){
            ele = arr[i];
        }
    }
}
cout<<ele<<endl;

    return 0;
}
