#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[30];
    cin>>str;
    int a;
    a=strlen(str);
    cout<<"The number of elements is: "<< a<<endl;
    cout<<"The first element is: "<< str[0]<<endl;
    cout<<"The middle element is: "<< str[a/2]<<endl;
    cout<<"The last element is: "<< str[a-1];


    return 0;
}
