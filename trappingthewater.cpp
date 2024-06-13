#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    // 1) prev greatest element array
    int prev[n];
    prev[0]=-1;
    int max = height[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // 2) next greatest element array
    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max< height[i])  max = height[i];
    }

    // 3) minimum array
    // int mini[n];
    // for(int i=0;i<n;i++){
    //     mini[i] = min(prev[i], next[i]);
    // }
    for(int i=0;i<n;i++){
        prev[i] = min(prev[i], next[i]);
    }

    // 4) calculating water
    // int water = 0;
    // for(int i=1;i<n-1;i++){
    //     if(height[i]<mini[i]){
    //         water += (mini[i]-height[i]);
    //     }
    // }
    
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(height[i]<prev[i]){
            water += (prev[i]-height[i]);
        }
    }

    cout<<water<<endl;
    return 0;
}