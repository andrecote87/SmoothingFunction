#include <stdio.h>





void smooth(float* data, int sz_data, int filter, float* output)
{
	float x=0;

	for(int n=0; n<sz_data ;n++)
	{
		x=0;

		/*int w;

		if(filter % 2 == 1)
		{
			w=
		}
		else
		{

		}
*/
		for(int m=0; m<=filter; m++)
		{
			x = x + data[n + m];
		}
		
		output[n]= x/filter;
		
	}
}