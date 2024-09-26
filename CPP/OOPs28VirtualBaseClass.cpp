#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void get_roll_number(void)
    {
        cout << "Student Roll Number is: " << roll_number << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "Your result is here: " << endl
             << "-->Maths: " << maths << endl
             << "-->Physics: " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score(void)
    {
        cout << "You PT score is: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        get_roll_number();
        get_marks();
        get_score();
        cout << "Your Total Score is: " << total << endl;
    }
    void PassOrFail()
    {
        float percentage = (total / 300) * 100;
        if (percentage < 35)
        {
            cout << "Student Percentage: " << percentage << endl;
            cout << "Student Fail" << endl;
        }
        else
        {
            cout << "Student Percentage: " << percentage << endl;
            cout << "Student Pass" << endl;
        }
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(100);
    harry.set_marks(23, 55);
    harry.set_score(7.9);
    harry.display();
    harry.PassOrFail();
    return 0;
}