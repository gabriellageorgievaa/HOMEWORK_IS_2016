#include <iostream>
#include <iomanip>

using namespace std;
void mFunction(int arr[][4],int r /*(r-razmer matr)*/ )
{
    int gore=0,
    dolu=r-1,
    lqvo=0,
    dqsno=r-1,
    br = 1;
    while(br <= (r*r))
    {
        if(br >= (r*r))
        {
            arr[gore][lqvo]=br;
            break;
        }

        for(int i=lqvo; i<=dqsno; i++)
        {
            arr[gore][i]=br;
            br++;
        }
        gore++;

        if(br >= r*r)
        {
            arr[gore][dqsno]=br;
            break;
        }


        for(int j=gore; j<=dolu; j++)
        {
            arr[j][dqsno]=br;
            br++;
        }
        dqsno--;

        if(br >= r*r)
        {
            arr[dolu][dqsno]=br;
            break;
        }

        for(int t= lqvo; t<=dqsno; t++)
        {
            arr[dolu][dqsno-t]=br;
           br++;
        }
        dolu--;

        if(br >= r*r)
        {
            arr[dolu][lqvo]=br;
            break;
        }

        for(int m=gore; m<=dolu; m++)
        {
            arr[dolu-m+1][lqvo]=br;

            br++;
        }
        lqvo++;

    }
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<< setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
int main()
{
    const int r=4;
    int arr[r][r];
    mFunction(arr,r);


    return 0;
}
