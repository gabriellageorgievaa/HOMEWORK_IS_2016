#include <iostream>

using namespace std;

void ePosition(string s, char a)
{
    bool b = false;
    for (int i=0; i<=s.size(); i++)
    {
        if(a==s[i])
        {
            cout<<"YES! "<<"It's position is: "<<i+1<<endl;
            for (int j=i;j<=s.size();j++)
            {
                cout<<s[j];
            }
            b=true;
            cout<<endl;
        }
    }
    if (b==false)
    {
        cout<<"No! ";
    }
}
int main()
{
    string s;
    cout<<"Enter array: ";
    cin>>s;
    cout<<endl;
    char a;
    cout<<"Enter symbol: ";
    cin>>a;

    ePosition(s,a);
    return 0;
}
