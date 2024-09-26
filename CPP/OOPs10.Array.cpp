#include<iostream>
using namespace std;
class Employe{
    int id;
    int salary;
    public: 
        void setId(void){
            salary = 122;
            cout<<"Enter the id of empl0yee" << endl;
            cin >> id;
        }
        void getId(void){
            cout <<"The id of this employee is "<< id << endl;
        }
};
int main()
{
    // Employe harry , rohan , lovish , shurti;
    // harry.setId();
    // harry.getId();
    Employe fb[40];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    } 
    return 0;
}