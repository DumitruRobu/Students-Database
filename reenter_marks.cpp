void reenter_marks(int *n)
{
	system("cls");
	int IDStud=0;
	
	if (*n>0)
	{
		cout<<"Enter student ID pentru editarea notelor!: ";
		cin>>IDStud;	
		IDStud-=1; //pentru ca de fapt IDul la primul student = 0, nu 1;
		
		if (IDStud<*n && IDStud>=0 )
		{
			S[IDStud].nr_note=0;
			S[IDStud].media=0;
			S[IDStud].suma_note=0;
			
			system("cls");
			bool XXX=true;
			int rasp=0;
			
			while (XXX)
			{
				cout<<"Enter nota nr. "<<S[IDStud].nr_note+1<<": ";
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
		cout<<"Nu sunt studenti in baza de date pentru a modifica careva note!"<<endl;
	}
}
