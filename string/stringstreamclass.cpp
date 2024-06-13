// Given a sentences, split every single word of the sentences and print in a new line.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){

    string str = "raghav is a maths teacher";

    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp.size()<<endl;
    }
    return 0;
}

/*#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str;
    // cin>>str;
    getline(cin, str);

    stringstream ss(str);
    
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    string temp;
    stringstream ss(str);

    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    
}*/