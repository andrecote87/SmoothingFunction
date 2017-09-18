#include <stdio.h>
#include <stdlib.h>

int read_data(FILE* datafile, float* data, int sz_data)
{

	int count = 0;

	char line[32];

	while (fgets(line, sizeof line, datafile) != NULL && count<sz_data)
	{
		data[count] = atof(line);
		
		count++;

	}
	

	return count;

}