#include <iostream>

using namespace std;

void lRows(char c)
{
        while(c<'A' || c>'Z')
    {
        cout<<"Enter LARGE letter: ";
        cin>>c;
    }
    for (char i='A'; i<=c; i++)
    {
        for(char j=i; j>='A'; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    char c;
    cout<<"Enter large letter: ";
    cin>>c;

    lRows(c);
    return 0;
}
