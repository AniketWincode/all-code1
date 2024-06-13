#include<iostream>
#include<vector>
using namespace std;
int count = 0;
int inversion(vector<int> &num1, vector<int> &num2){
    int count = 0;
    int i=0; // num1
    int j=0; // num2
    while(i<num1.size() && j<num2.size()){
        if(num1[i]>num2[j]){
            count += num1.size() - i;
            j++;
        }
        else{  // num1[i]<=num2[j]
            i++;
        }
    }
    return count;
}
void merge(vector<int>& num1, vector<int>& num2, vector<int>& result){
    int i=0;
    int j=0;
    int k=0;
    while(i<num1.size() && j<num2.size()){
        if(num1[i]>num2[j]){
            result[k++] = num2[j++];
        }
        else{
            result[k++] = num1[i++];
        }
    }

    if(i==num1.size()){
        while(j<num2.size()){
            result[k++] = num2[j++];
        }
    }
    if(j==num2.size()){
        while(i<num1.size()){
            result[k++] = num1[i++];
        }
    }
}

void mergesort(vector<int>& v){
    int n = v.size(); 
    if(n==1){
        return;
    }
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int> num1(n1);
    vector<int> num2(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        num1[i] = v[i];
    }

    for(int i=0;i<n2;i++){
        num2[i] = v[i+n1];
    }

    mergesort(num1);
    mergesort(num2);
    // count the inversions
    count += inversion(num1, num2);
    // merge
    merge(num1, num2, v);
    // num1.clear();
    // num2.clear();
}
int main(){
    int arr[] = {88, 1, 3, 0, 4, 9, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}