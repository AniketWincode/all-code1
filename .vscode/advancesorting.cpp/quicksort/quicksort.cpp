#include<iostream>
#include<vector>
using namespace std;
/*int partition(int arr[], int si, int ei){
    int pivot = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    int pivotidx = count + si;
    swap(arr[si], arr[pivotidx]);
    int i = si;
    int j = ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
        else if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}*/
int partition(int arr[], int si, int ei){
    int pivot = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(pivot>arr[i]){
            count++;
        }
    }
    int pivotidx = count + si;
    swap(arr[si], arr[pivotidx]);
    int i = si;
    int j = ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivot){
            i++;
        }
        if(arr[j]>=pivot){
            j--;
        }
        else if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int pivot = partition(arr, si, ei);

    quicksort(arr, si, pivot-1);
    quicksort(arr, pivot+1, ei);
}
int main(){
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr, 0, n);
    cout<<n<<" "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}