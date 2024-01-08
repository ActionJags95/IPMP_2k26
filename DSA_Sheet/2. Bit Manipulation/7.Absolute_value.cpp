#include<iostream>
using namespace std;
int abs(int n){
    if(n>=0){return n;}
    else{return ((~n)+1);}
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<abs(n);
    return 0;
}