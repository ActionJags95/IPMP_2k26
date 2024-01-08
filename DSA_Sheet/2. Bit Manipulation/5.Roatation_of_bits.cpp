#include<iostream>
using namespace std;
#define NO_OF_BITS 32
int leftrotate(int num,int rot){
    return (num>>rot)|(num<<NO_OF_BITS-rot);
}
int rightrotate(int num,int rot){
    return (num<<rot)|(num>>NO_OF_BITS-rot);
}
int main(){
    int num,rot;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"Enter the number of bits to be rotated :";
    cin>>rot;
    bool lr;
    cout<<"0.Left rotation"<<endl<<"1.Right rotation"<<endl;
    cout<<"Enter your choice :";
    cin>>lr;
    switch(lr){
        case false:
            cout<<leftrotate(num,rot);
        break;
        case true:
            cout<<rightrotate(num,rot);
        break;
        default:
            cout<<"Enter a valid choice"<<endl;
        break;
    }
}