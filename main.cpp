#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
#include <cstring>  // string.h
#include <windows.h>

using namespace std;

#include "struct.cpp"
#include "meniu.cpp"
#include "insert.cpp"
#include "show.cpp"
#include "search.cpp"
#include "edit.cpp"
#include "reenter_marks.cpp"
#include "add_marks.cpp"
#include "save.cpp"
#include "load.cpp"
#include "accounts.cpp"
#include "inregistrare.cpp"
#include "logare.cpp"
#include "load_accounts.cpp"



int main()
{
	
	FILE *fp; 
	fp=fopen("conf.ini", "r+");
	fscanf(fp, "%s", &FNS); //citeste primul sir de caractere din prima linie si il atribuie variabile FNS;
	fscanf(fp, "%s", &FNL); //citeste al doilea sir de caractere din a doua linie si il atribuie variabile FNL;
	fclose(fp);

	bool XxX=true;
	int y=false;
	
	int *m=new int;
	*m=load_accounts();
	
	while (XxX)
	{
		switch(accounts())
		{
			case 49: 
				system("cls"); 
				y=logare(m); 
				if (y == true) XxX=false; 
				system("pause"); 
				break;
			case 50: system("cls"); inregistrare(m); system("pause"); break;
			case 27: system("cls"); cout<<"Goodbye!"<<endl; system("pause"); exit(0); break;
		}
	}
	
	if (y)
	{
		int *n= new int;
		*n = load();	

		while (1)
		{
			switch(meniu()){
				case 49: insert(n); system("pause"); break;
				case 50: show(n); system("pause"); break;
				case 51: search(n); system("pause"); break;
				case 52: edit(n); system("pause"); break;
				case 53: reenter_marks(n); system("pause"); break;
				case 54: add_marks(n); system("pause"); break;
				case 55: save(n); system("pause"); break;
				case 56: *n=load(); system("pause"); break;
				case 27: system("cls"); cout<<"Goodbye!"<<endl; system("pause"); exit(0); break;
				}
		}
	}
	
return 0;   
}
