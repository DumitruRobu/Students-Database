
int logare(int *m){
	FILE *fp;
	if( (fp = fopen("file_b.txt", "r+b") ) == NULL )
	{
		cout<<" Error:: R+B"<<endl;
		system("pause");
		return 0;
	}
 	
 	//int N = fread( U, sizeof(conturi), 10, fp);
 	bool FlagLogare=true;
	char attempt[256];
	
 	char xyz;
 	bool sSs=true;
 	int contor2=0;
 	
 	cout<<"Username: ";
	
 	while (sSs){	
		xyz = _getch();
		if (xyz==13){
			
			sSs=false;
			attempt[contor2]='\0';
			break;
		}
		
		else if (xyz==27)
		{
			cout<<endl;
			FlagLogare=false;
			sSs=false;
			break;
		}
		
		else if(xyz == 8)
		{
			if (contor2 > 0)
			{
				cout<<"\b \b"; contor2--;
			} 
		}
		
		else if(xyz == 32)
		{
			cout<<"";
		}
		
		else{
			cout<<"*";
			attempt[contor2]=xyz;
			contor2++;
		}	
	}
	
	if (FlagLogare)
	{
		char attempt2[256];
	 	sSs=true;
	 	contor2=0;
		cout<<"\nPassword: ";
		
	 	while (sSs){	
			xyz = _getch();
			if (xyz==13){
				
				attempt2[contor2]='\0';
				sSs=false;
				break;
			}
			
			else if (xyz==27)
			{
				cout<<endl;
				sSs=false;
				break;
			}
			
			else if(xyz == 8)
			{
				if (contor2 > 0)
				{
					cout<<"\b \b"; contor2--;
				} 
			}
			
			else if(xyz == 32)
			{
				cout<<"";
			}
			
			else{
				cout<<"*";
				attempt2[contor2]=xyz;
				contor2++;
			}	
		}
		
		
	 	for (int i=0; i<*m; i++)
	 	{
		 	if (strcmp (U[i].username, attempt) == 0 )
			{
		 		if (strcmp (U[i].password, attempt2) == 0)
				{
		 			cout<<"\nAccess Granted!"<<endl;
		 			return 1;
				}
				
				else
				{
					cout<<"\nWrong Password!"<<endl;
					return 0;
				}
				 	
			}
			else
			{
				if (i+1 == *m)
				{
					cout<<"\nWrong Username! Access Denied!"<<endl;
				}
			}
		 
		}
		if (*m<=0){
			system("cls");
			cout<<"Error! No registered users in the data base!"<<endl;
		}
			
	}
	fclose(fp);
}
