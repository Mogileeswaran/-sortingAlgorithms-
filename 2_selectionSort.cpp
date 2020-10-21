
//////          SELECTION SORT         ///////////////////

#include <iostream>
using namespace std;
void print(int arr[],int s){
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}
void selectSort(int arr[],int s){
    int minimumElement;
    for(int i=0;i<s;i++){
         minimumElement=i;
        for(int j=i+1;j<s;j++){
           if(arr[j]<arr[minimumElement]){
              minimumElement=j;
           }
        }
        int temp=arr[i];
        arr[i]=arr[minimumElement];
        arr[minimumElement]=temp;
    }
}
int main(){
    int arr[]={1,3,5,7,9,2,4,6,8,0};
    int s= sizeof(arr)/ sizeof(arr[0]);
    print(arr,s);
    selectSort(arr,s);
    cout<<endl;
    print(arr,s);
    return 0;
}
 

