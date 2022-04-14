#include <iostream>
using namespace std;
void sort(int* arr,int n){
    int pass = n-1;
    int temp;
    while(pass>=0){
        for(int j=0;j<pass;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        pass--;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            sum+=arr[j];
        }
    }
    cout<<sum;
};
int main(){
    int n; 
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,n);
}