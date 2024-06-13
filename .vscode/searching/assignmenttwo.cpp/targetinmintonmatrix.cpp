/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    
    vector< vector < int > > v(n, vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    int target;
    cin>>target;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v[i][j]<<" ";
    //     }cout<<endl;
    // }
    
    int row_number = 0;

    for(int i=0;i<n;i++){
        if(v[i][0]<=target){
            row_number = i;
        }
    }
    
    if(row_number!=0){
        row_number = row_number;
    }
    else{
        row_number = 0;
    }

    cout<<row_number<<endl;
    int li = 0;
    int hi = m - 1;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(v[row_number][mid]==target){
            cout<<"("<<row_number<<","<<mid<<")"<<endl;
            break;
        }
        else if(v[row_number][mid]>target){
            hi = mid - 1;
        }
        else{
            li = mid + 1;
        }
    }
    return 0;
}*/


#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int target = 9;
    bool flag = false;
    for(int i=0;i<n;i++){
        int li = 0;
        int hi = m - 1;
        while(li<=hi){
            int mid = li + (hi - li)/2;
            if(arr[i][mid]==target){
                cout<<"present"<<endl;
                flag = true;
                break;
            }
            else if(arr[i][mid]>target){
                hi = mid - 1;
            }
            else{
                li = mid + 1;
            }
        }
    }
    if(flag!=true){
        cout<<"not present"<<endl;
    }
    return 0;
}