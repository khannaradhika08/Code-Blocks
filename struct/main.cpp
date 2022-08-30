#include <iostream>

using namespace std;

int main()
{
    struct fruits{
    int nooffruits;
    char typeofvitamin;
    float calories;
    };
    struct fruits apple;
    apple.nooffruits=5;
    apple.typeofvitamin='c';
    apple.calories=78.8;

    struct fruits banana;
    banana.nooffruits=5;
    banana.typeofvitamin='d';
    banana.calories=89.9;

    cout<<apple.typeofvitamin<<endl;
    cout<<banana.typeofvitamin<<endl;
    cout<<apple.nooffruits<<endl;
    cout<<banana.nooffruits<<endl;
    cout<<apple.calories<<endl;
    cout<<banana.calories<<endl;
    return 0;
}
