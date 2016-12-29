#include <iostream>
#include <string.h>

using namespace std;

bool check(char c)
{
     return (c>='a' && c<='z') || (c>='A' && c<='Z') || c=='-';
}
void Names(string s)
{
    getline(cin, s);
    int i = 0;
    int breeds = 0;
    int heroes = 0;
    bool inWord = false;
    while (s[i])
    {
        bool isLetter = check(s[i]);
        if (!inWord && isLetter)
        {
            inWord = true;
            if (s[i]>='a' && s[i]<='z')
            {
                breeds++;
            }
            else {heroes++;}
        }
        else if (inWord && isLetter)
        {
            breeds = breeds;
            heroes = heroes;
        }
        else if (inWord && !isLetter)
        {
            inWord = false;
        }
        i++;
    }
    cout<<"Heroes/breeds is "<<heroes<<"/"<<breeds;
}
int main()
{
    string s;
    cout<<"Enter names: ";

    Names(s);
    return 0;
}
