#include<bits./stdc++.h>
// data encapsulation -> bind all data into one unit

class Player {
    public:
    int score;
    int health;
};

using namespace std;
int main(){
    // ignore these lines
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Player harsh;
    harsh.score = 100;
    harsh.health = 90;
    cin>>harsh.health;
    cout<<harsh.health<<endl;
    cout<<harsh.score<<endl;
    return 0;
}
