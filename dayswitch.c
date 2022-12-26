#include<stdio.h>
int main(){
	char day;
	printf("enter day(a-g) : ");
	scanf("%c",&day);
	switch(day){
		case 'a': printf("monday\n");
		break;
		case 'b': printf("tuesday\n");
		break;
		case 'c': printf("wednesday\n");
		break;
		case 'd': printf("thrusday\n");
		break;
		case 'e': printf("friday\n");
		break;
		case 'f': printf("saturday\n");
		break;
		case 'g': printf("sunday\n");
		break;
		default : printf("not a valid day");
		
	}
return 0;
}
