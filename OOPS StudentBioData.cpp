//Develop an object oriented program in C++ to create a database of student information system containing the following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number, driving
//license no. etc Construct the database with suitable member functions for initializing and destroying the data viz constructor, default constructor, Copy constructor, destructor, static member functions, class, this pointer, inline code and dynamic memory allocation
//operators-new and delete

#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name,mob,address,bloodgrp,year_class;
int div;
int *rollno;
public:
friend class faculty;
Student(){
    rollno= new int;
    *rollno=div=-1;
    name="";
    mob="";
    address="";
    bloodgrp="";
    year_class="";
    
    }
    ~Student(){
        delete  rollno;
    }
    void add_data(){
        cout<<"\nEnter name";
        cin.ignore();
        getline(cin,name);
        cout<<"\n Enter mob";
        cin>>mob;
        cout<<"\n Enter address";
        cin>>address;
        cout<<"\n Enter blood_grp";
        cin>>bloodgrp;
        cout<<"\n Enter year_class(SE/TE/FE)";
        cin>>year_class;
        cout<<"Enter division(1/2/3/4)";
        cin>>div;
        cout<<"Enter rollno";
        cin>>*rollno;

    }
    void display(){
        cout<<"\n Name:"<<name;
        cout<<"\n MOB:"<<mob;
        cout<<"\n Address:"<<address;
        cout<<"\n BloodGroup"<<bloodgrp;
        cout<<"\n Year"<<year_class;
        cout<<"\n Div:"<<div;
        cout<<"\n Rollno:"<<*rollno;
    }
    static void header(){
        cout<<"Student Information System";
    }

};
class faculty {
    private:
    int id;
    public:
    faculty(){
        id=00;
            }
faculty(const faculty &f1){
    id=f1.id;
    }
    void f_display(Student &obj, int f_d){
        try{
            if(obj.div==f_d)
            obj.display();
        else
        throw (obj.div);
    }
    catch(int x){
        cout<<"invalid division";
    }
}
};
int main(){
    Student st[5];
    int ch=0,count=0;
    faculty f;
    do{
    cout<<"\nMENU";
    cout<<"\n1.Add Data";
    cout<<"\n2.Display Data";
    cout<<"\n 3.Display faculty wise ";
    cout<<"\n4.exit";
    cout<<"enter your choice";
    cin>>ch;
     switch(ch){
case 1:
st[count].add_data();
count++;
break;
case 2:
for(int j=0;j<count;j++){
st[j].display();
}
break;
case 3:
int f_div;
cout<<"\nEnter the division of faculty";
cin>>f_div;
for(int j=0;j<count;j++){
    cout<<"Faculty wise data is:";
    f.f_display(st[j],f_div);
}
break;
case 4:
exit(0);
}
     } while(ch!=4);
return 0;
    }
