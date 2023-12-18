//Write a program in C++ to use map associative container. The keys will be thenames of states and the values will be the populations of the states. When theprogram runs, the user is prompted to type the name of a state. 
//The program thenlooks in the map, using the state name as an index and returns the population of thestate

#include<iostream>
#include<map>
#include<utility>
#include<string>
using namespace std;
int main(){
    typedef map<string,int>mapType;
    mapType populationMap;

    populationMap.insert(make_pair("Goa",200));
    populationMap.insert(make_pair("Andhra",400));
    populationMap.insert(make_pair("Madhya Pradesh",500));
    populationMap.insert(make_pair("Kanataka",300));
    populationMap.insert(make_pair("Uttar Pradesh",900));
    populationMap.insert(make_pair("Rajasthan",150));

    mapType::iterator iter = --populationMap.end();
    populationMap.erase(iter);

    cout<<"\nTotal no of States & its population are:"<<populationMap.size()<<endl;
    for(iter=populationMap.begin();iter!=populationMap.end();++iter){
    cout<<iter->first<<":"<<iter->second<<"millions\n";
}
char c;
do{
    string state;
    cout<<"Enter the state whosoe population you want to search:";
    cin>>state;
    iter=populationMap.find(state);
    if(iter!=populationMap.end())
        cout<<state<<":"<<iter->second<<"millions";
    else
    cout<<"state not found";
    cout<<"do you want to continue(y/n)";
    cin>>c;
    }while(c=='y'||c=='Y');
populationMap.clear();
return 0;
}

