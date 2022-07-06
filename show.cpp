void show(int *n){
	int x=2;
	int in=0;
	int sf=x;
	bool EXIT=false;
	
	 
	if (*n>0)
	{
		
		while(1)
		{
			system("cls");
			cout<<"|"<<setw(3)<<"ID"<<setw(6)<<"|"<<setw(25)<<"Nume"<<"|"<<setw(15)<<"Virsta"
			<<"|"<<setw(25)<<"Facultatea"<<setw(3)<<"|"<<setw(15)<<"Media"<<setw(11)<<"|"<<endl;
			cout<<"|--------|-------------------------|---------------|---------------------------|-------------------------|"<<endl;	
			
			for (int i=in; i<sf; i++)
			{
				cout<<"|"<<setw(8)<<i+1<<"|"<<setw(25)<<S[i].name<<"|"
				<<setw(15)<<S[i].age<<"|"<<setw(25)<<S[i].faculty<<"  |"<<setw(5)<<S[i].media;
				
				cout<<endl;
				
			}
			
			switch(_getch())
			{
				case 43 : in+=x; sf+=x; if( sf > *n ){ in=*n-2; sf=*n; } break;
				case 45 : in-=x; sf-=x; if( in < 0 ){ in=0;   sf=x; } break;
				case 27 : EXIT=1;
			}
			
			if (EXIT) break;

		}
	}
	else{
		system("cls");
		cout<<"No students to display!"<<endl;
	}
}
