
//////          BUBBLE SORT         ///////////////////

#include <iostream>
using namespace std;
void print(int arr[], int s) {
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}
void bubbleSort(int arr[],int s){
   // int temp;
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={1,3,5,7,9,2,4,6,8,0};
    int s= sizeof(arr)/ sizeof(arr[0]);
    print(arr,s);
    cout<<endl;
    bubbleSort(arr,s);
    print(arr,s);
    return 0;
}


