#include<iostream>
using namespace std;
int set_bits(int n){
    int num=0;
    while(n>0){
        if(n%2==1){num++;}
        n/=2;
    }
    return num;
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<set_bits(n);
    return 0;
}