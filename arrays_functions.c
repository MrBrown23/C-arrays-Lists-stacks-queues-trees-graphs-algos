#include <stdio.h>
#include <string.h>

// int array_insert(int *ptr);

void print_array();

int main(){
	char cars[][10] = {"Toyota", "Dacia", "BMW"};
	strcpy(cars[0], "Tesla");
	for(int i=0; i < sizeof(cars) / sizeof(cars[0]); i++)
		printf("%s\n", cars[i]);
	return 0;
}

// int array_insert(int *ptr){
// 	int rows = sizeof(ptr) / sizeof(ptr);
// 	int cols = sizeof(ptr) / sizeof(ptr / rows);
// 	for(int i=0 ; i<rows; i++){
// 		for(int j=1; j<cols; j++){
// 			print("Enter the element %d, %d:", i+1, j+1);
// 			scanf("%d", ptr(i+j));
// 		}
// 	}
// 	return ptr;	
// }

// void print_array(int array[][]){
//         int rows = sizeof(array) / sizeof(array[0][0]);
//         int cols = sizeof(array[0]) / sizeof(array);
// 	for(int i=0 ; i<rows; i++){
//                 for(int j=0; j<cols; j++){
// 			printf("%d\t", *(array[i][j]));	
// 		}
// 		printf("\n");
// 	}
// }
