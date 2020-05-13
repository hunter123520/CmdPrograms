/*
PRGORAM MADED  BY Sellami Med Abd Elhadi
Facebook : <Missing Breath>
Email :  <philippe.fernandez.2002@gmail.com>

This Program is A Rolling Dice Program Developed In 2020/5/11 It Takes About 5 To 6 Hours Of Working
Thank You!!

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

float delay (float sec){ // This Function Used To Delay The Instructions Time
   float mmsec = sec*1000; // Here We Create A Float mmsec That is The Multiplication Of Sec With 1000
   clock_t start = clock(); // Here We Create A Clock Variable Called Start And We Make Sure It Gets The Value Of The Function Clock()
   while(clock()<start +mmsec); //Here The Function Will Repeat As Time As We Enter In The Parameter
   return 0;
}

int DiceColor=252;

void LineOfLines(int N){
for(int i=1;i<=N;i++){
    printf("_");
}
}


void Box(int Lstr,int str,int tall,int wdt){ // This Function Uses To Draw A Square Box In The Screen By Entering Its Tall And Width And The Position Of The Box
gotoxy(str,Lstr);// Here We Go To The Position That We Want
LineOfLines(tall);// We Print The Top Line Of The Box With The Tall That We Entered Before
gotoxy(str-1,Lstr+1);// Here We Go To The Position str-1 And The Line Lstr+1 < The Left Top Edge Of The Box
printf("/");// Here We Print The  Edge Of The Box
gotoxy(str+tall,Lstr+1);// Here We Go To The Right Top Edge Of The Box
printf("\\");// Here We Print The  Edge Of The Box
for(int i=1;i<=wdt;i++){// This Loop Starts From 1 To The Number wdt That Represent The Width Of The Box
    gotoxy(str-2,Lstr+1+i);// Here We Go Move On Lines By The Number i
    printf("|");// Here We Print The First Shape Line
    gotoxy(str+tall+1,Lstr+1+i);// Here We Go Move On Lines To The Second Edge By The Number i
    printf("|");// Here We Print The Second Shape Line
}
gotoxy(str-1,Lstr+wdt+2);// Here We Go To The Left Down Edge Of The Box
printf("\\");// Here We Print The Edge
gotoxy(str+tall,Lstr+wdt+2);// Here We Go To The Right Down Edge Of The Box
printf("/");// Here We Print The Edge
gotoxy(str,Lstr+wdt+2);// Here We Go The The Bottom Of The Box
LineOfLines(tall);// We Print The Bottom Line Of The Box
}

void Color(int i){
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}

void gotoxy(int x,int y){
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void Start(int Colore,int FCol){
int Turn=1;
Color(Colore);
system("CLS");
Color(Colore);
for(int i=5;i<50;i+=2){
if(Turn == 1){
gotoxy(i,10);
printf("    ______");gotoxy(i,11);
printf("   /\\     \\");gotoxy(i,12);
printf("  /");
Color(FCol);
printf("%c ",4);
Color(Colore);
printf("\\");
Color(FCol);
printf("  %c  ",4);
Color(Colore);
printf("\\");
gotoxy(i,13);
printf(" /   ");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("\\_____\\");
gotoxy(i,14);
printf(" \\");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("   /");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("    /");
gotoxy(i,15);
printf("  \\ ");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("/");
Color(FCol);
printf("  %c  ",4);
Color(Colore);
printf("/");
gotoxy(i,16);
printf("   \\/____");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("/");
Turn=2;
}else if(Turn == 2){
gotoxy(i-5,10);
printf("       .-------.");gotoxy(i-5,11);
printf("      /");
Color(FCol);
printf("   %c",4);
Color(Colore);
printf("   /|");
gotoxy(i-5,12);
printf("     /_______/");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("|");
gotoxy(i-5,13);
printf("     |");
Color(FCol);
printf(" %c",4);
Color(Colore);
printf("     | |");
gotoxy(i-5,14);
printf("     |");
Color(FCol);
printf("   %c",4);
Color(Colore);
printf("   |");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("/");
gotoxy(i-5,15);
printf("     |");
Color(FCol);
printf("     %c ",4);
Color(Colore);
printf("|/ ");
gotoxy(i-5,16);
printf("     '-------'   ");
Turn=1;
}
Beep(2349,50);
Beep(2637,50);
system("CLS");
}
gotoxy(45,10);
printf("       .-------.");gotoxy(45,11);
printf("      /");
Color(FCol);
printf("   %c",4);
Color(Colore);
printf("   /|");
gotoxy(45,12);
printf("     /_______/");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("|");
gotoxy(45,13);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("| |");
gotoxy(45,14);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("|");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("/");
gotoxy(45,15);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("|/ ");
gotoxy(45,16);
printf("     '-------'   ");
Color(FCol);

delay(2);
for(int i=0;i<3;i++){

system("CLS");


Color(Colore+9);
gotoxy(2+i,2+i);
printf("  _____       _      _      _        _____ ");gotoxy(2+i,3+i);
printf(" |  __ \\     | |    | |    (_)      / ____|");gotoxy(2+i,4+i);
printf(" | |__) |___ | |    | |     _ _ __ | |  __ ");gotoxy(2+i,5+i);
printf(" |  _  // _ \\| |    | |    | | '_ \\| | |_ |");gotoxy(2+i,6+i);
printf(" | | \\ \\ (_) | |____| |____| | | | | |__| |");gotoxy(2+i,7+i);
printf(" |_|  \\_\\___/|______|______|_|_| |_|\\_____|");




gotoxy(8+i,9+i);
printf("  _____  _  _____ ______ ");gotoxy(8+i,10+i);
printf(" |  __ \\(_)/ ____|  ____|");gotoxy(8+i,11+i);
printf(" | |  | |_| |    | |__   ");gotoxy(8+i,12+i);
printf(" | |  | | | |    |  __|  ");gotoxy(8+i,13+i);
printf(" | |__| | | |____| |____ ");gotoxy(8+i,14+i);
printf(" |_____/|_|\\_____|______|");


Color(Colore);
gotoxy(45,10);
printf("       .-------.");gotoxy(45,11);
printf("      /");
Color(FCol);
printf("   %c",4);
Color(Colore);
printf("   /|");
gotoxy(45,12);
printf("     /_______/");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("|");
gotoxy(45,13);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("| |");
gotoxy(45,14);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("|");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("/");
gotoxy(45,15);
printf("     |");
Color(FCol);
printf(" %c %c %c ",4,4,4);
Color(Colore);
printf("|/ ");
gotoxy(45,16);
printf("     '-------'   ");
Color(FCol);
Beep(2637,80);

delay(0.02);

}




while(1){
    Color(240);
    gotoxy(28,20);
    printf("PRESS ANY KEY TO CONTINUE");
    if(_kbhit()){
        break;
    }
    Beep(261,100);
    delay(0.9);
    gotoxy(28,20);
    printf("                          ");
    delay(1);
    if(_kbhit()){
        break;
    }
}
system("CLS");



_getch();
Color(240);
system("CLS");

Box(1,5,70,20);

gotoxy(18,6);
printf("PRESS KEYS FROM A.Z.E.R.T.Y.U.I.O.P.Q.S.D.F.G.H");
gotoxy(29,8);
printf("TO CHANGE THE DICE COLOR");
gotoxy(25,11);
printf("PRESS THE FORECE NUMBER TO Roll");
gotoxy(35,13);
printf("THE RICE");
Color(FCol);
gotoxy(30,15);
printf("Forces Are From 1 To 9");
Color(Colore);

while(1){
    Color(Colore);
    gotoxy(28,20);
    printf("PRESS ANY KEY TO CONTINUE");
    if(_kbhit()){
        break;
    }
    Beep(261,100);
    delay(0.9);
    gotoxy(28,20);
    printf("                          ");
    delay(1);
    if(_kbhit()){
        break;
    }
}
system("CLS");





}

void SCore(int Score,int Colore,int ScoreCol,int Lstr,int str){
Color(Colore);
   gotoxy(str,Lstr);
   printf("%c-------%c",218,191);
   gotoxy(str,Lstr+1);
   printf("|       |");
   gotoxy(str,Lstr+2);
   printf("|       |");
   gotoxy(str,Lstr+3);
   printf("|       |");
   gotoxy(str,Lstr+4);
   printf("%c-------%c",192,217);


   if(Score==1){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+2);
   printf("  %c ",4);
   }else if(Score == 2){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+1);
   printf("%c",4);
   gotoxy(str+2,Lstr+3);
   printf("    %c",4);
   }else if(Score == 3){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+1);
   printf("%c",4);
   gotoxy(str+2,Lstr+2);
   printf("  %c",4);
   gotoxy(str+2,Lstr+3);
   printf("    %c",4);
   }else if(Score == 4){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+1);
   printf("%c   %c",4,4);
   gotoxy(str+2,Lstr+3);
   printf("%c   %c",4,4);
   }else if(Score == 5){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+1);
   printf("%c   %c",4,4);
   gotoxy(str+2,Lstr+2);
   printf("  %c ",4);
   gotoxy(str+2,Lstr+3);
   printf("%c   %c",4,4);
   }else if(Score == 6){
   Color(ScoreCol);
   gotoxy(str+2,Lstr+1);
   printf("%c %c %c",4,4,4);
   gotoxy(str+2,Lstr+2);
   printf("%c %c %c",4,4,4);
   gotoxy(str+2,Lstr+3);
   printf("%c %c %c",4,4,4);
   }
   Color(ScoreCol);
}

void TurnCore(int Colore,int FCol,int Lstr,int str){
Color(Colore);
   gotoxy(str,Lstr);
   printf("%c---%c---%c",218,194,191);
   gotoxy(str,Lstr+1);
   printf("|   |   |");
   gotoxy(str,Lstr+2);
   printf("|   |   |");
   gotoxy(str,Lstr+3);
   printf("|   |   |");
   gotoxy(str,Lstr+4);
   printf("%c---%c---%c",192,193,217);
   Color(FCol);
}

void TurnCore1(int Colore,int FCol,int Lstr,int str){
Color(Colore);
   gotoxy(str,Lstr);
   printf("%c-------%c",218,191);
   gotoxy(str,Lstr+1);
   printf("|       |");
   gotoxy(str,Lstr+2);
   printf("%c-------%c",195,180);
   gotoxy(str,Lstr+3);
   printf("|       |");
   gotoxy(str,Lstr+4);
   printf("%c-------%c",192,217);
   Color(FCol);
}

void TurnCore2(int Type,int Colore,int FCol,int Lstr,int str){
Color(Colore);
if(Type == 1){
gotoxy(str,Lstr);
printf("   _____");gotoxy(str,Lstr+1);
printf("  /");
Color(FCol);
printf(" %c",4);
Color(Colore);
printf("  /\\ ");
gotoxy(str,Lstr+2);
printf(" /____/");
Color(FCol);
printf("%c%c",4,4);
Color(Colore);
printf("\\");
gotoxy(str,Lstr+3);
printf("  \\");
Color(FCol);
printf("%c  %c",4,4);
Color(Colore);
printf("\\  /");
gotoxy(str,Lstr+4);
printf("   \\");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("__");
Color(FCol);
printf("%c",4);
Color(Colore);
printf("\\/");
}else if(Type ==2){

gotoxy(str,Lstr);
printf("  ____");gotoxy(str,Lstr+1);
printf(" /\\");
Color(FCol);
printf("%c %c",4,4);
Color(Colore);
printf("\\");
gotoxy(str,Lstr+2);
printf("/");
Color(FCol);
printf("%c ",4);
Color(Colore);
printf("\\___\\");
gotoxy(str,Lstr+3);
printf("\\");
Color(FCol);
printf("%c ",4);
Color(Colore);
printf("/ ");
Color(FCol);
printf("%c ",4);
Color(Colore);
printf("/");
gotoxy(str,Lstr+4);
printf(" \\/___/");



}
 Color(FCol);
/*
Color(Colore);
   gotoxy(str,Lstr);
   printf("%c-------%c",218,191);
   gotoxy(str,Lstr+1);
   printf("| \\    /|");
   gotoxy(str,Lstr+2);
   printf("%c   \\/  %c",195,180);
   gotoxy(str,Lstr+3);
   printf("|     \\ |");
   gotoxy(str,Lstr+4);
   printf("%c-------%c",192,217);
   Color(FCol);*/
}

void NumbersCr(int Type){
if(Type == 1){
gotoxy(34,8);
printf("   _ ");gotoxy(34,9);
printf(" /' \\");gotoxy(34,10);
printf("/\\_, \\");gotoxy(34,11);
printf("\\/_/\\ \\");gotoxy(34,12);
printf("   \\ \\ \\");gotoxy(34,13);
printf("    \\ \\_\\");gotoxy(34,14);
printf("     \\/_/");
}else if(Type ==2){
gotoxy(34,8);
printf("   ___");gotoxy(34,9);
printf(" /'___`\\");gotoxy(34,10);
printf("/\\_\\ /\\ \\");gotoxy(34,11);
printf("\\/_/// /__");gotoxy(34,12);
printf("   // /_\\ \\");gotoxy(34,13);
printf("  /\\______/");gotoxy(34,14);
printf("  \\/_____/");

}else if(Type == 3){
gotoxy(34,8);
printf("   __ ");gotoxy(34,9);
printf(" /'__`\\");gotoxy(34,10);
printf("/\\_\\L\\ \\");gotoxy(34,11);
printf("\\/_/_\\_<_");gotoxy(34,12);
printf("  /\\ \\L\\ \\");gotoxy(34,13);
printf("  \\ \\____/");gotoxy(34,14);
printf("   \\/___/ ");

}else if(Type == 4){
gotoxy(34,8);
printf(" __ __  ");gotoxy(34,9);
printf("/\\ \\\\ \\ ");gotoxy(34,10);
printf("\\ \\ \\\\ \\   ");gotoxy(34,11);
printf(" \\ \\ \\\\ \\_  ");gotoxy(34,12);
printf("  \\ \\__ ,__\\");gotoxy(34,13);
printf("   \\/_/\\_\\_/");gotoxy(34,14);
printf("      \\/_/  ");
}else if(Type == 5){
gotoxy(34,8);
printf(" ______  ");gotoxy(34,9);
printf("/\\  ___\\  ");gotoxy(34,10);
printf("\\ \\ \\__/   ");gotoxy(34,11);
printf(" \\ \\___``\\ ");gotoxy(34,12);
printf("  \\/\\ \\L\\ \\");gotoxy(34,13);
printf("   \\ \\____/");gotoxy(34,14);
printf("    \\/___/ ");
}else if(Type == 6){
 gotoxy(34,8);
printf("  ____    ");gotoxy(34,9);
printf(" /'___\\   ");gotoxy(34,10);
printf("/\\ \\__/   ");gotoxy(34,11);
printf("\\ \\  _``\\ ");gotoxy(34,12);
printf(" \\ \\ \\L\\ \\");gotoxy(34,13);
printf("  \\ \\____/");gotoxy(34,14);
printf("   \\/___/ ");

}
}

void Sound(int Force){
int  TimeFu=0;
if(Force == 1){
    TimeFu=133;
}else if (Force == 2){
    TimeFu=66;
}else if (Force == 3){
    TimeFu=56;
}else if (Force == 4){
    TimeFu=46;
}else if (Force == 5){
    TimeFu=26;
}else if (Force == 6){
    TimeFu=22;
}else if (Force == 7){
    TimeFu=30;
}else if (Force == 8){
    TimeFu=25;
}else if (Force == 9){
    TimeFu=22;
}
if(Force < 7){
Beep(2349,TimeFu);
Beep(2489,TimeFu);
Beep(2637,TimeFu);
}else{
Beep(2349,TimeFu);
Beep(2637,TimeFu);
}
//delay((0.4/Force));
}

int main()
{
srand( time( NULL ) );

Start(240,DiceColor);

int i,Force=0,Pushed=0,Wit=1,Lstr=10,str=34,Way=3,Stp=0,OldWay=Way,Almost=0,OldFor=0,Score=1,Strt=0;//1+rand()%8
/*
Way : 1 -> Right
Way : 2 -> Left
Way : 3 -> Up
Way : 4 -> Down
Way : 5 -> Up Right
Way : 6 -> Up Left
Way : 7 -> Down Right
Way : 8 -> Down Left
*/
while(1){
if(_kbhit()){
    switch(_getch()){
case '1':
    Force=1;
    Pushed=1;
    break;
case '2':
    Force=2;
    Pushed=1;
    break;
case '3':
    Force=3;
    Pushed=1;
    break;
case '4':
    Force=4;
    Pushed=1;
    break;
case '5':
    Force=5;
    Pushed=1;
    break;
case '6':
    Force=6;
    Pushed=1;
    break;
case '7':
    Force=7;
    Pushed=1;
    break;
case '8':
    Force=8;
    Pushed=1;
    break;
case '9':
    Force=9;
    Pushed=1;
    break;
case 'A':
case 'a':
    DiceColor=240;
    break;
case 'Z':
case 'z':
    DiceColor=241;
    break;
case 'E':
case 'e':
    DiceColor=242;
    break;
case 'R':
case 'r':
    DiceColor=243;
    break;
case 'T':
case 't':
    DiceColor=244;
    break;
case 'Y':
case 'y':
    DiceColor=245;
    break;
case 'U':
case 'u':
    DiceColor=246;
    break;
case 'I':
case 'i':
    DiceColor=247;
    break;
case 'O':
case 'o':
    DiceColor=248;
    break;
case 'P':
case 'p':
    DiceColor=249;
    break;
case 'Q':
case 'q':
    DiceColor=250;
    break;
case 'S':
case 's':
    DiceColor=251;
    break;
case 'D':
case 'd':
    DiceColor=252;
    break;
case 'F':
case 'f':
    DiceColor=253;
    break;
case 'G':
case 'g':
    DiceColor=254;
    break;
    }
}


Box(1,5,70,20);

if(Pushed == 0){
if(Strt==1){
Color(249);
NumbersCr(Score);
Color(240);
}
SCore(Score,DiceColor,240,Lstr,str);
}

if(Pushed==1){
Again:
if(Way==1){ //Way : 1 -> Right
    for(i=Almost;i<=5*Force;i++){
        if(str == 67){
            if(Lstr >= 4 && Lstr<=14){
                Way=2;Stp++;
            }else if(Lstr < 4){
                Way=8;
            }else if(Lstr >15){
                Way=6;
            }
            if(i<=(5*Force)-1){
                Almost=i;
            }else{
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
        Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);

        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore(DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
str++;
    }
}else if(Way == 2){ //Way : 2 -> Left
      for(i=Almost;i<=5*Force;i++){
        if(str == 5){
            if(Lstr >= 4 && Lstr<=14){
                Way=1;Stp++;
            }else if(Lstr < 4){
                Way=7;
            }else if(Lstr >15){
                Way=5;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore(DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
str--;
    }
}else if(Way == 3){ //Way : 3 -> Up
for(i=Almost;i<=5*Force;i++){
        if(Lstr == 2){
            if(str >= 8 && str<=65){
                Way=4;Stp++;
            }else if(str < 8){
                Way=7;
            }else if(str >65){
                Way=8;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore1(DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
Lstr--;
    }
}else if(Way == 4){ //Way : 4 -> Down
 for(i=Almost;i<=5*Force;i++){
        if(Lstr == 18){
            if(str >= 8  && str<=65){
                Way=3;Stp++;
            }else if(str < 8){
                Way=5;
            }else if(str >65){
                Way=6;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore1(DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
Lstr++;
    }
}else if(Way == 5){ //Way : 5 -> Up Right
 for(i=Almost;i<=5*Force;i++){
        if(Lstr == 2 || str == 67){
            if( str==67 && Lstr != 2){
                Way=6;
            }else if(str != 67 && Lstr == 2){
                Way=7;
            }else if(str == 67 && Lstr == 2){
               Way=8;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore2(2,DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
str++;
Lstr--;
    }
}else if(Way == 6){ //Way : 6 -> Up Left
for(i=Almost;i<=5*Force;i++){
        if(str == 5 || Lstr == 2){
            if( str==5 && Lstr != 2){
                Way=5;
            }else if(str != 5 && Lstr == 2){
                Way=8;
            }else if(str == 5 && Lstr == 2){
               Way=7;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        if(i==(5*Force)){
                Almost=0;break;
        }
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore2(1,DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
Lstr--;
str--;
    }
}else if(Way == 7){ //Way : 7 -> Down Right
for(i=Almost;i<=5*Force;i++){
        if(str == 67 || Lstr == 18){
            if( str==67 && Lstr != 18){
                Way=8;
            }else if(str != 67 && Lstr == 18){
                Way=5;
            }else if(str == 67 && Lstr == 18){
               Way=6;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else {
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore2(2,DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
Lstr++;
str++;
    }
}else if(Way == 8){ //Way : 8 -> Down Left
for(i=Almost;i<=5*Force;i++){
        if(str == 5 || Lstr == 18){
            if(str==5 && Lstr != 18){
                Way=7;
            }else if(str != 5 && Lstr == 18){
                Way=6;
            }else if(str == 5 && Lstr == 18){
               Way=5;
            }
            if(i<=(5*Force)){
                Almost=i;
            }else{
                Almost=0;
            }
            break;
        }
        if(i==(5*Force)){
                Almost=0;break;
        }
Color(249);
NumbersCr(Score);
Color(240);
        Box(1,5,70,20);
        if(Wit==1){
        Score=1+rand()%6;
        SCore(Score,DiceColor,240,Lstr,str);
        Wit=2;
        }else if(Wit == 2){
        TurnCore2(1,DiceColor,240,Lstr,str);
        Wit=1;
        }
        Sound(Force);
        //delay(0.4/Force);
        system("CLS");
Lstr++;
str--;
    }
}
    if(Stp==3){
        Way=1+rand()%8;
        if(Way<=4){
            Way+=4;
        }else if(Way>8){
            Way=8;
        }
        Stp=0;
    }
    if(Almost!=0){
    goto Again;
    }
    Strt=1;
    Pushed=0;
}


//if(_getch()){}
//system("CLS");

}
gotoxy(1,20);



    return 0;
}



