#include<iostream>
using namespace std;
class GrandParent{
    protected:
    char name[50];
    int DOB;
    public:
    void getData(){
        cout<<"enter the name and DOB of grandparent \n";
        cin>>name>>DOB;
    }
    void display(){
        cout<<"the name of grandparent is "<<name<<endl;
        cout<<"the DOB of grandparent is "<<DOB<<endl;
    }
};
class Parent: public GrandParent{
    protected:
    char name1[50];
    int DOB1;
    public:
    void getData1(){
        cout<<"enter the name and DOB of parent\n";
        cin>>name1>>DOB1;
    }
    void display1(){
        cout<<"the name of parent is "<<name1<<endl;
        cout<<"the DOB of parent is "<<DOB1<<endl;
    }
};
class child: public Parent{
    protected:
    char name2[30];
    int dob;
    public:
    void GetData2(){
        cout<<"enter the name and dob of child \n";
        cin>>name2>>dob;
    }
    void display2(){
        cout<<"the name of child is "<<name2<<endl;
        cout<<"the dob of child is "<<dob<<endl;
    }
    void AgeDifference(){
      int grandParent_Parent=DOB1-DOB;
      int Parent_child=dob-DOB1;
     int GrandParent_child=dob-DOB;
       cout<<"the age differnce of grandparent  and parent is "<<grandParent_Parent<<endl;
       cout<<"the age difference of parent and child  is "<<Parent_child<<endl;
       cout<<"the age difference of grandparent and child is "<<GrandParent_child<<endl;
    }
};
int main(){
    child C;
    C.getData();
    C.getData1();
    C.GetData2();
    C.display();
    C.display1();
    C.display2();
    C.AgeDifference();
}