#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    double d;
    float f;
    
    scanf("%d %ld %c %f %lf",&a,&b,&c,&f,&d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,b,c,f,d);
    return 0;
}