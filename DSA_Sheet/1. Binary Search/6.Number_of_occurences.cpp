#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> arr,int size,int target){
    int low=0,high=size-1,ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int> arr,int size,int target){
    int low=0,high=size-1,ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int num_occurences(vector<int> arr,int target){
    int lb=lowerbound(arr,arr.size(),target);
    int ub=upperbound(arr,arr.size(),target);
    if(arr[lb]!=target){return -1;}
    else{return ub-lb;}
}
int main(){
    int size,target;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements in sorted order :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element :";
    cin>>target;
    cout<<num_occurences(arr,target);
    return 0;
}