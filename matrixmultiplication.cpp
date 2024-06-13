#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n][n];
    int B[n][n];
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    
    int matrix[n][n];
    cout<<"ANS"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j] = 0;
            for(int k=0;k<n;k++){
                matrix[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}