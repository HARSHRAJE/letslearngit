#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2 ){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;   //false means it will swap internally
    if(p1.first>p1.first)  return true;
    else return false;
}

int main(){
    int a[7]={4,3,2,1,5,7,34};
    sort(a,a+4); //a points to memory address of first element 
    //element at a+4 is not sorted
    for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
    }

    vector<int> v={3,4,5};
    sort(v.begin(),v.end()); //sorting according to ascending order

     sort(a,a+7,greater<int>()); //sorts in descending order
    
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort according to second element
    //if second element is same sort acc to first element in descending 
    sort(a,a+4,comp); //comparator 

    int n=5;
    long long num=2345677654323;
    int cnt= __builtin_popcount(n); //how many ones are in binary no.
    int ant= __builtin_popcountll(num);

    string s="123";  //print all permutations of string 123 132 231 213 312 321 then goes to null 
    //to print all combinations first sort the string 
    //if s="231" then 312 321 be only printed so it is necessary to sort the element
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi=*max_element(a,a+n); //stores maximum element of the array
}