//Write C++ program using STL for sorting and searching user defined records suchas personal records (Name, DOB, Telephone number etc) using vector container.
//OR
//Write C++ program using STL for sorting and searching user defined records suchas Item records (Item code, name, cost, quantity etc) using vector container.

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    char mob[20];
    bool operator ==(const student &student1 ){
        return (rollno==student1.rollno);
    }
    friend ostream& operator<<(ostream &out,const student &k);
     friend istream& operator>>(istream &in, student &k);
     };
     ostream &operator<<(ostream &out, const student &k)
      {
        out<<"\n \t\t"<<k.rollno<<"\t\t"<<k.name<<"\t\t"<<k.mob;
        return out;
    }
   istream &operator >>( istream &in,student &k){
     cout<<"\nEnter roll no";
     in>>k.rollno;
     cout<<"\nEnter name";
     in>>k.name;
     cout<<"\nEnter mob";
     in>>k.mob;
     return in;
   }
   
   vector <student> read(){
    int n;
    student k;
    vector<student>j;
    cout<<"\nEnter total no of students";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        j.push_back(k);
    }
    return j;

   }
   void printfunction(const student &k){
    cout<<k;
   }
   void print(const vector<student> &j){
    cout<<"\n\t\t Rollno\t\tName\t\tMob";
    for_each(j.begin(),j.end(),printfunction);

   }
   void search(vector<student> &j){
    student k;
    cout<<"\nenter the roll no to search";
    cin>>k.rollno;
    cout<<"\n\t\t Rollno\t\tName\t\tMob";
    vector<student>::iterator p;
    p=find(j.begin(),j.end(),k);
    if(p!=j.end())
    cout<<*p;
    else 
    cout<<"not found";
   }
   bool sort_func( const student &x, const student &y){
    return (x.rollno<y.rollno);
     
   }
   void sort(vector<student> &j){
     sort(j.begin(),j.end(),sort_func);
   }
   int main(){

    vector <student> s;
    int ch;
    do{
        cout<< "\n1.Create record";
        cout<<"\n2.display";
        cout<<"\n3.search";
        cout<<"\n4.sort";
        cout<<"\n5.quit";
        cout<<"\nenter choice";
        cin>>ch;
        switch(ch){
            case 1:
                 s=read();
                 break;
            case 2:
                print(s);
            break;
            case 3:
            search(s);
            break;
           case 4:
           sort (s);
           print (s);
           break ;
 }
    }while(ch!=5);

   }

   
   
