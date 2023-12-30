#include<iostream>
#include<vector>
using namespace std;
int fixed_point(vector<int> arr){
    int low=0,high=arr.size()-1,mid;
    while(high>=low){
        mid=(low+high)/2;
        if(mid==arr[mid]){return mid;}
        else if(arr[mid]<mid){low=mid+1;}
        else{high=mid-1;}
    }
    return -1;
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
    cout<<fixed_point(arr);
    return 0;
}