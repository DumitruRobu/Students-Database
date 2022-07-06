int load(){
	system("cls");
	FILE *fp;
	
	if( (fp = fopen(FNL, "r+b") ) == NULL )
	{
		cout<<" No info to load at the moment!"<<endl;
		system("pause");
		return 0;
	}
	
	int N = fread( S, sizeof(stud), 100, fp);
 		
	fclose(fp);
	return N;
}
