#include<bits/stdc++.h>
using namespace std;

void printvec(vector<string> &v){ //this v is copy 
    cout<< "size:" <<v.size()<<endl;
    for (int i =0; i<v.size(); ++i){
        //v.size()-> o(1)
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main(){
     vector<string> v;
     int n;
     cin>>n;
     for(int i = 0 ; i< n; ++i){
        string s;
        cin>> s;
        v.push_back(s);
     }
     printvec(v);

    // int a[10];
    // // vector<int> v(5 ,3);
    // vector<int> v;
    // v.push_back(7);
    // v.push_back(6);

    // // v.pop_back(); // o(1)
    // vector<int> &v2 = v; //o(n)b  
    // v2.push_back(5);
    // printvec(v);
    // printvec(v);
    // printvec(v2);
   
    // // int n;
    // // cin>>n;
    // // for(int i = 0; i<n ;++i){
    // //     int x;
    // //     cin>>x;
    // //     printvec(v);
    // //     v.push_back(x); //alwyas end me add O(1)
    // // }
    // // printvec(v);
}