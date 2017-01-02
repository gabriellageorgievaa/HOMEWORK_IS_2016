#include <iostream>
#include <math.h>

using namespace std;

void displayHistogram(const char* str)
{

	int Br[256]={0};
	int i=0;
	while (str[i]!='\0')
	{
		if (str[i]>='A' && str[i]<='Z')
		{
			int index=str[i];
			if (Br[index+32]==0)
            {
                Br[index]++;
            }
            else
            {
                Br[index+32]++;
            }
		}
		else if (str[i]>='a' && str[i]<='z')
		{
			int index=str[i];
            if (Br[index-32]==0)
            {
                Br[index]++;
            }
            else
            {
                Br[index-32]++;
            }
		}

		i++;
	}

	for (int i=0; i<256; i++)
	{
		if (Br[i])
		{
			char c=(char)i;
			cout<<c<<" : "<<Br[i]<<" "<<"times"<<endl;
		}
	}
}

int main()
{
    displayHistogram("Happy holidays!");

    return 0;
}
