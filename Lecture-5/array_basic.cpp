#include<iostream>
using namespace std;
int main(){
int arr[10];
for(int i=0;i<10;i++){
    cin>>arr[i];
}
int max = INT_MIN;
//INT_MAX (largest positive number)
for(int i=0;i<4;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
cout<<max<<endl;

}
