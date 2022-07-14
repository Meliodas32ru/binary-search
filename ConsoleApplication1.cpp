#include "stdafx.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void _tmain()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	const int limtext = 1000;
	char str[limtext] = "2324H 344, H213";
	int count = 0;
	int i;
	for ( i=0; i<strlen(str); i++)
	{
		if (str[i] == ',')
		break;
		else if (str[i] == 'H')
		count++;
    }
	cout << count ;
	system ("pause");
}