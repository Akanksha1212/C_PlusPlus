#include <stdio.h>
#include <time.h>
int main(){
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];
	time(&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,80,"%T",timeinfo);
	puts (buffer);
	return 0;
}
