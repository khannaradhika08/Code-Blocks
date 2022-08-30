#include <iostream>

using namespace std;
int max_of_three(int,int,int);
int min_of_three(int,int,int);

int main()
{
    int ans;
    int anss;
    int a,b,c;
    cout<<"enter any three numbers of your choice:"<<endl;
    cin>>a>>b>>c;
    ans=max_of_three(a,b,c);
    anss=min_of_three(a,b,c);
    cout<<"the max of three is "<<ans<<endl;
    cout<<"the min of three is "<<anss;
    return 0;
}

int max_of_three(int p, int q, int r){
if(p>q&&p>r){
    return p;
}
else if(q>p&&q>r){
    return q;
}
else
    return r;
}

int min_of_three(int m, int n, int o){
if(m<n&&m<o){
    return m;
}
else if(n<o&&n<m){
    return n;
}
else
    return o;
}
