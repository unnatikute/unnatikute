//Implement a class Complex which represents the Complex Number data type. Implement the following operations:
//1. Constructor (including a default constructor which creates the complex number 0+0i).
//2. Overloaded operator+ to add two complex numbers.
//3. Overloaded operator* to multiply two complex numbers.


#include<iostream>
using namespace std;
class Complex{
    float real_38;
    float img_38;
    public:
    Complex(){
       real_38 =0;
       img_38=0;
    }
        
    Complex operator+(Complex c1){
        Complex temp;
        temp.real_38=real_38+c1.real_38;
        temp.img_38=img_38+c1.img_38;
        return temp;
        }
       
     Complex operator-(Complex c1){
        Complex temp;
        temp.real_38=real_38-c1.real_38;
        temp.img_38=img_38-c1.img_38;
        return temp;
 }
     Complex operator*(Complex c1){
        Complex temp;
        temp.real_38=(real_38*c1.real_38)-(img_38*c1.img_38);
        temp.img_38=(real_38*c1.img_38)+(img_38*c1.real_38);
        return temp;
 }
    friend ostream &operator<<(ostream &out, Complex &c){
        out<<c.real_38<<"+"<<c.img_38<<"i";
        return out;
    }
        friend istream &operator>>(istream &in, Complex &c){
        in>>c.real_38>>c.img_38;
        return in;
    }
};
int main(){
    Complex c1,c2,c3;
    char ans;
    int choice;
    do{
        cout<<"*****Main Menu****"<<endl;
        cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl;
        cout<<"Enter your choice";
        cin>>choice;
        cout<<"Enter your real and imaginary part";
        cin>>c1;
        cout<<"Enter your real and imaginary part";
        cin>>c2;
        switch(choice){
            case 1:
           cout<<"Addition is:";
            c3=c1+c2;
            cout<<c3;
            break;
            case 2:
            cout<<"Subtraction is:";
            c3=c1-c2;
            cout<<c3;
            break;
            case 3:
            cout<<"Multiplication is:";
            c3=c1*c2;
            cout<<c3;
            break;
            default:
            cout<<"Wrong choice";
        }
        cout<<"Do you want to continue?(y/n):";
        cin>>ans;
    }while(ans=='y'||ans=='Y');
    return 0;
}

    
