#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<int> vec1;
    int size=0;
    int element=0;

    cout<<"Enter vector size: ";
    cin>>size;

    cout<<"Enter vector elements: ";
    for(int i=0;i<size;i++){
        cin>>element;
        vec1.push_back(element);
    }
    

    sort(vec1.begin(),vec1.end());
    
    cout<<"Sorted vector:"<<endl;
    for(auto i: vec1){
        cout<<i<<" ";
    }
    
    return 0;
}
