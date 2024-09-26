#include<iostream>
#include <string.h>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){
            cout << "CWH display" << endl;
        }
};

class CWHVideo: public CWH{
    float videoLength;
    public :
        CWHVideo(string s, float r, float vL): CWH(s,r){
            videoLength = vL;    
        }
        void display(){
            cout << "This is an amazing video with title "<< title << endl;
            cout << "Rating "<< rating << " out of 5 starts" << endl;
            cout << "Length "<< videoLength << " minutes" << endl;
        }
};
class CWHText: public CWH{
    int words;
    public :
        CWHText(string s, float r, int wc): CWH(s,r){
            words = wc;    
        }
        void display(){
            cout << "This is an amazing video with title "<< title << endl;
            cout << "Rating of this text tutorial "<< rating << " out of 5 starts" << endl;
            cout << "No of words in this text function is "<< words << " words" << endl;
        }

};

int main()
{
    string title;
    float rating, vlen;
    int words;

    //For CWH Video
    title = "C++ Tutorial";
    rating = 4.89;
    vlen = 4.56;
    CWHVideo cppVideo(title,rating,vlen);
    // cppVideo.display();
    
    //For CWH Text
    title = "C++ Text";
    rating = 3.9;
    words = 450;
    CWHText cppText(title,rating,words);
    // cppText.display();

    CWH* tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual function can be a friend of another class.
4. A virtual function in base class might not be used. {In case of virtual function having empty body}.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/