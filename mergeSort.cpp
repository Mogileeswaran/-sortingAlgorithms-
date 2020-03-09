
//////          MERGE SORT           ///////////////////


#include <iostream>
using namespace std;
void printA(int a[],int size){
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int bArr[high+2];
    while (i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            bArr[k]=arr[i++];
            //i++;
        } else{
            bArr[k]=arr[j++];
            //j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            bArr[k++]=arr[j++];//j++;k++;
        }
    } else{
        while(i<=mid){
            bArr[k++]=arr[i++];//i++;k++;
        }
    }
    for( int x=low;x<=high;x++){
        arr[x]=bArr[x];
    }
}
void mergSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergSort(arr,low,mid);
        mergSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int ar[]={14,20,78 ,98,20 ,45};
    int z= sizeof(ar)/ sizeof(ar[0])-1;
   // cout<<z+1;
    cout<<endl;
    printA(ar,z);
    mergSort(ar,0,z);
    printA(ar,z);
    return  0;
}


