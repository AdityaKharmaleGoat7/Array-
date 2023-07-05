#include <bits/stdc++.H>
using namespace std;

int main(){
int n; cin>>n;
int arr[n];

for(int i = 0;i < n;i++){
    cin>>arr[i];
}

int sum = 0;
int maxi = arr[0];

for(int i = 0;i < n;i++){
    sum+=arr[i];    //step 1
    maxi = max(sum, maxi); //step 2
    if(sum < 0)  //step 3
       sum = 0;
}

cout<<maxi<<endl;
    return 0;
}
