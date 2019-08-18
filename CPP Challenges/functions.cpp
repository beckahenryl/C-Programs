#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int contain_maximum = max(a,b);
    int next_maximum = max(contain_maximum, c);
    int last_maximum = max(next_maximum, d);
    return last_maximum;
}


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
   
    
    return 0;
}

