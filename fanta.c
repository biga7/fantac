#include<stdio.h>
#include<string.h>
#define N 18
#define NG 25
#define LF 128
#define DIM 80
int main(int argc,char*argv[])
{
	int k,j,i,trovato;
	float num;
	char nome_file[LF+1];
	char giocatori[N][NG];
	char s[NG],v[LF];
	FILE * f;
	
	scanf("%s",nome_file);
	f=fopen(nome_file,"r");
	if(f){
			for(i=0;i<N;i++)
			
			gets(giocatori[i]);
			
		fgets(v,DIM,f);
		while(!feof(f)){
			for(i=0;v[i]!='"';i++);
		
			for(j=0;v[i]!='"';i++,j++)
				s[j]=v[i];
			s[j]='\0';
		
			for(k=0,trovato=0;k<N && !trovato;k++)
				if(strcmp(s,giocatori[k])==0)
					trovato=1;
			k--;
		
			if(trovato){
				for(j=0;j<5;i++)
					if(v[i]=='|')
						j++;
				sscanf(&v[i+1],"%f",&num);
			
				printf("%s %f\n",giocatori[k],num);
			}
			fgets(v,DIM,f);
		}
	}	
	
	fclose(f);	
	return 0;
}	
	
	
