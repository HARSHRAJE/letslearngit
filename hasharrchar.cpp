#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //hash array
    int max=6;
    int hashh[max]={0};
    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }
    for(int i=0;i<n;i++){
       cout<<hashh[arr[i]]<<" ";
    }
}