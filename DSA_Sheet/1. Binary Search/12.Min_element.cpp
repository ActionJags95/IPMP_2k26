#include<iostream>
#include<vector>
using namespace std;
int min_element(vector<int> arr,int low,int high){
    if(arr[low]<=arr[high]){return arr[low];}
    int mid=(low+high)/2;
    if(mid>low && arr[mid]<arr[mid-1]){return arr[mid];}
   if(arr[mid]>arr[high]){return min_element(arr,mid+1,high);}
    else{return min_element(arr,low,mid-1);}
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
    cout<<min_element(arr,0,arr.size()-1);
    return 0;
}