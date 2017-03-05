// ConsoleApplication2.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

const char* l[50] = {"mar","para","pruna","lamaie","portocala","caise","piersici","mango","pepene","banana","papaya","avocado","grapefruit","goji","smochin","nuca"};

void generare();

int _tmain(int argc, _TCHAR* argv[])
{
	generare();
	//_tsystem(_T("system"));
	//_tsystem(_T("system"));
	return 0;
}

void generare(){
	int i;
	int x=1;
	char c =13 ;
	while (c == 13){
		c = _getch();
		switch (c)
		{
		case '\r':
			for(i=1;i<=4;i++){
				x += i/2*5;
				if(x > 15 ){
					x = ( i/5*3*19);
				}
				printf(l[x]);
				cout << endl;
				x++;
			}
			x+=2+x;
			cout << endl;
			break;
		default:
			cout << "Command wrong" << endl;
			break;
		}
	}

}
