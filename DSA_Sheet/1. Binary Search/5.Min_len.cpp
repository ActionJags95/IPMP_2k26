#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<int> temp=arr;
    int b=0,e=0;
    sort(temp.begin(),temp.end());
    for(int i=0;i<size-1;i++){
        if(arr[i]!=temp[i]){
            b=i;
            break;
        }
    }
    for(int i=size-1;i>=0;i--){
        if(arr[i]!=temp[i]){
            e=i;
            break;
        }
    }
    cout<<e-b+1;
}
