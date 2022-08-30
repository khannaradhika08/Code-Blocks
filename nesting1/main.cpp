#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
public:
    void read();
    void check_bin();
    void ones_compliment();
    void display();
};

void binary :: read()
{
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}
void binary :: check_bin()
{
    int i;
    for(i=0;i<s.length();i++){
        if (s.at(i)!='0' && s.at(i)!='1')
        {
           cout<<"incorrect binary number"<<endl;
        exit(0);
        }
    }

}
void binary :: ones_compliment()
{
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary :: display()
{
    int i;
    cout<<endl<<"displaying your binary number"<<endl;
    for(i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
