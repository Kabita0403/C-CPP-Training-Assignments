#include <stdio.h>
int main() 
{
FILE *fp;
fp  = fopen ("D://data.txt", "w");

fputs("My name is Kabita Chhetri,\t", fp);
fputs("Landis Gyr\n", fp);
fclose(fp);     
}
