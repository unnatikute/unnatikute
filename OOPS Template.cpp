//Write a function template selection Sort. Write a program thatinputs, sorts and outputs an integer array and a float array.
//O1) Students will be able to learn and understand working and use of function template.
//2) Students will be able to demonstrate function template for selection sort.



#include<iostream>
using namespace std;
template <typename T>
void input(T *a,int size){
cout<<"Enter "<<size<<"elements in array";
for (int i=0;i<size;i++)
cin>>a[i];

}
template <typename T>
void Sorting(T *a,int size){
    int min;
    for (int i=0;i<size;i++){
        min=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[min])
            min=j;
        }
        swap(a[i],a[min]);
    }
}
template <typename T>
void display(T *a,int size){
for(int i=0;i<size;i++)
cout<<a[i]<<"\n";
}
int main(){
int size;
cout<<"\nEnter the size of array";
cin>>size;
if(size<0){
    cout<<"\nsize cannot be negative";
    size=1;
}
int a[size];
input (a,size);
cout<<"\nElements before Sorting";
display(a,size);
cout<<"elements after sorting";
Sorting(a,size);
display(a,size);

float b[size];
input (b,size);
cout<<"\nElements before Sorting";
display(b,size);
cout<<"elements after sorting";
Sorting(b,size);
display(b,size);
return 0;


}

