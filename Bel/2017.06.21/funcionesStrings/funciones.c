/**********************************************************************************************************************************
PROTOTIPOS DE FUNCIONES DE STRINGS
**********************************************************************************************************************************/
/**********************************************************************************************************************************
my_strcpy
**********************************************************************************************************************************/

void my_strcpy (char *s1, char *s2){
	int i;
	for (i = 0; s2[i]!='\0'; i++){
		s1[i]=s2[i];
	}
	s[i]='\0';
}

/**********************************************************************************************************************************
my_strcat
**********************************************************************************************************************************/
void my_strcat(char *s1, char *s2){
	int i, j;
	for (i = (strlen(s1)), j=0; s2[j]!='\0'; i++, j++){
		s1[i]=' '
		s1[i+1]=s2[j];
	}
}
/**********************************************************************************************************************************
my_strstr
**********************************************************************************************************************************/
char* my_strstr(char* cLargo, char* cCorto){
	int i, j;
	int diferencia;
	char* retorno=NULL;
	j=0;
	for (i = 0; i < strlen(cLargo); i++){
		if(j < strlen(cCorto)){
			diferencia=cLargo[i]-cCorto[j];
			if(diferencia==0){
				j++;
				if (retorno==NULL){
					retorno=&(cLargo[i]);
				}
			}
			else{
				if (retorno!=NULL){	
					i=i-(j-1);
					j=0;
					retorno=NULL;
					if (cLargo[i]==cCorto[j]){
						retorno=&(cLargo[i]);
						j++;
					}
				}
			}
		}
		else{
			return retorno;
		}
	}
	return NULL;
}
/**********************************************************************************************************************************
my_strlen
**********************************************************************************************************************************/
int my_strlen(char* s){
	int i;
	int aux=0;
	for (i = 0; s[i]!='\0'; i++){
		aux++;
	}
	return 0;
}
/**********************************************************************************************************************************
my_strcmp
**********************************************************************************************************************************/
int my_strcmp (char *sOrigen, char *sDest){
	int i;
	int j;
	int aux=0;
	for (i = 0; i < strlen(sOrigen); i++)
	{
		for(j=0; j< strlen(sDest); j++){
			if(sOrigen[i+j]==sDest[j]){
				aux++;
			}
		}
	}
	if (aux>=strlen(sDest)){
		return 1;
	}
	else{
		return 0;
	}
}