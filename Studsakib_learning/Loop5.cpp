#include<iostream>
using namespace std;
int main(){
    int s =100;
    double ans = 0;
    for (int i = 1; i <= s; i++)
    {
        ans +=(double) 1/(double) i ;
    }
    printf("%.2lf\n", ans);
    return 0;
}