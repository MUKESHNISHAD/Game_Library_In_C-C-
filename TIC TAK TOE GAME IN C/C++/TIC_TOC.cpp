#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
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
		gotoxy(30,1);
		cout<<"X -> TURN";
		gotoxy(0,10);
		// this is X - turn
x:
		gotoxy(0,11);
		cout<<"SET POSITION -> ";
		cin>>x>>y;
		if(arr[x][y]=='_') {
			arr[x][y]='x';
			display();
			gotoxy(30,1);
			cout<<"O -> TURN";
			check();
			goto o;
		}
		/// this is O - turn
o:
		gotoxy(0,11);
		cout<<"SET POSITION -> ";
		cin>>x>>y;
		if(arr[x][y]=='_') {
			arr[x][y]='o';
			display();
			check();
			gotoxy(30,1);
			cout<<"X -> TURN";
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
		cout<<"X is win\n";
	    Sleep(5);
		system("cls");
		exit(1);
	}
	if((arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')||(arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')||(arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o')
	        || (arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o')|| (arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o')|| (arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o')
	        || (arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')	|| (arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o')) {
		gotoxy(15,8);
		printf("O is win\n");
		Sleep(5);
		system("cls");
		exit(1);
	}
}
void display(void) {
	int i,j;
	system("cls");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++) {
			printf("%c    ",arr[i][j]);	}
		printf("\n\n\n");}
}
