
int inregistrare(int *m){
	
	FILE *fp;
	if( (fp = fopen("file_b.txt", "w+b") ) == NULL )
	{
		cout<<" Error:: W+B"<<endl;
		system("pause");
		return 0;
	}
	
	cout<<"Register your username: ";
	bool SsS=true, condUsr=true;
	char x;
	int contor1=0;
	int highest_value_of_contor1=0;
	
	
	while (SsS){
		
		x = _getch();
		if (x==13)
		{			
			if (contor1 < 5)
			{
				cout<<"\nYour username has to be consisted of at least 5 characters!";
				condUsr=false; SsS=false;
				break;
			}
			
			
			
			else
			{
				for (int i=0; i<*m; i++)
 				{
	 				if (strcmp (U[i].username, U[*m].username) == 0 )
					{
	 					cout<<"\nThis username is in use!";
	 					condUsr=false; SsS=false; break;
					}
				}
				
				
				for (int i=highest_value_of_contor1; i>contor1; i--) //acest ciclu ne asigura ca informatia inscrisa in documentul .txt e corecta.
				{                                                    //el sterge din documentul .txt toate caracterele de prisos situate dupa username;
					U[*m].username[i]='\0';                               //si ne asigura ca inf e reflectata corect in document.
				}
				U[*m].username[contor1]='\0';
				SsS=false;
				break;
			}
			
			
		}
		
		else if (x==27){
			cout<<endl;
			condUsr=false; SsS=false; break;
		}
		
		else if(x == 8)
		{
			if (contor1 > 0)
			{
				cout<<"\b \b"; contor1--;
			} 
		}
		else if(x == 32)
		{
			cout<<"";
		}
		
		else{
			cout<<"*";
			U[*m].username[contor1]=x;
			contor1++;
			highest_value_of_contor1++;
		}	
	}
	
	if (condUsr)
	{
		cout<<endl;
		cout<<"Register your password: ";
		SsS=true;
		contor1=0;
		int highest_value2_of_contor1=0;
		bool FlagxXx=true;
		 
		while (SsS)
		{
			
			x = _getch();
			if (x==13){
				
				if (contor1 < 5)
				{
					cout<<"\nYour password has to be consisted of at least 5 characters!";
					FlagxXx=false; SsS=false; break;
				}
				
				else
				{
					for (int i=highest_value2_of_contor1; i>contor1; i--) //acest ciclu ne asigura ca informatia inscrisa in documentul .txt e corecta.
					{                                                     //el sterge din documentul .txt toate caracterele de prisos situate dupa username;
						U[*m].password[i]='\0';                                //si ne asigura ca inf e reflectata corect in document.
					}
					
					U[*m].password[contor1]='\0';
					SsS=false;
					break;	
				}	
			}
			
			else if(x == 8)
			{
				if (contor1 > 0)
				{
					cout<<"\b \b"; contor1--;
				} 
			}
			
			else if(x == 32)
			{
				cout<<"";
			}
			
			else{
				cout<<"*";
				U[*m].password[contor1]=x;
				contor1++;
				highest_value2_of_contor1++;
			}	
		}
		
		if (FlagxXx)
		{
			*m+=1;
			cout<<endl;
			fwrite(U, sizeof(conturi), *m, fp);
	 		fclose(fp);
	 		cout<<endl;
		}
	
	}
	
}
