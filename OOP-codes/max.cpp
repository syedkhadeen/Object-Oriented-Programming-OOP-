#include<iostream>
using namespace std;
int max(int arr[],int size);
int main(){
    int arr[]={1,7,2,4,7,18,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    int result =max(arr,size);
    cout<<"Sum is : "<<result<<endl;
}
int max(int arr[],int size){
    if(size<2){
        return 0;
    }
    int largest=arr[0];
    int secondLargest=arr[0];
    for(int i=1;i<size;i++){
        int num=arr[i];
        if(num>largest){
            secondLargest=largest;
            largest=num;
        } else if(num<largest && num>secondLargest){
            secondLargest = num;
        }
}
return largest+secondLargest;
}