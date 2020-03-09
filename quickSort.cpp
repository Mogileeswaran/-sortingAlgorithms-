
//////          QUICK SORT           ///////////////////


#include <iostream>
using namespace std;
int partition(int a[],int start,int end){
    int pivot=a[end];
    int partitionIndex=start;
    for(int i=start;i<end;i++){

        if(a[i]<=pivot){
            //cout<<"i="<<i<<"pi="<<partitionIndex<<endl;
            swap(a[i],a[partitionIndex]);
            partitionIndex++;

        }
    }
    swap(a[partitionIndex],a[end]);

    return partitionIndex;
}
void quicksort(int a[],int start,int end){
    if(start<end){
        int partitionIndex=partition(a,start,end);
       // for(int p=0;p<9;p++){
        //    cout<<a[p]<<" ";
       // }
       // cout<<endl;
        quicksort(a,start,partitionIndex-1);

        quicksort(a,partitionIndex+1,end);
    }
}
int main(){
    int a[]={11,9,5,7,6,2,4,8,6};
    int siz= (sizeof(a)/ sizeof(a[0]))-1;
   // for(int i : a)
     //  cout<<i<<" ";
    cout<<endl;
    quicksort(a,0,siz);
   // for(int i : a)
    //    cout<<i<<" ";
}



