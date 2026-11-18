#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,w;
    int cost = 0;;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
           cost = cost+k*i;
    }
    if(cost>n){
        cout<<cost-n;
    }else{
        cout<<0;
    }
   
    return 0;
}