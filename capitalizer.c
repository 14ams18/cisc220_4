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
	//printf( "You Entered: %s\n", argv[1] );
	fp = fopen (argv[1], "r+");
	//fprintf(fp, "%s\n", "fprintf test ");
	for(int i=0; i<10; i++) {
		fgets(lines, 255, fp);
		lineLength = strlen(lines);
		//printf("Length: %d", lineLength);
		if( feof(fp) ) {
			break; }
		//printf("Test: %s\n", lines);
		words = strtok (lines, " ");
		while (words != NULL) {
 			//printf("%s\n", words);
			if (count%2 == 0){
				words[0]=toupper(words[0]);
			}
			//printf("%s\n", words);
			strcat(newLine, words);
			//strcat(newLine, " ");
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
	//fprintf(fp,"%s\n", "fprintf test");
	fclose(fp);
	return 0;
}
