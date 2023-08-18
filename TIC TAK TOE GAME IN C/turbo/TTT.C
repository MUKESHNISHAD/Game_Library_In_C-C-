#include<stdio.h>
#include<conio.h>
#include<dos.h>
char arr[3][3]= {{'_','_','_'},
	{'_','_','_'},
	{'_','_','_'}
};
void display(void);
void check(void);
int x,y;
int main() {
	display();
	while(1) {
		gotoxy(10,1);
		printf("X -> TURN");
		gotoxy(0,10);
		// this is X - turn
x:
		gotoxy(1,7);
		printf("SET POSITION -> ");
		scanf("%d%d",&x,&y);
		if(arr[x][y]=='_') {
			arr[x][y]='x';
			display();
			gotoxy(10,1);
			printf("O -> TURN");
			check();
			goto o;
		}
		/// this is O - turn
o:
		gotoxy(1,7);
		printf("SET POSITION -> ");
		scanf("%d%d",&x,&y);
		if(arr[x][y]=='_') {
			arr[x][y]='o';
			display();
			check();
			gotoxy(10,1);
			printf("X -> TURN");
			goto x;
		}
	}
	return 0;
}
void check(void) {
	if((arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x')||(arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x')||(arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x')
	        || (arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x')|| (arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x')|| (arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x')
	        || (arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')	|| (arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x') ) {
		gotoxy(15,8);
		printf("X is win\n");
		delay(5000);
		system("cls");
		exit(1);
	}
	if((arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')||(arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')||(arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o')
	        || (arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o')|| (arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o')|| (arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o')
	        || (arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')	|| (arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o')) {
		gotoxy(15,8);
		printf("O is win\n");
		delay(5000);
		system("cls");
		exit(1);
	}
}
void display(void) {
	int i,j;
clrscr();
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}
