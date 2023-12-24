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
int pivotidx(vector<int> arr){
    int high=arr.size()-1,low=0,mid,ans=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(mid<high && arr[mid]>arr[mid+1]){ans=mid;}
        else if(mid>low && arr[mid]<arr[mid-1]){ans=mid-1;}
        if(arr[low]>arr[mid]){high=mid-1;}
        else{low=mid+1;}
    }
    return ans;
}
int pivot_search(vector<int> arr,int target){
    int pivot=pivotidx(arr);
    if(pivot==-1){return binary_search(arr,0,arr.size()-1,target);}
    if(target==arr[pivot]){return pivot;}
    else if(arr[0]>target){return binary_search(arr,pivot+1,arr.size()-1,target);}
    else{return binary_search(arr,0,pivot,target);}
}
int main(){
    vector<int> arr(11);
    arr={8,9,10,11,1,2,3,4,5,6,7};
    cout<<"Enter the target element :";
    int target;
    cin>>target;
    cout<<pivot_search(arr,target);
}