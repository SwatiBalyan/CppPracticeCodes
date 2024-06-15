#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    set<int> s;
    
    //number of queries
    int Q;
    cin>>Q;
    
    for(int i=0;i<Q;i++){
        int Qtype;
        cin>>Qtype;
        
        if(Qtype==1){
            int x;
            cin>>x;
            s.insert(x);
        }
        
        if(Qtype==2){
            int x;
            cin>>x;
            s.erase(x);
        }
        
        if(Qtype==3){
            int x;
            cin>>x;
            set<int> :: iterator itr = s.find(x);
            if(itr==s.end()){
                cout<<"No"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }
        }
        
    }
    
    return 0;
}



