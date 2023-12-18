//Write C++ program for storing binary number using doubly linked lists. Write functions
//a) To compute 1‘s and 2‘s complement b) Add two binary numbers


#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

class BinaryNumber{
private:
    Node* head;

public:
    BinaryNumber(){
        head = nullptr;
    }



    void insertDigit(int digit){
        Node* newNode = new Node;
        newNode->data = digit;
        newNode->prev = nullptr;
        newNode->next = head;

        if(head!=nullptr){
           head->prev = newNode;
 }
        head = newNode;
    }

    
    
    
    void display(){
        Node* current = head;

        while(current != nullptr){
            cout << current->data;
            current = current->next;
        }

        cout<<endl;
    }

    void onesComplement(){
         Node* current = head;

        while(current != nullptr){
            current->data = (current->data == 0) ? 1 : 0;
            current = current->next;
        }
    }


    void twosComplement(){

        onesComplement();
         Node* current = head;
         int carry = 1;

        while(current != nullptr){
            int sum = current->data + carry;
            current->data = sum % 2;
            carry = sum / 2;
            current = current->next;
        }



        if(carry>0){
            insertDigit(carry);
        }
    }


    BinaryNumber add(BinaryNumber& num2){
        BinaryNumber result;

        Node* current1 = head;
        Node* current2 = num2.head;

        int carry = 0;

        while(current1 != nullptr || current2 != nullptr){
            int digit1 = (current1 != nullptr) ? current1->data:0;
            int digit2 = (current2 != nullptr) ? current2->data:0;

            int sum = digit1 + digit2 + carry;

            carry=sum/2;

            result.insertDigit(sum % 2);

            if(current1 != nullptr) current1 = current1->next;
            if(current2 != nullptr) current2 = current2->next;

        }
        if(carry>0){
            result.insertDigit(carry);
        }
        return result;
    }   
};

int main(){
BinaryNumber num1,num2,sum;

num1.insertDigit(1);
num1.insertDigit(0);
num1.insertDigit(1);
num1.insertDigit(0);
num1.insertDigit(1);

num2.insertDigit(1);
num2.insertDigit(0);
num2.insertDigit(1);
num2.insertDigit(1);

cout << "BinaryNumber 1:";
num1.display();

cout << "BinaryNumber 2";
num2.display();

num1.onesComplement();
cout << "onesComplement is";
num1.display();

num2.twosComplement();
cout <<  "Twos complement is";
num2.display();

sum = num1.add(num2);
cout << "Addition is";
sum.display();

return 0;
}

