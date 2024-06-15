#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    
    map<string, int> mapMarks;

    mapMarks["Swati"] = 98;
    mapMarks["Krishna"] = 76;
    mapMarks["Rohan"] = 2;

    mapMarks.insert({{"Payal",43},{"Amit",55}});

    map<string, int> :: iterator itr;

    for(itr=mapMarks.begin() ; itr!=mapMarks.end() ; itr++){
        cout<< (*itr).first << " " << (*itr).second <<endl;
    }

    cout<<"Size of map is: "<<mapMarks.size()<<endl;
    cout<<"max Size of map is: "<<mapMarks.max_size()<<endl;
    cout<<"Empty return of map is: "<<mapMarks.empty()<<endl;


    return 0;
}
