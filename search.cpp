

void search(int *n)
{	
 	system("cls");
	bool XxX=false;
	char nume_stud[256];
	int numar=0;	
		
	if (*n > 0)
	{
		cout<<"Enter nume student: ";
		cin>>nume_stud;
		
		for(int i=0; i < *n ; i++)
		{
		 	if (strcmp(S[i].name, nume_stud) == 0)
		 	{
		 		XxX=true;
		 		numar=i;
		 		
			}			
		}
		
		bool afisare=false;
		
		if (XxX)
		{
			cout<<"Exista asta student!"<<endl; afisare=true;
		}
		else{
			cout<<"Nu Exista asa student!"<<endl;
		}
		XxX=false;
		
		
		if (afisare)
		{
			cout<<"\n\t***DETALII STUDENT: ***"<<endl;
			cout<<setw(5)<<"ID"<<setw(15)<<"NUME"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;
			cout<<setw(5)<<numar+1<<setw(15)<<S[numar].name<<setw(10)<<S[numar].age<<setw(10)<<S[numar].media<<endl;
		}
		afisare=false;			
	}
		
	else
	{
		cout<<"Nu sunt studenti pentru afisare!"<<endl;
	}		
}
