#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class MaxHeap{
    vector<int> hp;
    int i; // [0, i] -> max heap
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
    MaxHeap(vector<int> v){
        hp = v;
        for(int i=1;i<hp.size();i++){
            upheapify(i);
        }
    }
};
int main(){
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap hp(v);
    hp.push(100);
    hp.display();
    return 0;
}