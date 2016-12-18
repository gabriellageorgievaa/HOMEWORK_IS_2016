#include <iostream>

using namespace std;
void mSortirane(int arr[][10],int r ,int c)
{
    int x ;
    for (int i= 0; i< r; i++)
    {
        for (int j= 0; j< c; j++)
        {
            x = j+1;
            for (int t = i; t< r; t++)
            {
                for (int p= x; p<c; p++)
                {
                    if (arr [i][j] > arr[t][p])
                      {
                        swap(arr[i][j] ,arr[t][p]);
                      }
                }
                x=0;
            }
        }
    }

    for (int i= 0; i< r; i++)
    {
        for (int j= 0; j< c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}

int main()
{
   int arr[10][10];
   int r,c;
   cout<<"Enter size of the matrix up to 10x10!"<<endl;
   cout<<"Enter rows:" ;
   cin>>r;
    cout<<endl;
    cout<<"Enter columns:";
    cin>>c;

     for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }

    mSortirane(arr, r,c);
    return 0;
}
