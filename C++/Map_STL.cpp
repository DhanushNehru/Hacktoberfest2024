//Map is an associative array !
#include<iostream>
#include<Map> //Header file for Map
#include<string>

using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Akshay"] = (int)99;
    marksMap["Harshit"] = (int)76;
    marksMap["Rakesh"] = (int)9;

    marksMap.insert({{"Raj", 169},{"Abhinav", 60}});
    map<string , int>:: iterator iter;

    for( iter = marksMap.begin(); iter!= marksMap.end(); iter++){ //iterator read properly
        cout<<(*iter).first<<" "<<(*iter).second<<endl;//First for key and second for value
    }
    cout<<"The size is "<<marksMap.size()<<endl;// Actual size 
    cout<<"The max size is "<<marksMap.max_size()<<endl;// How much max. size
    cout<<"The size if empty is "<<marksMap.empty()<<endl;// Empty or not
    return 0;
}



