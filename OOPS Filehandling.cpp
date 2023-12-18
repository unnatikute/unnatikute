//Write a C++ program that creates an output file, writes information to it, closes the file and open it again as an input file and read the information from the file.


#include <cstdlib>
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name_38[80];
    cout<<"Write the name of the file:"<<endl;
    cin>>name_38;
    //open file in write mode
    ofstream fout;
    fout.open(name_38);
    if(!fout){
        cout<<"Error file not found:";
        exit(1);
    }
    //write contents in file
    cout<<"Write to the file";
    cout<<"Enter the contents";
    string data;
    while(getline(cin,data)){
        if(data=="^D")
        break;
        fout<<data<<endl;
    }
    fout.close();
    //open file in read mode
    ifstream fin;
    fin.open(name_38);
    if(!fin){
        cout<<"File not found";
        exit(1);
    }
    cout<<"reading from the file";
    while(fin){
        getline(fin,data);
        cout<<data<<endl;
    }
    fin.close();
    return 0;
}
