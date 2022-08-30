#include <iostream>

using namespace std;
class Student{
private:
    int classofstudent;
    int salaryofparents;
public:
    int rollnumber;
    string name;
    void set_data(int classofstudent1, int salaryofparents1);
    void get_data();
};
void Student::set_data(int classofstudent1, int salaryofparents1){
classofstudent=classofstudent1;
salaryofparents=salaryofparents1;
}

void Student :: get_data(){
cout<<"the class of the student is "<<classofstudent<<endl;
cout<<"the salary of the parents of the student is "<<salaryofparents<<endl;
cout<<"the name of the student is "<<name<<endl;
cout<<"the roll number of the student is "<<rollnumber<<endl;
}
int main()
{
    Student rads;
    rads.rollnumber=23;
    rads.name="Radhika";
    rads.set_data(9,5000);
    rads.get_data();

    return 0;
}
