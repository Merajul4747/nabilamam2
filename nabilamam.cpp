#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

void Menu() {
    cleardevice();

    setbkcolor(0);
    setcolor(15);
    settextstyle(6, HORIZ_DIR, 2);

    outtextxy(200,10,"MY MENU");
    outtextxy(150, 50, "1. My Name Draw.");
    outtextxy(150, 100, "2. Emoji.");
    outtextxy(150, 150, "3. Doraemon.");
    outtextxy(150, 200, "4. My House.");
    outtextxy(150, 250, "5. Draw custom circle.");
    outtextxy(150, 300, "6. Flag.");
    outtextxy(150, 350, "7. Exit.");
}

void my_name_draw(int x, int y) {

    cleardevice();

    setbkcolor(0);
    setcolor(15);
    outtext("MY name :");
    line(x, y, x, y + 50);
    line(x, y, x + 15, y + 25);
    line(x + 30, y, x + 15, y + 25);
    line(x + 30, y, x + 30, y + 50);

    x += 40;


    line(x, y + 50, x + 15, y);
    line(x + 30, y + 50, x + 15, y);
    line(x + 7, y + 25, x + 23, y + 25);


    x += 40;


    line(x, y, x, y + 50);
    line(x, y, x + 20, y);
    line(x + 20, y, x + 20, y + 25);
    line(x, y + 25, x + 20, y + 25);
    line(x, y + 25, x + 30, y + 50);


    x += 40;


    line(x, y + 50, x + 15, y);
    line(x + 30, y + 50, x + 15, y);
    line(x + 7, y + 25, x + 23, y + 25);


    x += 40;

    line(x + 20, y, x + 20, y + 40);
    line(x + 20, y + 40, x + 10, y + 50);
    line(x + 10, y + 50, x, y + 40);


    x += 40;

    line(x, y, x, y + 50);
    line(x, y + 50, x + 20, y + 50);
    line(x + 20, y + 50, x + 20, y);

    x += 40;

    line(x, y, x, y + 50);
    line(x, y + 50, x + 30, y + 50);

    getch();
}
void emoji()
{
     cleardevice();
     setbkcolor(0);
     setcolor(15);

     setcolor(13);
     circle(300, 200, 100);
    setfillstyle(SOLID_FILL, 13);
    floodfill(300, 200, 13);

    setcolor(0);
    setfillstyle(SOLID_FILL, 0);

    circle(330, 160, 15);
    setfillstyle(SOLID_FILL, 0);
    floodfill(330, 160, 0);

    circle(265, 160, 15);
    setfillstyle(SOLID_FILL, 0);
    floodfill(265, 160, 0);
    setcolor(15);
    ellipse(300, 220, 205, 335, 50, 25);
    ellipse(300, 220, 205, 335, 50, 26);
    ellipse(300, 220, 205, 335, 50, 27);
    ellipse(300, 220, 205, 335, 50, 28);
    ellipse(300, 220, 205, 335, 50, 29);
    ellipse(300, 220, 205, 335, 50, 30);

    setcolor(0);
    setfillstyle(SOLID_FILL, 0);
    line(290, 203, 306, 203);
    line(290, 203, 298, 216);
    line(306, 203, 298, 216);
    floodfill(300, 205, 0);


    getch();
}
void doraemon(){

    cleardevice();
    setbkcolor(0);
    setcolor(15);

	setcolor(15);
	ellipse(200,450,150,390,50,16);
	line(157,441,243,441);
	ellipse(252,448,246,389,50,18);
	line(243,441,297,441);
	ellipse(249,441,90,180,10,15);


	setcolor(12);
	ellipse(155,410,80,280,8,8);

	line(157,441,157,370);
	line(297,441,297,350);

	setcolor(15);
	circle(147,357,16);
	ellipse(137,342,300,330,58,19);
	ellipse(174,348,110,170,29,49);


	setcolor(15);
	circle(327,275,16);
	ellipse(265,260,299,340,74,90);
	ellipse(323,285,110,170,25,19);


	setcolor(3);
	line(163,302,285,302);
	line(163,298,285,298);
	ellipse(163,301,90,270,3,3);
	ellipse(285,300,280,80,4,3);

	setcolor(15);
	ellipse(243,334,143,40,56,48);
	ellipse(244,346,163,15,30,24);
	line(214,340,273,340);


	setcolor(14);
	circle(244,310,8);
	line(238,306,251,306);
	line(236,309,251,309);

	ellipse(220,237,0,180,87,60);
	ellipse(180,237,180,250,47,65);
	ellipse(268,237,290,360,40,65);

	setcolor(15);
	ellipse(263,277,15,90,45,60);
	ellipse(245,210,0,360,19,23);
	ellipse(207,210,0,360,19,23);
	ellipse(202,237,190,243,47,69);
	ellipse(187,254,90,170,32,35);
	circle(216,217,5);
	circle(237,218,5);

	setcolor(10);
	circle(227,236,8);
	ellipse(230,262,180,360,45,30);
	ellipse(232,263,10,190,47,6);

	setcolor(3);
	ellipse(275,253,290,110,10,8);

	line(227,244,227,257);
	line(245,238,269,234);
	line(245,244,269,242);
	line(245,250,269,252);

	line(185,236,210,238);
	line(185,244,210,244);
	line(185,252,210,250);

	outtextxy(150,120,"I'm DORAEMON");

	getch();
}
void draw_custom_circle()
{
    cleardevice();
    setbkcolor(0);
    setcolor(15);

    int x, y, X, Y, circle_radius;
    cout << "Enter the values for center X, center Y, and radius: ";
    cin >> x >> y >> circle_radius;

    X = 0;
    Y = circle_radius;

    int decision_param = 1 - circle_radius;

    while (X < Y)
    {
        if (decision_param >= 0)
        {
            X++;
            Y--;
            decision_param = decision_param + 2 * X + 1 - 2 * Y;
        }
        else
        {
            X++;
            decision_param = decision_param + 2 * X + 1;
        }

        putpixel(X + x, Y + y, LIGHTCYAN);
        putpixel(Y + y, X + x, LIGHTCYAN);
        putpixel(x - X, y - Y, LIGHTCYAN);
        putpixel(y - Y, x - X, LIGHTCYAN);
        putpixel(x + X, y - Y, LIGHTCYAN);
        putpixel(y + Y, x - X, LIGHTCYAN);
        putpixel(x - X, y + Y, LIGHTCYAN);
        putpixel(y - Y, x + X, LIGHTCYAN);
    }

    cout << "Program Done!" << endl;

    getch();
}


void flag()
{
    cleardevice();
    setbkcolor(0);
    setcolor(15);
    setcolor(GREEN);
    rectangle(150,100,320,200);
    setfillstyle(1, GREEN);
    floodfill(151,101,GREEN);


    setcolor(15);
    rectangle(140,90,150,350);
    setfillstyle(1, 15);
    floodfill(141,91,15);


    setcolor(RED);
    circle(230,150,30);
    setfillstyle(1, RED);
    floodfill(231,151,RED);

    getch();
}

void my_house()
{
    cleardevice();
    setbkcolor(0);
    setcolor(15);

    setcolor(BROWN);
	int arr[10]={200,200,350,200,410,300,260,300,200,200};
	int ar[8]={135,300,135,380,265,380,265,300};
	int a[6]={265,380,400,350,400,300};
	drawpoly(5,arr);
	drawpoly(3,a);
	drawpoly(4,ar);
	rectangle(175,380,215,320);
	line(200,200,130,305);
	line(202,202,135,303);
	line(0,340,135,340);
	line(400,340,700,340);
	circle(500,100,40);


	setfillstyle(1,13);
	floodfill(200,201,6);
	setfillstyle(6,5);
	floodfill(300,250,6);
	setfillstyle(1,14);
	floodfill(200,210,6);
	setfillstyle(1,14);
	floodfill(300,310,6);
	setfillstyle(9,12);
	floodfill(200,330,6);
	setfillstyle(1,10);
	floodfill(200,400,6);
	setfillstyle(1,11);
	floodfill(100,100,6);
	setfillstyle(1,14);
	floodfill(500,100,6);

    getch();
}
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch (choice)
        {
        case '1':
            outtextxy(200, 400, "Your choice : option 1!");
            delay(1000);
            my_name_draw(50,100);
            break;
        case '2':
            outtextxy(200, 400, "Your choice : option 2!");
            delay(1000);
            emoji();
            break;
        case '3':
            outtextxy(200, 400, "Your choice : option 3!");
            delay(1000);
            doraemon();
            break;
        case '4':
            outtextxy(200, 400, "Your choice : option 4!");
            delay(1000);
            my_house();
            break;
        case '5':
            outtextxy(200, 400, "Your choice : option 5!");
            delay(1000);
            draw_custom_circle();
            break;
        case '6':
            outtextxy(200, 400, "Your choice : option 6!");
            delay(1000);
            flag();
            break;
        case '7':
            closegraph();
            outtextxy(200, 400, "Exit program");
            delay(1000);
            exit(0);
            break;
        default:
            outtextxy(200, 400, "Invalid Number.");
            delay(1000);
            break;
        }

        delay(1000);
        Menu();
    }

    getch();
    closegraph();

    return 0;
}

