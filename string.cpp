#include <iostream>
#include <string.h>

using namespace std;
class Add{

public:
	
	char s1[10], s2[10];

	Add(char str1[], char str2[])
	{
		
		strcpy(s1, str1);
		strcpy(s2, str2);
	}

	void operator+()
	{
		cout << "\n Addition of strings: " << strcat(s1, s2);
	}
};


int main()
{
	
	char str1[] = "D'soft";
	char str2[] = " computers";

	Add a1(str1, str2);
	+a1;
	return 0;
}
