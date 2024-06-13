#include<iostream>
using namespace std;
int mazepath(int startingrow, int startingcolumns, int endingrow, int endingcolumns){
    if(startingrow > endingrow || startingcolumns > endingcolumns){
        return 0;
    }
    if(startingrow == endingrow && startingcolumns == endingcolumns){
        return 1;
    }
    int rightways = mazepath(startingrow, startingcolumns +  1, endingrow, endingcolumns);
    int downways = mazepath(startingrow + 1, startingcolumns, endingrow, endingcolumns);

    // cout<<rightways<<" "<<downways<<" ";
    int totalways = rightways + downways;
    return totalways;
}

void printpath(int staringrow, int staringcolumns, int endingrow, int endingcolumns, string s){

    if(staringrow>endingrow || staringcolumns>endingcolumns){
        return;
    }
    if(staringrow==endingrow && staringcolumns==endingcolumns){  // destination reached
        cout<<s<<endl;
        return;
    }
    printpath(staringrow+1, staringcolumns, endingrow, endingcolumns, s+'r'); // right
    printpath(staringrow, staringcolumns+1, endingrow, endingcolumns, s+'d'); // down 
}

int main(){

    cout<<mazepath(1,1,8,8);
    printpath(1,1,8,8, "");
    return 0;
}