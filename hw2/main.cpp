#include <iostream>

using namespace std;
int eSearch(int arr[6][5],int r ,int c, int number)
{
    int br=0;
    int res;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
          if(number==br)
          {
              res=arr[i][j];
          }
          br++;
        }
    }
    return res;
}
int main()
{
    const int r=6;
    const int c=5;
    int arr[6][5]={
    {11, 12, 13, 14, 15},
    {21, 22, 23, 24, 25},
    {31, 32, 33, 34, 35},
    {41, 42, 43, 44, 45},
    {51, 52, 53, 54, 55},
    {61, 62, 63, 64, 65}
    };
    int number;
    cout<<"Enter position!: ";
    cin>>number;
    while (number<0 || number>29)
    {
        cout<<"Error!!!Enter another number!:";
        cin>>number;
    }


    cout<<eSearch(arr,r,c,number)<<endl;
    return 0;
}
