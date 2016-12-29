#include <iostream>

using namespace std;
void Rhombus(char n)
{
    const char m='*';
        while(n<='A' || n>='Z')
    {
        cout<<"Enter LARGE letter!:";
        cin>>n;
    }
    cout<<"A"<<endl;
    for (char c='B'; c<=n; c++)
    {
        cout<<c;
        for (char i=1; i<=(c-'A')+ c-'B'; i++)
        {
            cout<<m;
        }
        cout<<c<<endl;
    }
    for(char c = n-1; c>='B'; c--)
    {
        cout<<c;
        for (char i=(c-'A')+ c-'B'; i>=1; i--)
        {
            cout<<m;
        }
        cout<<c<<endl;
    }
    cout<<"A";
}
int main()
{
    char n;
    cout<<"Enter large letter!:";
    cin>>n;

    Rhombus(n);
    return 0;
}
