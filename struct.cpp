struct conturi{
	char username[50];
	char password[30];
}U[10];


struct stud{
	char name[256];
	char faculty[256];
	int age;
	
	int nr_note;
	double media;
	int suma_note;
	
	struct note{
		int Nota;
		char Disciplina[256];
		int data;
	}NOTA[100];
	
}S[100], X[10];

char FNS[256], FNL[256];
