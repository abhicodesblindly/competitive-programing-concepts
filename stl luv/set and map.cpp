#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(8);
    s.insert(1);

    cout << "Set elements: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    map<string, int> marks;
    marks["Alice"] = 90;
    marks["Bob"] = 85;
    marks["Charlie"] = 95;
    marks["Alice"] = 98;

    cout << "Map elements: " << endl;
    for (auto it : marks) {
        cout << it.first << " -> " << it.second << endl;
    }

    if (marks.count("Bob")) {
        cout << "Bob's marks: " << marks["Bob"] << endl;
    }

    return 0;
}
