/*#include <bits/stdc++.h>
using namespace std;
void sumTriangle(vector<int> &arr, int n) {
if(n == 0) return;
vector<int> temp(n-1);
for(int i = 0; i < n; ++i) {
cout << arr[i] << " ";
if(i != 0) {
temp[i-1] = arr[i-1] + arr[i];
}
}
cout << endl;
sumTriangle(temp, n-1);
}
int main() {
int n;
cin >> n;
vector<int> arr(n);
for(int i = 0; i < n; ++i) {
    cin>>arr[i];
}
sumTriangle(arr, n);
return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;
void reverseNum(int n, int &ans) {
if(n == 0) {
return;
}
int digit = n % 10;
ans = ans * 10 + digit;
reverseNum(n / 10, ans);
}
int main() {
int n;
cin >> n;
int ans = 0;
reverseNum(n, ans);
cout << ans << endl;
return 0;
}*/

#include<iostream>
using namespace std;
void reversenumber(int number, int ans){
    if(number==0){
        cout<<ans<<" ";
        return;
    }
    int digit = number%10;
    ans = ans*10 + digit;
    // number = number/10;
    reversenumber(number/10, ans);
}
int main(){
    int number = 4132;
    // cin>>number;
    reversenumber(number, 0);
    return 0;
}
