#include<iostream>
#include<vector>
using namespace std;
int max_element(vector<int> arr, int low,int high){
    if(low==high){return arr[high];}
    int mid=(low+high)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){return arr[mid];}
    else if(arr[mid]<arr[mid-1]){return max_element(arr,low,mid-1);}
    else{return max_element(arr,mid+1,high);}
}
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<max_element(arr,0,arr.size()-1);
}