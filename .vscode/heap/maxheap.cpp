#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class MaxHeap{
    vector<int> hp;
    void upheapify(int ci){ // child index
        while(ci>0){
            int pi = (ci-1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }

    void downHeapify(int idx){
        while(idx < hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc >=hp.size()){
                break; // idx -> leaf
            }
            int maxEl = idx;
            if(hp[lc] > hp[maxEl]){
                maxEl = lc;
            }
            if(rc < hp.size() && hp[rc] > hp[maxEl]){
                maxEl = rc;
            }
            if(maxEl != idx){
                swap(hp[idx], hp[maxEl]);
                idx = maxEl; // for next iteration
            }
            else{
                break; // current root is already root
            }
        }
    }
    public:

    void push(int element){
        /*
         * Time : O(logn)
        */
        hp.push_back(element);
        upheapify(hp.size()-1);
    }

    void pop(){
        /*
         * Time : O(logn)
        */
        // remove the highest priority element
        if(empty()){
            return;
        }
        swap(hp[0], hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()){
            downHeapify(0);            
        }
    }

    int peek(){
        /*
         * Time : O(1)
        */
        if(empty()){
            return INT_MIN;
        }
        return hp[0];
    }
    bool empty(){
        return hp.size()==0;
    }
    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }
};
int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    // cout<<hp.peek();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    return 0;
}