#include <iostream>
#include <string.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function --> pure virutal function

    /*
    1.If this class is invoked by another class than it is compulsory that diplay function must be defined there.
    2. Pure virtual function is used to make abstract base classes.
    3. Abstract base class object can not be created.
    4. Abstract base class is defined to be invoked or implemented by another class.
    5. Abstract base class atleast have one pure virtual function in it.
    6. It is kind of interfaceses in JAVA.
    */
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating " << rating << " out of 5 starts" << endl;
        cout << "Length " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating of this text tutorial " << rating << " out of 5 starts" << endl;
        cout << "No of words in this text function is " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For CWH Video
    title = "C++ Tutorial";
    rating = 4.89;
    vlen = 4.56;
    CWHVideo cppVideo(title, rating, vlen);
    // cppVideo.display();

    // For CWH Text
    title = "C++ Text";
    rating = 3.9;
    words = 450;
    CWHText cppText(title, rating, words);
    // cppText.display();

    CWH *tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
