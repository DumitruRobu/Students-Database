void save(int *n){
	system("cls");
	
	FILE *fp;
	if (*n>0)
	{
		if( (fp = fopen(FNS, "w+b") ) == NULL )
		{
			cout<<" Error:: W+B"<<endl;
			system("pause");
			return; //exit(0);
		}
		
		fwrite(S, sizeof(stud), *n, fp);
		cout<<"Saved successfully!"<<endl;
 		fclose(fp);
	}
	
	else 
	{
		cout<<"Va rugam, introduceti cel putin un student!";	
	}
}
