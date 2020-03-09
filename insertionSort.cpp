
//////          INSERTION SORT          ///////////////////


#include <iostream>
using namespace std;
void print(int arr[],int s){
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void insertionSort(int arr[],int s){
    for(int i=0;i<s;i++){
        int temp=arr[i];
        int j=i;
        while (j>0 && temp<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
       // cout<<"\t";
        //print(arr,s);
    }
}
int main(){
    int arr[]={11,9,5,7,0,2,4,8,6};
    int s= sizeof(arr)/ sizeof(arr[0]);
    print(arr,s);
    insertionSort(arr,s);
    print(arr,s);

    return 0;
}



