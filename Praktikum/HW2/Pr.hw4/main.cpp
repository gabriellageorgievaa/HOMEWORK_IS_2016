#include <iostream>
#include <string.h>

using namespace std;

void replaceOccurences(char* str, char charToReplace, char* stringToReplaceWith)
{

	int length=strlen(str);
	int Rlength=strlen(stringToReplaceWith);
	int i=0;

	while (str[i]!='\0')
	{
		if (str[i]==charToReplace)
		{
			if (Rlength==0)
			{
				for (int j=i; j<length-1; j++)
				{
					str[j]=str[j+1];
				}
			}
			else
			{
				for (int j=length-1; j>i; j--)
				{
					str[j+Rlength-1]=str[j];
				}
			}
            str[length+Rlength-1]='\0';


			for (int j=0; j<Rlength; j++)
			{
				str[i+j]=stringToReplaceWith[j];
			}

			if (Rlength==0)
            {
                    length--;
            }
			else
			{
				i=i+Rlength;
				length=length+Rlength;
			}
		}

		else
        {
          i++;
        }

	}

}

int main()
{
    char str[256];
	strcpy(str,"Merry Christmas!");
	replaceOccurences(str, 'r', "Hohoho");
	cout<<str;

    /*str ="Happy new year!";
    replaceOccurences(str, 'e', "");
    cout<<str;*/

    return 0;
}
