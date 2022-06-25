#include<stdio.h>
#include <conio.h>
#include<windows.h>
int main()
{
int ch1, ch2, b, a, hor,vert, swap, finish,start,stats=0;
char maze[12][12] = {
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 1, 8, 1},
{1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
{1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
{1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1},
{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} } ; 
hor = 2 ; 
vert= 9 ; 
finish=8;
start=4;
system("color b") ;
printf("\\^v^/ MAZE 4-CHAN \\^v^/ \n");
printf("NOTICE!!!\n");
printf("1. INPUT START COORDINATE. START COORDINATE MUST BE IN 0!!!\n");
printf("2. THE WALL IS SYMBOLIZE BY 1, RAT BY 4, FINISH BY 8, AND ROAD BY 0!!!\n");
printf("3. TO WIN, ONE MUST STEP ON 8!!!\n");
printf("4. RAT CAN ONLY MOVE IN ROAD 0!!!\n");
printf("PRESS ANY KEY TO CONTINUE") ;
system("pause") ;
//ini buat input start
while(1){
	system("color 3");
	for(a=0;a<10;a++){
		for(b=0;b<11;b++){
			printf("%d  ",maze[a][b]) ;
		} printf("\n\n") ;
	}
	printf("Decide starting point by inputing the coordinate...\n");
	printf("VERTICAL:  ") ;
	scanf("%d",&vert) ;
	printf("HORIZONTAL:  ") ;
	scanf(" %d",&hor) ;
	if(maze[vert][hor]==0 && vert!=0 && vert!=11 && hor!=11 && hor!=0){
		maze[vert][hor]=start ;
		break;
	} else{system("color 4"); printf("RAT MUST NOT BE IN WALL!!!\n"); Sleep(300); system("cls") ;}
} 
system("cls") ;
system("color a") ;
printf("LET ");
Sleep(300);
system("color E") ;
printf("THE ") ;
Sleep(300);
system("color D") ;
printf("GAME ") ;
Sleep(300);
printf("BEGIN!!") ;
for(a=0;a<5;a++){
	system("color a") ;
	Sleep(10);
	system("color b") ;
	Sleep(10);
	system("color c") ;
	Sleep(10);
	system("color d") ;
	Sleep(10);
	system("color e") ;
	Sleep(10);
	system("color f") ;
} system("cls");

while(1) {	
for(a=0;a<10;a++){
		for(b=0;b<11;b++){
			printf("%d  ",maze[a][b]) ;
		} printf("\n\n") ;
	}
printf("PRESS ARROW KEY TO MOVE \n");	
	
ch1 = getch();
ch2 = 0;
if (ch1 == 0xE0) {
	
ch2 = getch();


switch(ch2)
{
case 72: printf("UP\n"); 
if(maze[vert-1][hor]==0 || maze[vert-1][hor]==finish){
	system("color b") ;
	vert=vert-1 ;
	swap=maze[vert+1][hor] ;
	maze[vert+1][hor]=maze[vert][hor] ;
	maze[vert][hor]= swap ;
	if(maze[vert+1][hor]==finish) {
		stats++ ;
		maze[vert+1][hor]=0 ;
	}
	break;
} else system("color 4"); printf("OUCH!\n") ;Sleep(50);system("color b") ;
break;
case 80: printf("DOWN\n"); 
if(maze[vert+1][hor]==0 || maze[vert+1][hor]==finish){
	system("color b") ;
	vert=vert+1 ;
	swap=maze[vert-1][hor] ;
	maze[vert-1][hor]=maze[vert][hor] ;
	maze[vert][hor]= swap ;
		if(maze[vert-1][hor]==finish) {
		stats++ ;
		maze[vert-1][hor]=0;
	}
	break;
} else system("color 4"); printf("OUCH!\n") ;Sleep(50);system("color b") ;

break;
case 75: printf("LEFT\n"); 
if(maze[vert][hor-1]==0||maze[vert][hor-1]==finish){
	system("color b") ;
	hor=hor-1 ;
	swap=maze[vert][hor+1] ;
	maze[vert][hor+1]=maze[vert][hor] ;
	maze[vert][hor]= swap ;
		if(maze[vert][hor+1]==finish) {
		stats++ ;
		maze[vert][hor+1]=0 ;
	}
	break;
} else system("color 4"); printf("OUCH!\n") ;Sleep(50);system("color b") ;
break;
case 77: printf("RIGHT\n"); 
if(maze[vert][hor+1]==0||maze[vert][hor+1]==finish){
	system("color b") ;
	hor=hor+1 ;
	swap=maze[vert][hor-1] ;
	maze[vert][hor-1]=maze[vert][hor] ;
	maze[vert][hor]= swap ;
		if(maze[vert][hor-1]==finish) {
		stats++ ;
		maze[vert][hor-1]=0 ;
	}
	break;
} else system("color 4"); printf("OUCH!\n") ; Sleep(50); system("color b") ;
break;

default: system("color 4") ;
printf("CONFUSED RAT NOISE\n"); system("cls"); system("color b") ; break;
}; if(stats!=0){ system("color a"); system("cls"); break;
} printf("%c",ch1);
system("cls") ; 
}  
else {
system("color 4") ;
printf("WRONG!!\n");
system("pause"); system("color b") ;} system("cls"); }
for(a=1;a<=10;a++){
		for(b=1;b<=11;b++){
			printf("%d  ",maze[a][b]) ;
		} printf("\n\n") ;
	}
	Sleep(1000) ;
printf(" 8 : YAMETE KUDASHAI, 4-CHAN !!! (~ >//O/<)~ \n") ;
for(a=0;a<=5;a++){
	system("color a") ;
	Sleep(10);
	system("color b") ;
	Sleep(10);
	system("color c") ;
	Sleep(10);
	system("color d") ;
	Sleep(10);
	system("color e") ;
	Sleep(10);
	system("color f") ;
} 
return 0; 
}
