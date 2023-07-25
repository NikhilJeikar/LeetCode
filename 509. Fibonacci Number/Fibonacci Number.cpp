#include "vector"

using namespace std;
int fib(int n) {
    vector<int> Vec;
    Vec.push_back(0);
    Vec.push_back(1);
    int i = 2;
    while (i <= n){
        Vec.push_back(Vec[i-1]+Vec[i-2]);
        i++;
    }
    return Vec[n];
}