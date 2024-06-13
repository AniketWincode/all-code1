/*#include<iostream>
using namespace std;
int main(){

    int x;
    cin>>x;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }

    cout<<count<<" ";
    return 0;
}*/

// find the factorial of largest number.
// Hint:- use an array to store every digit of answer.
#include<iostream>
#include<vector>
using namespace std;

int go (vector<int> &a, int val, int size){
    int carry = 0;
 
    for(int i=0;i<size;i++){
        int product = a[i] * val + carry;
        
        a[i] = product%10;
        carry = product/10;

    }
        while(carry>0){
            a[size] = carry%10;
            carry = carry/10;
            size++;
        }
        return size;
    }
int main(){

    int n;
    cin>>n;
    vector<int>a(500,0);
    int size = 1;

    a[0] = 1;

    for(int i=2;i<=n;i++){
        size = go(a, i, size);
    }


    for(int i=size - 1; i>=0; i--){
        cout<<a[i];
    }

    return 0;
}