#include <iostream>

using namespace std;

void sort(int* arr, int size)
{
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size-1-i; j++)
		{
			if (*(arr+j)> *(arr+j+1))
			{
				int t= *(arr+j);
				*(arr+j)= *(arr+j+1);
				*(arr+j+1)=t;
			}
		}
	}
}


int main()
{

	int size;
	cout<<"Enter size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements of the array: "<<endl;
	for (int i=0; i<size; i++)
    {
        cin>>arr[i];

    }

	sort(arr, size);

	for (int i=0; i<size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout << endl;



    return 0;
}
