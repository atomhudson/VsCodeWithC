#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> P;

class MyCalendar
{
public:
    vector<P> calendar;
    MyCalendar() {}
    bool book(int start, int end)
    {
        for (int i = 0; i < calendar.size(); i++)
        {
            P curr = calendar[i];
            if (!(end <= curr.first || start >= curr.second))
                return false;
        }

        calendar.push_back({start, end});
        return true;
    }
};

int main()
{
    MyCalendar *obj = new MyCalendar();
    bool param_1 = obj->book(0, 0);
    bool param_2 = obj->book(10, 20);
    bool param_3 = obj->book(15, 25);
    bool param_4 = obj->book(20, 30);
    cout << param_1 << " "
         << param_2 << " "
         << param_3 << " "
         << param_4 << endl;
    return 0;
}