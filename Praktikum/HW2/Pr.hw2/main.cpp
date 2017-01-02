#include <iostream>
#include <math.h>


using namespace std;


int brInversions(int* arr, int size)
{
	int br=0;

	for (int i=0; i<size; i++)
	{
		for (int j=i+1; j<size; j++)
		{
			if (*(arr + j)< *(arr + i))
			{
				br++;
			}
		}
	}

	return br;
}
int main()
{
    int size=5;
    int arr[] = {1, 3, -5, 9, 6};

	cout<<"Number of inversions : "<<brInversions(arr, size)<<endl;


    return 0;
}
