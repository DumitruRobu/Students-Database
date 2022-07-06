int load_accounts(){
	system("cls");
	FILE *fp;
	
	if( (fp = fopen("file_b.txt", "r+b") ) == NULL )
	{
		cout<<" No accounts to load at the moment!"<<endl;
		system("pause");
		return 0;
	}
	
	int N = fread( U, sizeof(conturi), 10, fp);
 		
	fclose(fp);
	return N;
}
