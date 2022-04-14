#include <iostream>
using namespace std;
void sum(const int* array,int start, int end){
    int sum = 0;
    for(int i=start-1;i<end;i++) sum+=array[i];
    cout<<sum;
}
int main(){
    int start,end;
    int* num = new int[1000];
    int index=0;
    int i=1;
    int j=0;
    while(index<1000){
        for(j=0;j<i;j++) num[index+j]=i;
        index+=i;
        i++;
    }
    cin>>start>>end;
    sum(num,start,end);
}

