#include<iostream>
using namespace std;
class Student{
   protected:
   int rollno;
   char name[50];
   public:
   void display(){
      cout<<"enter the id and name of student \n";
      cin>>rollno>>name;
      
   }
   void studentDetails(){
      cout<<"the id of student is "<<rollno<<endl;
      cout<<"the name of student  is "<<name<<endl;
   }

};
class test: public Student{
   protected:
    int subjectiveMarks;
    int objectivemarks;
    public:
    void getmarks(){
      cout<<"enter the subjectivemarks\n";
      cin>>subjectiveMarks;
      cout<<"enter the objectivemarks\n";
      cin>>objectivemarks;
    }

};
class Sports{
   protected:
   int sportsmarks;
   public:
   void getsportsmarks(){
      cout<<"enter the sports marks of student\n";
      cin>>sportsmarks;
   }
};
class Result: public test, public Sports{
   int total_marks;
   float avg;
   public:
   void displayData(){
      total_marks=subjectiveMarks+objectivemarks+sportsmarks;
      avg=total_marks/3;
     cout<<"the totalmarks of student :- subjective+objective+sport marks is "<<total_marks<<endl;
     cout<<"the average of totalmarks of student is "<<avg<<endl;
}
};
int main(){
   Result R;
   R.display();
   R.getmarks();
   R.getsportsmarks();
   R.studentDetails();
   R.displayData();

}