#include <iostream>

using namespace std;

void Letters(string s)
{
    getline(cin, s);
    int br=0;
    for(char i='a'; i<='z'; i++)
    {
        for(int j=0; j<=s.size(); j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                s[j] = s[j]-'A'+'a';
                if(i==s[j])
                {
                    cout<<s[j];
                    br++;
                    break;
                }
            }
            else if(i==s[j])
                 {
                    cout<<s[j];
                    br++;
                    break;
                 }
        }
    }
    cout<<" - "<<br<<" signs";
}
int main()
{
    string s;
    cout<<"Enter phrase: ";

    Letters(s);
    return 0;
}
