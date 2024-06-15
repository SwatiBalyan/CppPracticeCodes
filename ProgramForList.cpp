#include<iostream>
#include<list>

using namespace std;

void display(list<int> &L){
    list<int> :: iterator it;

    for(it=L.begin(); it!=L.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    list<int> list1{7,6,8,1,2,3,4,5};
    list<int> list2;

    list2.push_back(5);
    list2.push_back(4);
    list2.push_back(3);
    list2.push_back(2);
    list2.push_back(1);

    //removing elements from list
    list1.pop_front();
    list1.pop_back();
    list1.remove(3);

    //sorting the list
    list1.sort();

    //merging two lists
    list1.merge(list2);

    //reversing the list
    list1.reverse();

    display(list1);
    display(list2);

    return 0;
}
