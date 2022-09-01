#include<iostream>
using namespace std;
struct student
{
    string name;
    string father_name;
    int roll_num;
    int marks;
    

};

int main ()
{ 
    student s1;
    s1.name = "Ali Abdullah";
    s1.father_name = "Qaiser Aqeel";
    s1.roll_num = 546002;
    s1.marks = 912;

    cout<<"marks of " <<s1.name << "son of " << s1.father_name <<" is " << s1.marks << endl;
    return 0;

}