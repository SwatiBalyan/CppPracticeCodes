#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec1;
    
    
    //size of vector
    int N;
    cin>>N;
    
    
    //Vector elements
    int element;
    for(int i=0; i<N;i++){
        cin>>element;
        vec1.push_back(element);
    }
    
    
    //variable for operation 1
    int x;
    cin>>x;
    
    
    //variables for operation 2
    int y,z;
    cin>>y>>z;
    
    
    //erase operation 1
    vec1.erase(vec1.begin()+(x-1));
    
    
    //erase operation 2 
    vec1.erase(vec1.begin()+(y-1),vec1.begin()+(z-1));
    
    
    //Printing current size of vector
    cout<<vec1.size()<<endl;
    
    
    //Printing current vector
    for(auto x:vec1){
        cout<<x<<" ";
    }
    
    return 0;
}
