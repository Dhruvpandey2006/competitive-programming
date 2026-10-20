#include <bits/stdc++.h>

using namespace std;

int main() {


    int count=0;
    int n;
    int x,y,z;
    cout<<"Enter the number of Problems in Programming contest"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
         cin>>x >>y >>z;
          if(x+y+z>=2){
          count++;
    }
}
    cout<<count;
    return 0;
}