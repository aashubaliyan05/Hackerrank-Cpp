#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int noArrays,noQueries;
    cin>>noArrays>>noQueries;
    vector<int> no[noArrays];
    for(int i=0;i<noArrays;i++){
        int size,num;
        cin>>size;
       for(int j=0;j<size;j++){
           cin>>num;
           no[i].push_back(num);
       }

    }
    for(int i=0;i<noQueries;i++){
        int arrNo,elePosition;
        
        cin>>arrNo;
        cin>>elePosition;
        cout<<no[arrNo][elePosition]<<endl;
    }

    return 0;
}