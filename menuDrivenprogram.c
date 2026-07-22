#include <stdio.h>
#include <string.h>
int main(){
int arr[10];
int n=10;
int i,j,temp;
char str [50];
char choice;
do{
printf("Menu\n");
printf("a: Calculate the length of the string\n");
printf("b: Reversed string\n");
printf("c: Sort ten Numbers\n");
printf("x: Exit\n");
printf("Enter a string: ");
scanf("%c", &choice);

switch(choice){
case 'a' :
	printf("Enter a string of your choice:\n");
	scanf(" %[^\n]",str);
	printf("The length of the string is = %d\n",strlen(str));
	break;
case 'b' :
	printf("Enter a string of your choice:\n");
	scanf(" %[^\n]", str);
	for(i=strlen(str)-1; i>=0; i--){
	printf("%c",str[i]);
	}
	printf("\n");
	break;
case 'c' :
	printf("Enter ten numbers:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		}
	}
}
printf("Sorted Array: \n");
for(i=0; i<n; i++){
	printf("%d ", arr[i]);
}
break;
case 'x':
    printf("Goodbye!!");
    break;
default:
	printf("Invalid choice");

}
} while (choice != 'x');
return 0;
}
