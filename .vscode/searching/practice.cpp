/*#include<iostream>
// #include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n][n];
    int maxOnes = 0;
    int row = 0;
    // vector<vector<int> >(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }


    
    int x = 1;
    for(int i=0;i<n;i++){
        bool flag = false;
        int ans = -1;
            int li = 0;
            int hi = n- 1;          // 0 1 2 3   mid = 1
    while(li<=hi){                  // 1 1 1 1
        int mid = li + (hi-li)/2;
        if(v[i][mid]==x){
            if(mid == 0){
                ans = mid;
                break;
            }
            else if(v[i][mid-1]==x){
                hi = mid - 1;
            }
            else{
                ans = mid;
                // cout<<ans<<endl;
                flag = true;
                break;
            }
        }
        else if(v[i][mid]!=x){
            li = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    int countOnes = 0;
    if(flag==true){
        countOnes = n - ans;
    }

    if(maxOnes<countOnes){
        maxOnes = countOnes;
        row = i;
    }
    }

    cout<<row<<" "<<maxOnes<<endl;


    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum = 2;
    int a = 1;
    int b = 1;
    cout<<a<<" "<<b<<" "; 
    for(int i=0;i<n;i++){
        sum = a + b;
        a = b;
        b = sum;
        cout<<sum<<" ";
    }
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 3;
    int arr[n] = {1, 3, 5};
    int m = 6;
    int arr1[m] = {2, 4, 4, 6, 7, 8};
    // vector<int> v(10, 0);
    int ans[m+n];
    
    int i=0;
    int j=0;
    int k=0;

    while(k!=(m+n)){
        if(i==n){
            // v.push_back(arr1[j]);
            ans[k] = arr1[j];
            // cout<<ans[k]<<" ";
            j++;
            k = k + 1;
        }
        else if(j==m){
            // v.push_back(arr[i]);
            ans[k] = arr[i];
            // cout<<ans[k]<<" ";
            i++;
            k = k + 1;
        }
        else if(arr[i]>arr1[j]){ 
            // v.push_back(arr1[j]);
            ans[k] = arr1[j];
            // cout<<ans[k]<<" ";
            j++;
            k = k + 1;
        }
        else if(arr[i]<arr1[j]){
            // v.push_back(arr[i]);
            ans[k] = arr[i];
            // cout<<ans[k]<<" ";
            i++;
            k = k + 1;
        }

    }
    cout<<endl;

    for(int i=0;i<9;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}