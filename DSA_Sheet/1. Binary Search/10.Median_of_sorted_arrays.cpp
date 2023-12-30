#include<iostream>
#include<vector>
using namespace std;
float fun(vector<int> arr1,vector<int> arr2){
    vector<int> arr3(arr1.size() + arr2.size());
    for(int i=0;i<arr1.size();i++){
        arr3[arr2.size()+i]=arr1[i];
    }
    int i=0,j=0,k=0;
    while(i<arr1.size() || j<arr2.size()){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<arr1.size()){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<arr2.size()){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    if(arr3.size()%2==0){
        return (float)(arr3[arr3.size()/2]+arr3[arr3.size()/2-1])/2;
    }
    else{return arr3[arr3.size()/2];}
}
int main(){
    int size;
    cout<<"Enter the size of array-1 :";
    cin>>size;
    vector<int> arr1(size);
    cout<<"Enter the elements of array-1 :"<<endl;
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of array-2 :";
    cin>>size;
    vector<int> arr2(size);
    cout<<"Enter the elements of array-2 :"<<endl;
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }
    cout<<fun(arr1,arr2);
    return 0;
}