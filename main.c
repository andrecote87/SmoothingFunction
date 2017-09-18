#include <stdlib.h>
#include <stdio.h>
#include <smooth.h>
#include <read_data.h>




#define MAX_LINES 256 /*This is a macro, it stays the same where ever "MAX_LINES" is put*/
int main(void)
{

	int filter=25;

	FILE* inputFile = fopen("afile.dat","r");
	FILE* smoothed_data = fopen("smoothed_data.dat", "w");

	if(inputFile == NULL) 
	{
		printf("file open failed");
		return 1;
	}

		float inputData[MAX_LINES];

		int count;

		count=read_data(inputFile, inputData, MAX_LINES);
		

		fclose(inputFile);
		float outputdata[count - filter + 1];
		smooth(inputData, count, filter, outputdata);

		for(int i=0; i < MAX_LINES; i++)
		{
		printf("%f\n", outputdata[i]);  
		fprintf(smoothed_data,"%f\n", outputdata[i]);  /*prints to a file*/
		}
		


		return 0;

}
	