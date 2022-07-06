void add_marks(int *n)
{
	system("cls");
	int IDStud=0;
	
	if (*n>0)
	{
		cout<<"Enter student ID pentru adaugarea notelor!: ";
		cin>>IDStud;	
		IDStud-=1; //pentru ca de fapt IDul la primul student = 0, nu 1;
		
		if (IDStud<*n && IDStud>=0 )
		{
			//S[IDStud].nr_note;
			//S[IDStud].media;
			//S[IDStud].suma_note;
			
			system("cls");
			bool XXX=true;
			int rasp=0;
			int flag_nota=0;
			
			while (XXX)
			{
				cout<<"Introdu in continuare nota nr. "<<S[IDStud].nr_note+1<<": "; //pentru ca nr notelor se socot de la 0;
				cin>>S[IDStud].NOTA[ S[IDStud].nr_note ].Nota;
				
				S[IDStud].suma_note += S[IDStud].NOTA[ S[IDStud].nr_note ].Nota; 
				S[IDStud].nr_note+=1;
				
				cout<<"Continuam cu urmatoarea nota? Pentru Da apasa orice buton. Pentru Nu > ESC"<<endl;
				rasp=_getch();
				if (rasp== 27){
					XXX=false;
				}
			}
				S[IDStud].media = double(S[IDStud].suma_note) /  S[IDStud].nr_note;
				
		}
	}
	
	else
	{
		cout<<"Nu sunt studenti in baza de date pentru a adauga careva note!"<<endl;
	}
}
