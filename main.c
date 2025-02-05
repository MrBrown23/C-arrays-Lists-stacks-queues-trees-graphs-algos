#include <stdio.h>

int main(){
	double prices[] = {1.2, 5.3, 4.7, 88.5, 19.6, 2222.44};
	for(int i=0; i<6;i++){
		printf("%.2lf\n", prices[i]);
	}
	return 0;
}
