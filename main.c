#include <stdio.h>

int main(){
	double prices[][3] = {{1.2, 5.3, 4.7}, {88.5, 19.6, 2222.44}};
	int rows =  sizeof(prices) / sizeof(prices[0]);
	int cols = sizeof(prices[0]) / sizeof(prices[0][0]);
	for(int i=0; i < rows;i++){
		for(int j=0; j< cols; j++)
			printf("%.2lf\t", prices[i][j]);
		printf("\n");
	}
	
	return 0;
}
