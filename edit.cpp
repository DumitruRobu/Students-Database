void edit(int *n){
	system("cls");
	int IDStud;
	
	if (*n>0)
	{
		
		cout<<"Enter student ID pentru editarea informatiei!: ";
		cin>>IDStud;	
		IDStud-=1; //pentru ca de fapt IDul la primul student = 0, nu 1;
		
		if (IDStud<*n && IDStud>=0 ){
			system("cls");
			cout<<"Ce informatie doresti sa schimbi? Apasa cifra coresponzatoare!"<<endl;
			cout<<"\t1. Schimbi numele!"<<endl;
			cout<<"\t2. Schimbi facultatea!"<<endl;
			cout<<"\t3. Schimbi virsta!"<<endl;
			cout<<"\tESC pentru a iesi!"<<endl;
			
			int raspuns = _getch();
			
			switch(raspuns){
			case 49: 
				system("cls");
				cout<<"Deci, schimbam numele!"<<endl; 
				cout<<"Introdu noul nume pentru "<<S[IDStud].name<<", student cu IDul "<<IDStud+1<<": ";
				
				cin>>S[IDStud].name;
				cout<<endl;
				
				cout<<"Informatia despre nume a fost actualizata cu succes!"<<endl;
				break;
			
			case 50: 
				system("cls");
				cout<<"Deci, schimbam facultatea!"<<endl; 
				cout<<"Introdu noua facultate pentru "<<S[IDStud].name<<", student cu IDul "<<IDStud+1<<": ";
				
				cin>>S[IDStud].faculty;
				cout<<endl;
				
				cout<<"Informatia despre facultate a fost actualizata cu succes!"<<endl;
				break;
			
			case 51: 
				system("cls");
				cout<<"Deci, schimbam virsta!"<<endl; 
				cout<<"Introdu noua virsta pentru "<<S[IDStud].name<<", student cu IDul "<<IDStud+1<<": ";
				
				cin>>S[IDStud].age;
				cout<<endl;
				
				cout<<"Virsta a fost actualizata cu succes!"<<endl;
				break;
			
			case 27: system("cls"); cout<<"Goodbye!"<<endl; system("pause"); break;
			}
			
		}
		
		else{
			cout<<"Student cu asa ID nu exista!";
		}
	}
	
	else{
		cout<<"Nu exista studenti pentru afisare!"<<endl;
	}		
}
