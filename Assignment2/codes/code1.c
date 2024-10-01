#include<stdio.h>
int main()
{
	char *filename="dat.txt";
	int x[4],y[4],z[4];
	x[0]=-1;
	y[0]=2;
	z[0]=1;
	x[1]=1;
	y[1]=-2;
	z[1]=5;
	x[2]=4;
	y[2]=-7;
	z[2]=8;
	x[3]=2;
	y[3]=-3;
	z[3]=4;
	FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    fprintf(fp,"%d:%d:%d:A\n",x[0],y[0],z[0]);
    fprintf(fp,"%d:%d:%d:B\n",x[1],y[1],z[1]);
    fprintf(fp,"%d:%d:%d:C\n",x[2],y[2],z[2]);
    fprintf(fp,"%d:%d:%d:D\n",x[3],y[3],z[3]);
    fclose(fp);
    return 0;

}
