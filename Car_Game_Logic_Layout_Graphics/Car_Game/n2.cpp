#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
// FUNCTION DECLEARATION
void sun(void);
void UR(void);
void road_dibba(void);
void road(void);
void LRLINE(void);
void all(void);
void car(void);
void mount(void);
// FUCTION DECLEARATION END
// ractangle first block
int rx1=100,ry1=20,rx2=500,ry2=200;
// score
int score=1;
// sadak line white- part
int px1=290,py1=210,px2=300,py2=280;
int px3=290,py3=300,px4=300,py4=370;
int px5=290,py5=390,px6=300,py6=450;

// Sun
int sx=270,sy=120,radius=30;

// Me car rotate st:
int carx1=260,cary1=430,carx2=270,cary2=450;

int main() {
	char ch;
//	MAIN CAR....
	int cx1=260,cy1=210,cx2=270,cy2=230;
	// int cx3=260,cy3=320,cx4=270,cy4=350;
	int cx5=320,cy5=330,cx6=330,cy6=360;
	initwindow(700,470);
	//sun
	// uper rectangle
	// rode dibba
	// rode
	// LR-side line
	//   sun();
	//  UR();
	// road();
	//  LRLINE();
	// road_dibba()
	while(1) {
		gotoxy(55,3);
		printf("SCORE-%d",score);
		score++;
ST:
		if(kbhit()) {
			ch=getch();
			switch(ch) {	// CAR ROTATE OPPSION
				case 'a':
					carx1=260,cary1=430,carx2=270,cary2=450;
					car();
					break;
				case 'd':
					carx1=320,cary1=430,carx2=330,cary2=450;
					car();
					break;
				case 'o':
					return 0;
			}
		}
		while(!kbhit()) {
			sun();
			mount();
			UR();
			road();
			LRLINE();
			car();
			// score counter
			gotoxy(55,3);
			printf("SCORE-%d",score);
			score++;
			// score counter End
			//car line code

			//1st
			setfillstyle(1,4);
			rectangle(cx1,cy1,cx2,cy2);
			floodfill(cx1+1,cy1+1,WHITE);
//2nd
			//  setfillstyle(SOLID_FILL,RED);
			//  rectangle(cx3,cy3,cx4,cy4);
			//  floodfill(cx3+1,cy3+1,WHITE);            //3rd
			setfillstyle(SOLID_FILL,4);
			rectangle(cx5,cy5,cx6,cy6);
			floodfill(cx5+1,cy5+1,WHITE);

			cy1=cy1+5;
			delay(10);
			cy2=cy2+5;
			delay(5);

			cy5=cy5+5;
			delay(10);
			cy6=cy6+5;
			delay(5);

			if(cy2==470) {
				cx1=260,cy1=210,cx2=270,cy2=240;
			}

			if(cy6==470) {
				cx5=320,cy5=210,cx6=330,cy6=240;
			}


// End car line code @ Trafic line END.................................................
// Game End start....

			if((cy2==cary1 && cx2==carx2) ||(cary1==cy1&&carx1==cx1)
			        ||(cy2-5==cary1 && cx2==carx2) ||(cary1-5==cy1&&carx1==cx1)
			        ||(cy2-2==cary1 && cx2==carx2) ||(cary1-2==cy1&&carx1==cx1)
			        ||(cy2-1==cary1 && cx2==carx2) ||(cary1-1==cy1&&carx1==cx1)
			        ||(cy2-10==cary1 && cx2==carx2) ||(cary1-10==cy1&&carx1==cx1)
			  ) {
				system("cls");
				gotoxy(34,12);
				printf("GAME OVER\n");
				gotoxy(34,13);
				printf("SCORE-%d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",score);
				delay(6000);
				return 0;
			}
			if((cy6==cary1&&cx6==carx2)||(cary1==cy5&&carx1==cx5)
			        ||(cy6-1==cary1&&cx6==carx2)||(cary1-1==cy5&&carx1==cx5)
			        ||(cy6-2==cary1&&cx6==carx2)||(cary1-2==cy5&&carx1==cx5)
			        ||(cy6-3==cary1&&cx6==carx2)||(cary1-3==cy5&&carx1==cx5)
			        ||(cy6-4==cary1&&cx6==carx2)||(cary1-4==cy5&&carx1==cx5)
			        ||(cy6-5==cary1&&cx6==carx2)||(cary1-5==cy5&&carx1==cx5)
			        ||(cy6-10==cary1&&cx6==carx2)||(cary1-10==cy5&&carx1==cx5)
			  ) {
				system("cls");
				gotoxy(34,12);
				printf("GAME OVER\n");
				gotoxy(34,13);
				printf("SCORE-%d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ",score);
				delay(6000);
				return 0;
			}
// Game End...
// road dibba Start.............................................
//1st
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(px1,py1,px2,py2);
			floodfill(px1+1,py1+3,WHITE);
//2nd
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(px3,py3,px4,py4);
			floodfill(px3+1,py3+3,WHITE);
//3rd
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(px5,py5,px6,py6);
			floodfill(px5+1,py5+3,WHITE);
//4th
//    setfillstyle(SOLID_FILL,WHITE);
//    rectangle(px7,py7,px8,py8);
			//  floodfill(px7+1,py7+3,WHITE);

			py1=py1+3;
			delay(10);
			py2=py2+3;
			delay(10);
			py3=py3+3;
			delay(10);
			py4=py4+3;
			delay(10);
			py5=py5+3;
			delay(10);
			py6=py6+3;
			delay(10);

			if(py5==471) {
				px1=290;
				py1=210;
				px2=300;
				py2=280;
				px3=290;
				py3=300;
				px4=300;
				py4=370;
				px5=290;
				py5=390;
				px6=300;
				py6=450;
				goto ST;
			}
			clearviewport();
			sun();
			mount();
			UR();
			road();
			LRLINE();
			car();

			// all();
			// rode bibba End or sadak white line End


		}// while body..

	} // while 1 infinite loop..

	// all();
	getch();
	closegraph();
	return 0;
}
void mount(void) {
	int mx1=100,my1=200,mx2=200,my2=80;
	//1st Left Side
	setfillstyle(SOLID_FILL,6);
	line(mx1,my1,mx2,my2);   //left side
	line(200,80,290,200);    // right side
	line(100,200,290,200);   // ground line
	floodfill(mx2,my2+1,WHITE);
  // 2nd Right Side
	setfillstyle(6,6);
	line(240,200,360,80);   //left side
	line(360,80,500,200);    // right side
	line(240,200,500,200);   // ground line
	floodfill(360,82,WHITE);
}
void all(void) {
	sun();
	UR();
	road();
	LRLINE();
	road_dibba();

}
void road_dibba(void) {
ST:
	while(!kbhit()) {
		// sun();
		UR();
		road();
		LRLINE();
		sun();
// rode dibba
//1st
		setfillstyle(SOLID_FILL,WHITE);
		rectangle(px1,py1,px2,py2);
		floodfill(px1+1,py1+3,WHITE);
//2nd
		setfillstyle(SOLID_FILL,WHITE);
		rectangle(px3,py3,px4,py4);
		floodfill(px3+1,py3+3,WHITE);
//3rd
		setfillstyle(SOLID_FILL,WHITE);
		rectangle(px5,py5,px6,py6);
		floodfill(px5+1,py5+3,WHITE);
//4th
//    setfillstyle(SOLID_FILL,WHITE);
//    rectangle(px7,py7,px8,py8);
		//  floodfill(px7+1,py7+3,WHITE);

		py1=py1+3;
		delay(10);
		py2=py2+3;
		delay(10);
		py3=py3+3;
		delay(10);
		py4=py4+3;
		delay(10);
		py5=py5+3;
		delay(10);
		py6=py6+3;
		delay(10);

		if(py5==471) {
			px1=290;
			py1=210;
			px2=300;
			py2=280;
			px3=290;
			py3=300;
			px4=300;
			py4=370;
			px5=290;
			py5=390;
			px6=300;
			py6=450;
			goto ST;
		}
		clearviewport();
		// sun();
		UR();
		road();
		LRLINE();
		sun();
		all();
	}// while body...
}
void sun(void) {
//sun
	setfillstyle(SOLID_FILL,14);
	circle(sx,sy,radius);
	floodfill(sx+1,sy+1,WHITE);
}
void UR(void) { // uper rectangle
	// uper ractangle
	setfillstyle(SOLID_FILL,19);
	rectangle(rx1,ry1,rx2,ry2);
	floodfill(101,21,WHITE);

}

void road(void) {
	//rode
	setfillstyle(SOLID_FILL,0);
	line(270,200,190,470);// 1st line left side
	line(320,200,410,470); // 2nd line right side
	line(190,470,410,470); // last line
	floodfill(271,211,WHITE);

}
void LRLINE(void) {
// left side line
	setfillstyle(SOLID_FILL,2);
	line(100,200,100,470);
	line(100,470,190,470);
	floodfill(101,201,WHITE);
	// right side line:
	setfillstyle(SOLID_FILL,2);
	line(500,200,500,470);
	line(410,470,500,470);
	floodfill(351,201,WHITE);

}
void car(void) {
	setfillstyle(7,9);
	rectangle(carx1,cary1,carx2,cary2);
	floodfill(carx1+1,cary1+1,WHITE);
}
