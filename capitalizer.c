#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ( int argc, char *argv[] ) {
	FILE *fp;
	char lines[255];
	char newLine[255];
	char * words;
	int count = 0;
	int lineLength = 0;
	int position;
	fp = fopen (argv[1], "r+");
	for(int i=0; i<10; i++) {
		fgets(lines, 255, fp);
		lineLength = strlen(lines);
		if( feof(fp) ) {
			break; }
		words = strtok (lines, " ");
		while (words != NULL) {
			if (count%2 == 0){
				words[0]=toupper(words[0]);
			}
			strcat(newLine, words);
			words = strtok (NULL, " ");
			if(words != NULL){
				strcat(newLine," ");
			}
			count++;	
		}
		position=ftell(fp);
		fseek(fp, -lineLength, SEEK_CUR);
		fprintf(fp,"%s", newLine);
		fseek(fp, position, SEEK_SET);
		count=0;
		strcpy(newLine,"");
	}
	fclose(fp);
	return 0;
}
