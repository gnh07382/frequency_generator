#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	while (1) 
	{
		int frequency, time;
		char message[100] = "frequency generator program";
		puts(message);
		cout << "\n";
		char message1[100] = "input frequency:";
		cout << message1;
		cin >> frequency;
		cout << "\n";
		char message2[100] = "input time:";
		cout << message2;
		cin >> time;

		if (time <= 0 || frequency <= 20)
		{
			cout << message << endl;
		}

		Beep(frequency, time);
		system("cls");
	}
	return 0;
}

