#include<iostream>
using namespace std;
class Internals{
    protected:
    int marks1, marks2, marks3;
    public:
    void getInternalMarks(){
        cout<<"enter the internal marks of student for three subject\n";
        cin>>marks1>>marks2>>marks3;
    }
    void displayInternalMarks(){
        cout<<"Internal marks of three subjects are "<<endl;
        cout<<marks1<<" "<<marks2<<" "<<marks3<<endl;
    }
};
class Externals{
    protected:
    int marks4, marks5, marks6;
    public:
    void getExternalMarks(){
        cout<<"enter the external marks of student for three subject\n";
        cin>>marks4>>marks5>>marks6;
    }
    void displayExternalMarks(){
         cout<<"External marks of three subjects are "<<endl;
        cout<<marks4<<" "<<marks5<<" "<<marks6<<endl;
    }
};
class Result: public Internals, public Externals{
    int totalMarks;
    float avg;
    public:
    void CalculateMarks(){
        totalMarks=marks1+marks2+marks3+marks4+marks5+marks6;
        avg=totalMarks/6;
    }
    void displayData(){
        cout<<"the totalmarks of internal and external is "<<totalMarks<<endl;
        cout<<"the average of internal and external marks of student is "<<avg<<endl;
    }
};
int main(){
    Result R;
    R.getInternalMarks();
    R.getExternalMarks();
    R.displayInternalMarks();
    R.displayExternalMarks();
    R.CalculateMarks();
    R.displayData();

}