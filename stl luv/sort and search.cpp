#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {9, 4, 7, 1, 5, 2};

    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    int target = 7;
    auto it = lower_bound(v.begin(), v.end(), target);
    if (it != v.end()) {
        cout << "lower_bound for 7 gives index: " << (it - v.begin()) << endl;
    }

    auto found = binary_search(v.begin(), v.end(), target);
    cout << boolalpha << "binary_search(7): " << found << endl;

    return 0;
}
