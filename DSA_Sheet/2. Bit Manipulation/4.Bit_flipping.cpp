#include<iostream>
using namespace std;
int bit_flip(int n1,int n2){
    int n=n1^n2,num=0;
    while(n>0){
        if(n%2==1){num++;}
        n/=2;
    }
    return num;
}
int main(){
    int n1,n2;
    cout<<"Enter number 1 :";
    cin>>n1;
    cout<<"Enter number 2 :";
    cin>>n2;
    cout<<bit_flip(n1,n2);
    return 0;
}