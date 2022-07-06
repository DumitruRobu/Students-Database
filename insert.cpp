void insert(int *n){
	bool XXX=true;
	do
	{
		system("cls");
		cout<<"Enter name: ";
		cin>>S[*n].name;
		cout<<endl;
	
		cout<<"Enter faculty: ";
		cin>>S[*n].faculty;
		cout<<endl;
		
		cout<<"Enter age: ";
		cin>>S[*n].age;
		cout<<endl;
		
		cout<<"Introducem note pentru "<<S[*n].name<<" ? For \"Yes!\" - Press any key, For \"No!\" - Press \"ESC\" ";
		if( _getch() != 27)
		{
			do{
			cout<<"\nEnter Nota: "<<S[*n].nr_note+1<<": ";
			cin>>S[*n].NOTA[ S[*n].nr_note ].Nota;
			cout<<endl;
			
			
			S[*n].suma_note += S[*n].NOTA[ S[*n].nr_note ].Nota;
			S[*n].nr_note++;
			 
			cout<<"\nDoresti sa mai introduci note? For \"Yes!\" - Press any key, For \"No!\" - Press \"ESC\" ";
			}
		
			while (_getch() != 27);
		}
		
		S[*n].media = double(S[*n].suma_note) /  S[*n].nr_note;  
		(*n)++;
		
		cout<<"\nIntroducem un alt student? ESC-no / any key-yes: ";
		
	}	while(_getch() != 27);
}
