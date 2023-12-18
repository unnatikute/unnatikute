//Imagine a publishing company which does marketing for book and audiocassette versions. Create a class publication that stores the title (a string) and price
//(type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float).
//Write a program that instantiates the book and tape classes, allows user to enter data and displays the data members. If an exception is caught, replace all the data member values with zero values.


#include<iostream>
using namespace std;
class Marketing{
    public:
    Marketing(){
        title_38="";
        price_38=0.0;
    }
    Marketing(string title_38,float price_38){
        this->title_38=title_38;
        this->price_38=price_38;
    }
    void getData(){
       cout<<endl<<"enter the title and price:";
       cin>>title_38>>price_38;
    }
    void putData(){
        try{
            if(title_38.length()<3)
           throw title_38;
           if (price_38<=0.0)
            throw price_38;
           }
           catch(string){
            cout<<endl<<"Erroe: Title below 3 character is not allowed:";
           }
           catch(float f){
            cout<<endl<<"Error:Price not valid:";
            price_38=0.0;
           }
           cout<<endl<<"Title is"<<title_38;
           cout<<endl<<"Price is:"<<price_38;

            }
            private:
            string title_38;
            float price_38;
};
            
class Book:public Marketing{
    public:
    Book():Marketing(){
        pages_38=0;
    }
    Book(string title_38,float price_38,int pages_38):Marketing(title_38,price_38){
        this->pages_38=pages_38;
    }
    void getData(){
        Marketing::getData();
        cout<<"Enter the no of pages:";
        cin>>pages_38;
    }
    void putData(){
        Marketing::putData();
            try{
                if(pages_38<0)
                throw pages_38;
            }
            catch(int f){
              cout<<endl<<  "PAges cannot be negative";
              pages_38=0;
            }
            cout<<endl<<"Pages are:";}
    
        private:
        int pages_38;
};
class Cassette:public Marketing{
    public:
    Cassette():Marketing(){
        playtime_38=0.0;
    }
    Cassette(string title_38,float price_38,float playtime_38):Marketing(title_38,price_38){
        this->playtime_38=playtime_38;
    }
    void getData(){
    Marketing::getData();
    cout<<"Enter the playtime";
    cin>>playtime_38;
}
    void putData(){
        Marketing::putData();
        try{
            if(playtime_38<0.0)
            throw playtime_38;
        }
        catch(float f){
            cout<<endl<<"Erroe playtime cnnot be negative";
            playtime_38=0.0;
  }
    cout<<endl<<"Playtime is:"<<playtime_38;
    
    }

    private:
    float playtime_38;
};
int main(){
    Book book;
    cout<<"####BOOKS####";
    book.getData();
    Cassette cassette;
    cout<<"####Cassette####";
    cassette.getData();
    cout<<"####BOOKS####";
    book.putData();
    cout<<"####Casette";
     cassette.putData();
  
    return 0;
}




        
