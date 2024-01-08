#include<iostream>
using namespace std;
int rmf(int n){
    return n&(n-1);
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<rmf(n);
    return 0;
}