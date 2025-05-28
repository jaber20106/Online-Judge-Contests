#include<iostream>
using namespace std;
int main(){
    int r,b,p,q;
    cin>>r>>b>>p>>q;
    int x = r * p;
    int y = b * q;
    if(x > y){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
}