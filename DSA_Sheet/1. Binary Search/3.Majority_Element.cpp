#include<iostream>
#include<vector>
using namespace std;
int foccu(vector<int> arr,int target){
    int low=0,high=arr.size()-1,mid,ans;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{low=mid+1;}
    }
    return ans;
}
bool isMajority(vector<int> arr,int size,int target){
    int first_occ=foccu(arr,target);
    if(first_occ + (size/2)<=size-1 && arr[first_occ + (size/2)]==target){return true;}
    else{return false;}
}
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements of the array in sorted order :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to be checked :";
    cin>>target;
    bool isMaj=isMajority(arr,arr.size(),target);
    if(isMaj){
        cout<<"Element "<<target<<" is a majority element of the array"<<endl;
    }
    else{
        cout<<"Element "<<target<<" is not a majority element of the array"<<endl;
    }
}