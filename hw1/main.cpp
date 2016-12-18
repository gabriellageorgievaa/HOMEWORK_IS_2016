#include <iostream>


using namespace std;
void dPrint(int arr[2][105], int n, const int c=2)
{
    int p;
    for (int i=0; i<n; i++)
    {
        p=(arr[0][i]*100)/arr[1][i];
        cout<<arr[0][i]<<" / "<<arr[1][i]<<" = "<<p<<"%"<<endl;
    }
}
int main()
{
    int const c=2;
    int n;
    cout<<"Enter number of pairs([5,105]):";
    cin>>n;
    while (n<5 || n>105)
    {
        cout<<"Error!!!Enter another number!:";
        cin>>n;
    }
    int arr[c][105];
    for (int j=0;j<n;j++)
    {
        for(int i=0;i<c;i++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }

    dPrint(arr, n, c);

    return 0;
}
