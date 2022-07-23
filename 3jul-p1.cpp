#include<iostream>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
        long long n, x, y;
        cin>>n>>x>>y;
        long long temp= x + 2*y;
        if(n>=temp){
            cout<<"yes"<<endl;
        }
        else{
             cout<<"no"<<endl;
        }
     }
return 0;
}