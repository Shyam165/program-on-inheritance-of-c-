#include<iostream>
using namespace std;
class Student{
    int id;
    char name[50]="Shyam";
    public:
    void display(int id ){

        cout<< "id of Student is "<<id<<endl;
        cout<<" name of student is "<<name<<endl;
    }
};
class Marks: public Student{
    int  totalMarks;
    float avg;

 
   public:
   void displayData(int Se, int De, int Oop){

   totalMarks=Se+De+Oop;
    avg=totalMarks/3;
    cout<<"total marks of student is " <<totalMarks<<endl;
    cout<<"average of total marks of student is "<<avg<<endl;
   }

};
int main(){
    int id, Se, De, Oop;
    char name[60];
     cout<<"enter the id  of student\n";
     cin>>id;
     cout<<"enter the marks of student in se, oop, dsa\n";
     cin>>Se>>De>>Oop;
    Marks M;
    M.display(id);
    M.displayData(Se, De, Oop);
}
