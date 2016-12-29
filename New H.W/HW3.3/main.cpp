#include <iostream>

using namespace std;

void tPosition(string s)
{
   const char m='T';
   bool b=false;
    for (int i=0; i<=s.size(); i++)
     {
         if (m==s[i])
         {
             cout<<"Yes! "<<"It`s position is: "<<i+1;
             b=true;
         }
     }
     if (b==false)
    {
        cout<<"No!";
    }
}
int main()
{
    string s;
    cout<<"Enter array: ";
    cin>>s;

    tPosition(s);
    return 0;
}
