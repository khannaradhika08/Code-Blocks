#include <iostream>

using namespace std;
union fruits{
    int nooffruits;
    char typeofvitamin;
    float calories;
    };
int main()
{

    union fruits apple;

    apple.typeofvitamin='c';



    cout<<apple.typeofvitamin<<endl;

    return 0;
}
