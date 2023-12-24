#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> arr,int low,int high,int target){
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]==target){return mid;}
    else if(arr[mid]>=target){return binary_search(arr,low,mid-1,target);}
    else{return binary_search(arr,mid+1,high,target);}
}
int main(){
    vector<int> arr(10);
    arr={3,6,9,12,15,18,21,24,27,30};
    int target;
    cout<<"Enter the target element :";
    cin>>target;
    int idx=binary_search(arr,0,arr.size()-1,target);
    if(idx==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element "<<target<<" is at index "<<idx<<endl;
    }
}
