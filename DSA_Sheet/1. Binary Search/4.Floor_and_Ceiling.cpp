#include<iostream>
#include<vector>
using namespace std;
int floor(vector<int> arr,int size,int target){
    int low=0,high=size-1,mid,ans=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=target){
            ans=mid;
            low=mid+1;
        }
        else{high=mid-1;}
    }
    return arr[ans];
}
int ceiling(vector<int> arr,int size,int target){
    int low=0, high=arr.size(),mid, ans;
    while(low<=mid){
        mid=(low+high)/2;
        if(target<=arr[mid]){
            ans=mid;
            high=mid-1;
        }
        else{low=mid+1;}
    }
    return arr[ans];
}
int main(){
    int n;
    vector<int> arr(5);
    cout<<"Size of the array is 5"<<endl;
    cout<<"Enter the elements of the array in sorted way"<<endl;
    for(int i=0;i<5;i++){
        cin>>n;
        arr[i]=n;
    }
    int target;
    cout<<"Enter the target element :";
    cin>>target;
    int fl=floor(arr,arr.size(),target);
    int ce=ceiling(arr,arr.size(),target);
    cout<<"The floor value of "<<target<<" is "<<fl<<" and ceiling value is "<<ce<<endl;
    return 0;
}