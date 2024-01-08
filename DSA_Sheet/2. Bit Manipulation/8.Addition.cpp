#include<iostream>
using namespace std;
int addi(int a,int b){
    while(b!=0){
        unsigned carry = a&b;
        a=a^b;
        b=carry<<1;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<addi(a,b);
    return 0;
}