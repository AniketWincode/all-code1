/*#include<iostream>
using namespace std;

void hanoi(int n, char s, char h, char d1, int &i){
    if(n==0){
        return;
    }

    hanoi(n-1, s, d1, h, i+=1);
    cout<<s<<" -> "<<d1<<endl;
    hanoi(n-1, h, s, d1, i);
}
int main(){
    int n;
    cin>>n;
    int i=0;
    hanoi(n, 'A', 'B', 'C', i);
    cout<<i<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    string str = "hello hi hello";

    cout<<str.substr(1,10);
    cout<<str.substr(1);
    return 0;
}*/

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    // vector<int> v(4, 0);
    // double x;
    // for(int i=0;i<4;i++){
    //     cin>>x;
    //     v.push_back(x);
    // }
    // sort(v.begin(), v.end());
    // for(int ele:v){
    //     cout<<v[ele]<<" ";
    // }

    cout<<int('a')<<endl;
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 9;
    int arr[] = {3, 5, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}