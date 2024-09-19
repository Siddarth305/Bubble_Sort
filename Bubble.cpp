#include<iostream>
using namespace std;
int main(){
    int arr[40];
    int n;
    cout<<"Enter the size of array: \n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Entered value for array before sorting is "<<arr[i]<<"\t";
    }
    int counter = 1;
    while(counter < n){
        for (int i=0;counter<n;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<"sorted array is "<<arr[i]<<"\t";
    }
}
