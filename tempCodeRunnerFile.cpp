#include <iostream>
#include <vector>
using namespace std;
int minDiff(int i,int sumM,int sumP,  const vector<int> a) {
    if (i==-1) {
        return abs(sumM - sumP);
    }
    else {
        return min(minDiff(i-1,sumM+a[i],sumP, a),minDiff(i-1,sumP+a[i],sumM, a));
    }
}
int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<minDiff(n-2,a[n-1],0,a);
    return 0;
}