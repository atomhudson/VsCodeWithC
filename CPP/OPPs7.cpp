#include<iostream>
#include<string>
using namespace std;
class Binary{
    private:
        void chk_bin(void);
        string s;
    public :
        void read(void);
        void ones_complements(void);
        void display(void);
};

void Binary :: read(void){
    cout<<"Enter a Binary Number: "<<endl;
    cin>>s;
    cout<<endl;
}
void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void Binary :: ones_complements(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {   
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }else{
            s.at(i) = '0';
        }
    }
}
void Binary :: display(void){
    cout << "Displaying Number" <<endl;
    for (int i = 0; i < s.length(); i++)
    {   
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    // Class --> extension of structures(in C)
    // Structures had limitations
    //          --> member are public 
    //          --> No methods
    // Classes --> structures + more
    // Classes --> can have methods and properties
    // classes --> can make few members as private & few as public 
    // Structures in c++ are typedefed.
    
    
    // Nesting of Member Functions
    Binary b;
    b.read();
    // b.chk_bin(); 
    b.display();
    b.ones_complements();
    b.display();
    return 0;
}