#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollnumber;
    float percentage;
    Student(string name, int rollnumber, float percentage){
        this->name = name;
        // (*this).name = name;
        this->rollnumber = rollnumber;
        // (*this).rollumber = rollnumber;
        this->percentage = percentage;
        (*this).percentage = percentage;
    }
    void display(){
        cout<<"name "<<name<<endl;
        cout<<"rollnumber "<<rollnumber<<endl;
        cout<<"percentage "<<percentage<<endl;
    }
};
// this keyword use only in the class not outside
void change(Student *s){ // *ptr = (ptr) (*ptr) ka dereference (ptr) operator
    // s->name = "AA";
    (*s).name = "AA";
}
// void change(Student s){  // pass by value // no value change
//     s.name ="AA";
// }
// void change(Student &s){  // pass by reference .. value change
//     s.name = "AA";
// }

void display1(Student* s){
    cout<<s->name<<endl;
    cout<<s->rollnumber<<endl;
    cout<<s->percentage<<endl;ṁṇjhgytgfbvdcx 
}
int main(){
    // Student s{"A", 69, 98};
    Student* s = new Student("A", 88, 98);
    // cout<<s.name<<" "<<s.rollnumber<<" "<<s.percentage<<endl;
    // s.display();
    // cout<<s.name<<endl;
    // change(&s);
    // cout<<s.name<<endl;
    display1(s);

    return 0;
}