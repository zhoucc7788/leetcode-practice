#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Queerint(char* ptr){
    const int queer_cases_int[6] = {900 ,400 ,90 ,40 ,9 ,4};
    const char* queer_cases[6] =  {"CM", "CD" ,"XC" ,"XL" ,"IX" ,"IV"};
	
	int m = 0;
	for(m = 0; m < 6; m++){
		if(strcmp(ptr, queer_cases[m]) == 0) return queer_cases_int[m];
	}
	return 0;
}

int Normalint(char cur){
    const char* normal_cases[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    const int normal_cases_int[7] = {1 ,5 ,10 ,50, 100, 500, 1000};	
	int m = 0;
	for(m = 0; m < 7; m++){
		if(cur == normal_cases[m]) return normal_cases_int[m];
	}
	return 0;
}

int romanToInt(char *s){
char* queer_cases[6] =  {"CM", "CD" ,"XC" ,"XL" ,"IX" ,"IV"};

	char *cur = NULL, *k = NULL;
	int result = 0, i = 0;
	char str2[strlen(s)];
	char cut[3];
	
	for(i = 0; i < 6; i++){
		if(k = strstr(s, queer_cases[i])){
			strncpy(cut, k, 2);
            cut[2]='\0';
			result += Queerint(cut);
			strncpy(str2, k+2, strlen(k+2)+1);
            		*k = '\0';
            		strcat(s, str2);
		} else {
			continue;
		}
	}
	
	cur = s;
	while(*cur != '\0'){
		result += Normalint(*cur);
		cur++;
	}

	return result;
}