#include<iostream>
using namespace std;
class Employee{
    int id;
    // Not Allowed 
    // static int count = 1000;  
    static int count;  
    public: 
        void setData(void){
            cin >> id;
            count++;
        }
        void getData(void){
            cout << "The id of this employee is " << id << " and this is employee number: "<<count<<endl;
        }
        static void getCount(void) {
            cout << "This value of count is: "<<count<<endl;
        }
};
// We can do this
// int Employee :: count = 1000;
int Employee :: count; // default value is 0
int main()
{
    Employee harry, rohan, lovis;

    harry.setData();
    harry.getData();

    Employee :: getCount();
    rohan.setData();
    rohan.getData();

    Employee :: getCount();

    lovis.setData();
    lovis.getData();
    Employee :: getCount();
    return 0;
}