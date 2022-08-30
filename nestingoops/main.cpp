#include <iostream>
#include <string>
using namespace std;
class numbers
{
    int a;
public:
    void read_num();
    int cube_num();
    int sq_num();
    void display_num();
};

void numbers :: read_num()
{
    cout<<"Enter a number: "<<endl;
    cin>>a;
}
int numbers :: cube_num()
{
    return a*a*a;
}
int numbers :: sq_num()
{
    return a*a;
}
void numbers :: display_num()
{
    int sq;
    int cube;
    sq=sq_num();
    cube=cube_num();
    cout<<"the square of the number is: "<<sq<<endl;
    cout<<"the cube of the number is: "<<cube<<endl;
}
int main()
{
    numbers n;
    n.read_num();
    n.display_num();
    return 0;
}
