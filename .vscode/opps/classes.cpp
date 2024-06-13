#include<iostream>
using namespace std;
class Students{
public:        
        string name;
        int rno;
        float percent;
        
        Students(){ // default comstructor

        }
        Students(string n, int number, float p){  // parameterised constructor
            name = n;
            rno = number;
            percent = p;
        }

        void display(){
            cout<<"name "<<name<<endl;
            cout<<"rollnumber "<<rno<<endl;
            cout<<"percent "<<percent<<endl;
        }
};
int main(){

    // Student s;
    // s.name = "Raghav";
    // s.rno = 76;
    // s.percent = 92.6;
    
    // Student y;
    // y.name = "Niraj";
    // y.rno = 54;
    // y.percent = 99.8;

    // Student z = s; // copying s to z (deep copy)
    
    // Students s = {"A", 1000, 99.99};
    Students s("A", 1000, 99.99);
    // cout<<s.name<<" "<<s.rno<<" "<<s.percent<<" ";
    s.display();
    return 0;
}