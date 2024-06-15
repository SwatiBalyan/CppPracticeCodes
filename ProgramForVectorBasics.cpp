#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> vec1;
    vector<int> vec2{1,2,3,4};
    vector<char> vec3(6, 's');

    int element =0;
    int size = 0;

    cout<<"Enter size of vector: ";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter vector element: ";
        cin>>element;
        vec1.push_back(element);
    }

    vector<int> :: iterator itr = vec1.begin();
    vec1.insert(itr,45);

    display(vec1);
    display(vec2);
    display(vec3);

    return 0;
}
