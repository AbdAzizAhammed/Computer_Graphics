#include<iostream>
#include<graphics.h>

using namespace std;
int main()

{
    int number;

    cout<<"\t\t\t\t\t\tDRAWING INTRO :\n\n\n";
    cout<<"\t\t\t\t\t (1)  Ludo Dice  \n";
    cout<<"\t\t\t\t\t (2)  Triangle Man \n";
    cout<<"\t\t\t\t\t (3)  Home \n";
    cout<<"\t\t\t\t\t (4)  Testy Emoji \n";
    cout<<"\t\t\t\t\t (5)  The City River Scenario \n";
    cout<<"\t\t\t\t\t (6)  Cycle Animation \n\n";
    cout<<"\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n";

    while(1)
    {

        cout<<"Enter Your Choice (1-6): \n";
        cin>>number;

        int gd=DETECT,gm,x,i;
        initgraph(&gd,&gm,"");
        initwindow(1080,720, "Computer Graphics Sessional ");

        line(10,20,10,40);
        line(10,20,20,40);
        line(20,40,20,20);
        line(25,40,30,20);
        line(30,20,40,40);
        line(27,30,35,30);
        line(45,20,45,40);
        line(45,20,55,30);
        line(65,20,65,40);
        line(65,20,55,30);
        line(75,20,75,40);
        line(75,20,85,20);
        line(75,40,85,40);
        line(75,30,80,30);
        circle(95,24,2);
        circle(95,38,2);
        line(105,20,105,40);
        line(105,20,115,30);
        line(125,20,125,40);
        line(125,20,115,30);
        line(135,20,135,40);
        ellipse(135,30,270,90,10,10);
        line(175,20,165,40);
        line(175,20,185,40);
        line(170,30,180,30);
        line(190,20,210,20);
        line(190,40,210,40);
        line(210,20,190,40);
        line(220,20,220,40);
        line(215,20,225,20);
        line(215,40,225,40);
        line(230,20,250,20);
        line(230,40,250,40);
        line(250,20,230,40);
        ellipse(265,30,180,360,10,10);
        line(255,30,255,20);
        line(275,30,275,20);
        line(285,20,285,40);
        line(285,40,295,40);
        line(305,20,305,40);
        line(305,30,325,30);
        line(325,20,325,40);
        line(340,20,330,40);
        line(340,20,350,40);
        line(335,30,345,30);
        circle(365,30,10);
        line(370,35,375,45);

        //ID:CSE2001019139
        line(15,50,15,70);
        line(10,50,20,50);
        line(10,70,20,70);
        line(30,50,30,70);
        ellipse(30,60,270,90,10,10);
        circle(50,54,2);
        circle(50,66,2);
        ellipse(70,60,90,270,12,10);
        circle(70,52,3);
        ellipse(90,54,360,180,6,6);
        ellipse(84,66,180,360,7,6);
        line(84,53,90,63);
        line(100,50,100,70);
        line(100,50,110,50);
        line(100,70,110,70);
        line(100,60,105,60);
        ellipse(125,54,360,180,7,7);
        line(132,53,120,70);
        line(120,70,135,70);
        circle(118,56,2);
        circle(150,60,10);
        circle(175,60,10);
        line(190,50,190,70);
        line(190,50,185,52);
        line(185,70,195,70);
        circle(205,60,10);
        line(220,50,220,70);
        line(215,70,225,70);
        line(220,50,215,53);
        circle(235,55,6);
        line(238,60,230,70);
        line(248,50,248,70);
        line(248,50,243,53);
        line(243,70,253,70);
        ellipse(260,57,270,90,7,7);
        ellipse(260,68,270,90,5,5);
        circle(260,52,2);
        circle(278,55,6);
        line(281,60,275,70);

        switch(number)
        {

        case 1:
        {

            cout<<"1st Drawing Ludo Dice.\n\n";

            //NAME:AZIZUL HAQE
            setcolor(DARKGRAY);
            rectangle(200,300,400,500);
            setfillstyle(1,YELLOW);
            floodfill(205,305,DARKGRAY);

            setcolor(DARKGRAY);
            circle(250,355,10);
            setfillstyle(1,BLACK);
            floodfill(250,355,DARKGRAY);

            setcolor(DARKGRAY);
            circle(250,440,10);
            setfillstyle(1,BLACK);
            floodfill(250,445,DARKGRAY);

            setcolor(DARKGRAY);
            circle(330,355,10);
            setfillstyle(1,BLACK);
            floodfill(330,355,DARKGRAY);

            setcolor(DARKGRAY);
            circle(330,440,10);
            setfillstyle(1,BLACK);
            floodfill(330,445,DARKGRAY);

            setcolor(DARKGRAY);
            line(200,300,300,200);
            line(300,200,500,200);
            line(400,300,500,200);
            setfillstyle(1,YELLOW);
            floodfill(305,205,DARKGRAY);

            setcolor(DARKGRAY); // 1st
            circle(280,280,10);
            setfillstyle(1,BLACK);
            floodfill(280,285,DARKGRAY);

            setcolor(DARKGRAY); // 1st
            circle(360,280,10);
            setfillstyle(1,BLACK);
            floodfill(360,285,DARKGRAY);

            setcolor(DARKGRAY); // 2nd
            circle(310,250,10);
            setfillstyle(1,BLACK);
            floodfill(310,245,DARKGRAY);

            setcolor(DARKGRAY); // 2nd
            circle(390,250,10);
            setfillstyle(1,BLACK);
            floodfill(390,245,DARKGRAY);

            setcolor(DARKGRAY); //3rd
            circle(340,220,10);
            setfillstyle(1,BLACK);
            floodfill(340,225,DARKGRAY);

            setcolor(DARKGRAY); //3rd
            circle(420,220,10);
            setfillstyle(1,BLACK);
            floodfill(420,225,DARKGRAY);

            setcolor(DARKGRAY);
            line(400,300,500,200);
            line(500,200,500,400);
            line(400,500,500,400);
            setfillstyle(1,YELLOW);
            floodfill(405,305,DARKGRAY);

            setcolor(DARKGRAY);
            circle(445,385,10);
            setfillstyle(1,BLACK);
            floodfill(445,390,DARKGRAY);

            setcolor(DARKGRAY);
            circle(465,310,10);
            setfillstyle(1,BLACK);
            floodfill(465,315,DARKGRAY);
        }
        break;

        case 2:
        {
            cout<<"2nd Drawing.Triangle Man\n\n";
            setcolor(WHITE);
            line(300,200,150,400);
            line(300,200,450,400);
            line(150,400,450,400);
            setfillstyle(1,YELLOW);
            floodfill(305,260,WHITE);

            //Big circle
            setcolor(BLUE);
            circle(280,280,15);
            setfillstyle(1,WHITE);
            floodfill(280,280,BLUE);
            //small circle
            setcolor(BLUE);
            circle(285,286,5);
            setfillstyle(1,BLACK);
            floodfill(285,286,BLUE);




            setcolor(BLUE);
            circle(322,286,5);
            setfillstyle(1,BLACK);
            floodfill(322,286,BLUE);
            setcolor(BLUE);
            circle(320,280,15);
            setfillstyle(1,WHITE);
            floodfill(320,280,BLUE);
            //Triangle
            setcolor(WHITE);
            line(260,350,340,350);
            line(300,330,260,350);
            line(300,330,340,350);
            setfillstyle(1,BLACK);
            floodfill(300,340,WHITE);

            setcolor(WHITE);
            line(225,300,110,250);
            line(110,250,100,230);
            line(110,250,90,250);
            line(100,230,90,250);
            setfillstyle(1,YELLOW);
            floodfill(100,235,WHITE);

            line(375,300,490,250);
            setcolor(WHITE);
            line(490,250,500,230);
            line(490,250,510,250);
            line(500,230,510,250);
            setfillstyle(1,YELLOW);
            floodfill(500,235,WHITE);

            setcolor(WHITE);
            line(270,400,270,430);
            line(270,430,240,430);
            line(270,400,240,430);
            setfillstyle(1,YELLOW);
            floodfill(260,420,WHITE);


            setcolor(WHITE);
            line(330,400,330,430);
            line(330,430,360,430);
            line(330,400,360,430);
            setfillstyle(1,YELLOW);
            floodfill(340,420,WHITE);



        }
        break;

        case 3:
        {

            cout<<"3rd Drawing.Home\n\n";

            setcolor(WHITE);
            rectangle(0,400,1075,700);
            setfillstyle(1,GREEN);
            floodfill(10,405,WHITE);

            setcolor(BLUE);
            rectangle(0,0,1075,400);
            setfillstyle(1,LIGHTGRAY);
            floodfill(11,30,BLUE);

            setcolor(BLUE);
            line(350,150,650,150);
            line(350,150,400,250);
            line(650,150,700,230);
            line(400,250,700,230);
            setfillstyle(5,GREEN);
            floodfill(360,151,BLUE);

            line(350,150,300,250);
            line(400,250,400,400);
            line(300,250,300,400);
            line(700,230,700,400);

            setcolor(BLUE);
            line(320,265,370,265);
            line(320,265,320,315);
            line(370,265,370,315);
            line(320,315,370,315);
            setfillstyle(7,GREEN);
            floodfill(330,266,BLUE);

            setcolor(BLUE);
            line(540,300,540,400);
            line(540,300,580,300);
            line(580,300,580,400);
            line(530,400,580,400);
            setfillstyle(8,MAGENTA);
            floodfill(550,301,BLUE);

            setcolor(BLUE);
            line(440,320,480,320);
            line(480,320,480,360);
            line(440,320,440,360);
            line(440,360,480,360);
            setfillstyle(5,YELLOW);
            floodfill(450,321,BLUE);

            setcolor(BLUE);
            line(620,320,660,320);
            line(620,320,620,360);
            line(660,320,660,360);
            line(620,360,660,360);
            setfillstyle(5,YELLOW);
            floodfill(630,321,BLUE);

            setcolor(BLUE);
            line(210,300,210,400);
            line(200,300,200,400);
            line(200,400,210,400);
            line(200,300,210,300);
            setfillstyle(1,BROWN);
            floodfill(205,305,BLUE);

            setcolor(BLUE);
            line(130,300,260,300);
            //line(200,100,200,300);
            line(200,100,130,300);
            line(200,100,260,300);
            setfillstyle(1,GREEN);
            floodfill(135,295,BLUE);
            line(830,270,840,400);
            line(850,270,850,400);
            ellipse(830,250,180,270,40,35);
            ellipse(810,210,90,280,40,47);
            ellipse(820,180,70,150,40,24);
            ellipse(860,180,20,160,40,30);
            ellipse(900,200,0,105,50,46);
            ellipse(910,220,230,90,50,46);
            ellipse(855,240,255,340,50,46);


            setcolor(BLUE);
            circle(720,70,40);
            setfillstyle(1,YELLOW);
            floodfill(725,73,BLUE);


            ellipse(80,95,360,180,30,20);
            ellipse(140,95,360,180,30,20);

            ellipse(200,95,360,180,30,20);
            ellipse(260,95,360,180,30,20);

            ellipse(480,90,360,180,30,20);
            ellipse(540,90,360,180,30,20);

            ellipse(600,90,360,180,30,20);

            ellipse(850,120,360,180,30,20);
            ellipse(910,120,360,180,30,20);
            ellipse(970,120,360,180,30,20);


            //ID

            line(10,20,10,40);
            line(10,20,20,40);
            line(20,40,20,20);
            line(25,40,30,20);
            line(30,20,40,40);
            line(27,30,35,30);
            line(45,20,45,40);
            line(45,20,55,30);
            line(65,20,65,40);
            line(65,20,55,30);
            line(75,20,75,40);
            line(75,20,85,20);
            line(75,40,85,40);
            line(75,30,80,30);
            circle(95,24,2);
            circle(95,38,2);
            line(105,20,105,40);
            line(105,20,115,30);
            line(125,20,125,40);
            line(125,20,115,30);
            line(135,20,135,40);
            ellipse(135,30,270,90,10,10);
            line(175,20,165,40);
            line(175,20,185,40);
            line(170,30,180,30);
            line(190,20,210,20);
            line(190,40,210,40);
            line(210,20,190,40);
            line(220,20,220,40);
            line(215,20,225,20);
            line(215,40,225,40);
            line(230,20,250,20);
            line(230,40,250,40);
            line(250,20,230,40);
            ellipse(265,30,180,360,10,10);
            line(255,30,255,20);
            line(275,30,275,20);
            line(285,20,285,40);
            line(285,40,295,40);
            line(305,20,305,40);
            line(305,30,325,30);
            line(325,20,325,40);
            line(340,20,330,40);
            line(340,20,350,40);
            line(335,30,345,30);
            circle(365,30,10);
            line(370,35,375,45);



            line(15,50,15,70);
            line(10,50,20,50);
            line(10,70,20,70);
            line(30,50,30,70);
            ellipse(30,60,270,90,10,10);
            circle(50,54,2);
            circle(50,66,2);
            ellipse(70,60,90,270,12,10);
            circle(70,52,3);
            ellipse(90,54,360,180,6,6);
            ellipse(84,66,180,360,7,6);
            line(84,53,90,63);
            line(100,50,100,70);
            line(100,50,110,50);
            line(100,70,110,70);
            line(100,60,105,60);
            ellipse(125,54,360,180,7,7);
            line(132,53,120,70);
            line(120,70,135,70);
            circle(118,56,2);
            circle(150,60,10);
            circle(175,60,10);
            line(190,50,190,70);
            line(190,50,185,52);
            line(185,70,195,70);
            circle(205,60,10);
            line(220,50,220,70);
            line(215,70,225,70);
            line(220,50,215,53);
            circle(235,55,6);
            line(238,60,230,70);
            line(248,50,248,70);
            line(248,50,243,53);
            line(243,70,253,70);
            ellipse(260,57,270,90,7,7);
            ellipse(260,68,270,90,5,5);
            circle(260,52,2);
            circle(278,55,6);
            line(281,60,275,70);

        }
        break;

        case 4:

        {
            cout<<"4th Drawing.Testy Emoji\n\n";

            setcolor(BLUE);
            circle(400,350,150);
            setfillstyle(1,YELLOW);
            floodfill(410,360,BLUE);

            ellipse(450,320,340,180,30,50);
            ellipse(350,320,360,210,30,50);

            ellipse(400,400,170,10,70,50);

            setcolor(BLUE);
            ellipse(360,445,145,355,30,50);
            setfillstyle(1,RED);
            floodfill(340,430,BLUE);

        }
        break;

        case 5:

        {
            cout<<"5th Drawing.The City River Scenario  \n\n";

            // Home
            setcolor(WHITE);
            line(0,700,1080,700);
            line(0,540,1080,540);
            line(0,540,0,700);
            line(1080,540,1080,700);
            setfillstyle(1,LIGHTBLUE);
            floodfill(5,545,WHITE);

            setcolor(DARKGRAY);
            line(0,530,1080,530);
            line(0,0,1080,0);
            line(0,0,0,530);
            line(1080,0,1080,530);
            setfillstyle(1,LIGHTCYAN);
            floodfill(5,5,DARKGRAY);

            setcolor(DARKGRAY);
            line(0,300,0,530);
            line(200,300,200,530);
            line(0,300,200,300);
            line(0,530,200,530);
            setfillstyle(1,BROWN);
            floodfill(5,305,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(20,320,80,360);
            setfillstyle(1,LIGHTGRAY);
            floodfill(22,321,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(110,320,170,360);
            setfillstyle(1,LIGHTGRAY);
            floodfill(112,321,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(110,380,170,420);
            setfillstyle(1,LIGHTGRAY);
            floodfill(112,381,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(110,440,170,480);
            setfillstyle(1,LIGHTGRAY);
            floodfill(112,441,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(20,380,80,420);
            setfillstyle(1,LIGHTGRAY);
            floodfill(22,381,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(20,440,80,480);
            setfillstyle(1,LIGHTGRAY);
            floodfill(22,441,DARKGRAY);

            setcolor(DARKGRAY);
            line(200,420,1080,420);
            line(200,420,200,530);
            line(1080,420,1080,530);
            setfillstyle(1,LIGHTGRAY);
            floodfill(202,421,DARKGRAY);

            // 2nd Building

            setcolor(WHITE);
            line(300,350,300,530);
            line(500,350,500,530);
            line(300,350,500,350);
            line(300,530,500,530);
            setfillstyle(1,DARKGRAY);
            floodfill(302,355,WHITE);

            setcolor(WHITE);
            rectangle(320,380,360,500);
            setfillstyle(1,LIGHTRED);
            floodfill(322,385,WHITE);

            setcolor(WHITE);
            rectangle(390,380,450,410);
            setfillstyle(1,LIGHTRED);
            floodfill(392,385,WHITE);


            setcolor(WHITE);
            rectangle(390,420,450,460);
            setfillstyle(1,LIGHTRED);
            floodfill(392,425,WHITE);

            setcolor(WHITE);
            rectangle(390,470,450,500);
            setfillstyle(1,LIGHTRED);
            floodfill(392,475,WHITE);

            // 3rd Building

            setcolor(CYAN);
            line(600,300,600,530);
            line(800,300,800,530);
            line(600,300,800,300);
            line(600,530,800,530);
            setfillstyle(1,CYAN);
            floodfill(602,305,CYAN);

            setcolor(WHITE);
            rectangle(610,320,660,350); // Left
            setfillstyle(1,LIGHTGREEN);
            floodfill(612,325,WHITE);

            setcolor(WHITE);
            rectangle(610,370,660,400); // Left
            setfillstyle(1,LIGHTGREEN);
            floodfill(612,375,WHITE);

            setcolor(WHITE);
            rectangle(610,420,660,450); // Left
            setfillstyle(1,LIGHTGREEN);
            floodfill(612,425,WHITE);

            setcolor(WHITE);
            rectangle(670,320,720,350); // Middle
            setfillstyle(1,LIGHTGREEN);
            floodfill(672,325,WHITE);

            setcolor(WHITE);
            rectangle(670,370,720,400); // Middle
            setfillstyle(1,LIGHTGREEN);
            floodfill(672,375,WHITE);

            setcolor(WHITE);
            rectangle(670,420,720,450); // Middle
            setfillstyle(1,LIGHTGREEN);
            floodfill(672,425,WHITE);

            setcolor(WHITE);
            rectangle(730,320,780,350); // Right
            setfillstyle(1,LIGHTGREEN);
            floodfill(732,325,WHITE);

            setcolor(WHITE);
            rectangle(730,370,780,400); // Right
            setfillstyle(1,LIGHTGREEN);
            floodfill(732,375,WHITE);

            setcolor(WHITE);
            rectangle(730,420,780,450); // Right
            setfillstyle(1,LIGHTGREEN);
            floodfill(732,425,WHITE);

            // 4Th Building

            setcolor(LIGHTRED);
            line(880,250,880,530);
            line(880,250,1000,250);
            line(1000,250,1000,530);
            line(880,530,1000,530);
            setfillstyle(1,LIGHTRED);
            floodfill(882,255,LIGHTRED);

            setcolor(WHITE);
            rectangle(900,270,980,310);
            setfillstyle(3,BLUE);
            floodfill(901,275,WHITE);

            setcolor(WHITE);
            rectangle(900,330,980,370);
            setfillstyle(3,BLUE);
            floodfill(901,335,WHITE);

            setcolor(WHITE);
            rectangle(900,390,980,430);
            setfillstyle(3,BLUE);
            floodfill(901,395,WHITE);

            setcolor(WHITE);
            ellipse(980,120,0,360,35,20);
            setfillstyle(1,YELLOW);
            floodfill(981,125,WHITE);

            setcolor(WHITE);
            line(235,480,235,530);
            line(235,480,255,480);
            line(255,480,255,530);
            line(235,530,255,530);
            setfillstyle(3,LIGHTGREEN);
            floodfill(236,485,WHITE);

            setcolor(GREEN);
            line(215,480,245,430);
            line(245,430,275,480);
            line(215,480,275,480);
            setfillstyle(1,GREEN);
            floodfill(246,435,GREEN);

            setcolor(GREEN);
            line(215,450,275,450);
            line(245,350,215,450);
            line(245,350,275,450);
            setfillstyle(1,GREEN);
            floodfill(246,355,GREEN);

            setcolor(WHITE);
            line(540,450,540,530);
            line(560,450,560,530);
            line(540,450,560,450);
            line(540,530,560,530);
            setfillstyle(3,LIGHTGREEN);
            floodfill(546,455,WHITE);

            setcolor(GREEN);
            line(520,450,580,450);
            line(550,400,520,450);
            line(550,400,580,450);
            setfillstyle(1,GREEN);
            floodfill(551,405,GREEN);

            setcolor(GREEN);
            line(520,420,580,420);
            line(550,320,520,420);
            line(550,320,580,420);
            setfillstyle(1,GREEN);
            floodfill(551,325,GREEN);

            setcolor(GREEN);
            line(350,350,450,350);
            line(400,250,350,350);
            line(400,250,450,350);
            setfillstyle(1,GREEN);
            floodfill(401,255,GREEN);

            setcolor(WHITE);
            line(1030,450,1030,530);
            line(1050,450,1050,530);
            line(1030,450,1050,450);
            line(1030,530,1050,530);
            setfillstyle(3,LIGHTGREEN);
            floodfill(1036,455,WHITE);

            setcolor(GREEN);
            line(1010,450,1080,450);
            line(1045,380,1010,450);
            line(1045,380,1080,450);
            setfillstyle(1,GREEN);
            floodfill(1046,385,GREEN);

            setcolor(GREEN);
            line(1010,400,1080,400);
            line(1045,300,1010,400);
            line(1045,300,1080,400);
            setfillstyle(1,GREEN);
            floodfill(1046,305,GREEN);

            // Boat

            setcolor(BLACK);
            line(320,600,680,600);
            line(380,650,620,650);
            line(320,600,380,650);
            line(680,600,620,650);
            setfillstyle(1,BLACK);
            floodfill(382,605,BLACK);

            setcolor(WHITE);
            line(400,560,600,560);
            line(360,600,640,600);
            line(400,560,360,600);
            line(600,560,640,600);
            setfillstyle(1,YELLOW);
            floodfill(402,565,WHITE);

            setcolor(WHITE);
            rectangle(400,565,450,595);
            setfillstyle(1,DARKGRAY);
            floodfill(402,566,WHITE);


            setcolor(WHITE);
            rectangle(470,565,520,595);
            setfillstyle(1,DARKGRAY);
            floodfill(472,566,WHITE);


            setcolor(WHITE);
            rectangle(540,565,590,595);
            setfillstyle(1,DARKGRAY);
            floodfill(542,566,WHITE);

            setcolor(GREEN);
            line(420,560,580,560);
            line(500,530,420,560);
            line(500,530,580,560);
            setfillstyle(1,RED);
            floodfill(502,532,GREEN);

            ellipse(500,120,0,90,30,30);
            ellipse(560,120,90,180,30,30);
            ellipse(670,120,0,90,30,30);
            ellipse(730,120,90,180,30,30);
            ellipse(300,220,0,90,30,30);
            ellipse(360,220,90,180,30,30);
            ellipse(100,220,0,90,30,30);
            ellipse(160,220,90,180,30,30);
            ellipse(500,220,0,90,30,30);
            ellipse(560,220,90,180,30,30);
            ellipse(750,220,0,90,30,30);
            ellipse(810,220,90,180,30,30);


            // ID
            line(10,20,10,40);
            line(10,20,20,40);
            line(20,40,20,20);
            line(25,40,30,20);
            line(30,20,40,40);
            line(27,30,35,30);
            line(45,20,45,40);
            line(45,20,55,30);
            line(65,20,65,40);
            line(65,20,55,30);
            line(75,20,75,40);
            line(75,20,85,20);
            line(75,40,85,40);
            line(75,30,80,30);
            circle(95,24,2);
            circle(95,38,2);
            line(105,20,105,40);
            line(105,20,115,30);
            line(125,20,125,40);
            line(125,20,115,30);
            line(135,20,135,40);
            ellipse(135,30,270,90,10,10);
            line(175,20,165,40);
            line(175,20,185,40);
            line(170,30,180,30);
            line(190,20,210,20);
            line(190,40,210,40);
            line(210,20,190,40);
            line(220,20,220,40);
            line(215,20,225,20);
            line(215,40,225,40);
            line(230,20,250,20);
            line(230,40,250,40);
            line(250,20,230,40);
            ellipse(265,30,180,360,10,10);
            line(255,30,255,20);
            line(275,30,275,20);
            line(285,20,285,40);
            line(285,40,295,40);
            line(305,20,305,40);
            line(305,30,325,30);
            line(325,20,325,40);
            line(340,20,330,40);
            line(340,20,350,40);
            line(335,30,345,30);
            circle(365,30,10);
            line(370,35,375,45);
            line(15,50,15,70);
            line(10,50,20,50);
            line(10,70,20,70);
            line(30,50,30,70);
            ellipse(30,60,270,90,10,10);
            circle(50,54,2);
            circle(50,66,2);
            ellipse(70,60,90,270,12,10);
            circle(70,52,3);
            ellipse(90,54,360,180,6,6);
            ellipse(84,66,180,360,7,6);
            line(84,53,90,63);
            line(100,50,100,70);
            line(100,50,110,50);
            line(100,70,110,70);
            line(100,60,105,60);
            ellipse(125,54,360,180,7,7);
            line(132,53,120,70);
            line(120,70,135,70);
            circle(118,56,2);
            circle(150,60,10);
            circle(175,60,10);
            line(190,50,190,70);
            line(190,50,185,52);
            line(185,70,195,70);
            circle(205,60,10);
            line(220,50,220,70);
            line(215,70,225,70);
            line(220,50,215,53);
            circle(235,55,6);
            line(238,60,230,70);
            line(248,50,248,70);
            line(248,50,243,53);
            line(243,70,253,70);
            ellipse(260,57,270,90,7,7);
            ellipse(260,68,270,90,5,5);
            circle(260,52,2);
            circle(278,55,6);
            line(281,60,275,70);




        }
        break;

        case 6:


        {
            cout<<"6th Drawing.Cycle Animation\n\n";


            for (x = 0; x < 1000; x++)

            {

                //body of cycle
                line(50  + x, 405, 100 + x, 405);
                line(75  + x, 375, 125 + x, 375);
                line(50  + x, 405,  75 + x, 375);
                line(100 + x, 405, 100 + x, 345);
                line(150 + x, 405, 100 + x, 345);
                line(75  + x, 345,  75 + x, 370);
                line(70  + x, 370,  80 + x, 370);
                line(80  + x, 345, 100 + x, 345);

                //Wheel of circle
                circle(150 + x, 405, 30);
                circle( 50 + x, 405, 30);

                line(0, 436, getmaxx(), 436);
                rectangle(getmaxx()-x, 1000, 1050-x, 431);
                delay(3);
                cleardevice();
                // ID
                line(10,20,10,40);
                line(10,20,20,40);
                line(20,40,20,20);
                line(25,40,30,20);
                line(30,20,40,40);
                line(27,30,35,30);
                line(45,20,45,40);
                line(45,20,55,30);
                line(65,20,65,40);
                line(65,20,55,30);
                line(75,20,75,40);
                line(75,20,85,20);
                line(75,40,85,40);
                line(75,30,80,30);
                circle(95,24,2);
                circle(95,38,2);
                line(105,20,105,40);
                line(105,20,115,30);
                line(125,20,125,40);
                line(125,20,115,30);
                line(135,20,135,40);
                ellipse(135,30,270,90,10,10);
                line(175,20,165,40);
                line(175,20,185,40);
                line(170,30,180,30);
                line(190,20,210,20);
                line(190,40,210,40);
                line(210,20,190,40);
                line(220,20,220,40);
                line(215,20,225,20);
                line(215,40,225,40);
                line(230,20,250,20);
                line(230,40,250,40);
                line(250,20,230,40);
                ellipse(265,30,180,360,10,10);
                line(255,30,255,20);
                line(275,30,275,20);
                line(285,20,285,40);
                line(285,40,295,40);
                line(305,20,305,40);
                line(305,30,325,30);
                line(325,20,325,40);
                line(340,20,330,40);
                line(340,20,350,40);
                line(335,30,345,30);
                circle(365,30,10);
                line(370,35,375,45);
                line(15,50,15,70);
                line(10,50,20,50);
                line(10,70,20,70);
                line(30,50,30,70);
                ellipse(30,60,270,90,10,10);
                circle(50,54,2);
                circle(50,66,2);
                ellipse(70,60,90,270,12,10);
                circle(70,52,3);
                ellipse(90,54,360,180,6,6);
                ellipse(84,66,180,360,7,6);
                line(84,53,90,63);
                line(100,50,100,70);
                line(100,50,110,50);
                line(100,70,110,70);
                line(100,60,105,60);
                ellipse(125,54,360,180,7,7);
                line(132,53,120,70);
                line(120,70,135,70);
                circle(118,56,2);
                circle(150,60,10);
                circle(175,60,10);
                line(190,50,190,70);
                line(190,50,185,52);
                line(185,70,195,70);
                circle(205,60,10);
                line(220,50,220,70);
                line(215,70,225,70);
                line(220,50,215,53);
                circle(235,55,6);
                line(238,60,230,70);
                line(248,50,248,70);
                line(248,50,243,53);
                line(243,70,253,70);
                ellipse(260,57,270,90,7,7);
                ellipse(260,68,270,90,5,5);
                circle(260,52,2);
                circle(278,55,6);
                line(281,60,275,70);
            }

        }
        break;

        default:
            cout<<"Can't Find Your Choice.Please try again & By Your Right Choice \n\n";
        }
    }
    return 0;
}


