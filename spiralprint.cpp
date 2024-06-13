#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        if(count == m*n){  // if(micr>maxc || minc>maxc) break;
            break;
        }
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
                if(count == m*n){
            break;
        }
        // down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
                if(count == m*n){
            break;
        }
        // left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        // up
        maxr--;
                if(count == m*n){
            break;
        }
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
                if(count == m*n){
            break;
        }
    }
    return 0;
}