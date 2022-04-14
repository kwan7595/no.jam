#include <iostream>
using namespace std;
int main(){
    int n;
    int won;
    cin>>n>>won;
    int* arr = new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=n-1;
    int min=0;
    for(i=n-1;i>=0;i++){
        if(won==0) break;
        else if(won>=arr[i]){
            min+=won/arr[i];
            won=won%arr[i];
        }
    }
    cout<<min;
}