#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    int arr[1000],i;
    for(cin>>size,i=0;i<size;cin>>arr[i++]);
    for(i=0;i<size;cout<<arr[size-1-i++]<<" ");

    return 0;
}
