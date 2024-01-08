#include<iostream>
using namespace std;
int reverse_bits(int n){
    unsigned reverse=0;
    int count=8*sizeof(n);
    for(int i=0;i<count;i++){
        if((n & (1<<i))){
            reverse=reverse|1<<((count-1)-i);
        }
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<reverse_bits(n);
    return 0;
}