#include <bangtal.h>
#define _CRT_OBSOLETE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

SceneID scene1, scene0;
ObjectID piece[7], problem, start, cake[7], end, next, restart, finish;
TimerID timer1;

int n, u1, u2, u3, u4, u5, u6, u7;
int flag = 0;

void endGame(bool success) {
	if (success) {
		showMessage("꼴찌 축하");
		showObject(end);

	}
	else {
		showMessage("몇 등??");
		showObject(end);
	}

	stopTimer(timer1);
}


void startGame() {
	srand(time(NULL));
	
	for (n = 0; n < 1; n++) {
		u1 = (rand() % 6)+1;
		u2 = (rand() % 6) + 1;
		u3 = (rand() % 6) + 1;
		u4 = (rand() % 6) + 1;
		u5 = (rand() % 6) + 1;
		u6 = (rand() % 6) + 1;
		u7 = (rand() % 6) + 1;
		
	}
	hideObject(next);
	hideObject(end);
	hideObject(restart);
	setTimer(timer1, 20.0f);
	startTimer(timer1);
}



void timerCallback(TimerID timer) {
	if (timer == timer1) {
		endGame(true);

	}

}



void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == start) {
		enterScene(scene1);
		showMessage("화살표를 누르고 시작하세요");
	}

	else if (object == next) {
		startGame();
		
	}
	else if (object == end) {
		endGame();
	}
	else if (object == finish) {
		endGame(false);
	}

	if (object == cake[u1]) {
		hideObject(piece[u1]);
		u1 = u2;
		hideObject(piece[u2]);
		u2 = u3;
		hideObject(piece[u3]);
		u3 = u4;
		hideObject(piece[u4]);
		u4 = u5;
		hideObject(piece[u5]);
		u5 = u6;
		hideObject(piece[u6]);
		u6 = u7;
		hideObject(piece[u7]);
	}
	else if (object == cake[0]) {
		hideObject(piece[0]);
		_sleep(2000);
	}
	else if (object == cake[1]) {
		hideObject(piece[1]);
		_sleep(2000);
	}
	else if (object == cake[2]) {
		hideObject(piece[2]);
		_sleep(2000);
	}
	else if (object == cake[3]) {
		hideObject(piece[3]);
		_sleep(2000);
	}
	else if (object == cake[4]) {
		hideObject(piece[4]);
		_sleep(2000);
	}
	else if (object == cake[5]) {
		hideObject(piece[5]);
		_sleep(2000);
	}
	else if (object == cake[6]) {
		hideObject(piece[6]);
		_sleep(2000);
	}


	

	


	
}






int main() {
	int a, i1, j1, k1, i2, j2, k2, i3;
	int a1 = 55, a2 = 99, b1 = 265, b2 = 319, c1 = 475, c2 = 529;
	


	srand(time(NULL));
	for (a = 0; a < 1; a++) {

		i1 = rand() % 7;
		j1 = rand() % 7;
		k1 = rand() % 7;
		i2 = rand() % 7;
		j2 = rand() % 7;
		k2 = rand() % 7;
		i3 = rand() % 7;
		if (i1 == i2 || i1 == i3 || i1 == j1 || i1 == j2 || i1 == k1 || i1 == k2 || i2 == j1 || i2 == j2 || i2 == k1 || i2 == k2 || i2 == i3
			|| i3 == j1 || i3 == j2 || i3 == k1 || i3 == k2 || j1 == j2 || j1 == k1 || j1 == k2 || j2 == k1 || j2 == k2 || k1 == k2) {
			a--;
		}
	
	}

	int b, t1, t2, t3;

	srand(time(NULL));
	for (b = 0; b < 1; b++) {

		t1 = rand() % (a2 + 1 - a1) + a1;
		t2 = rand() % (b2 + 1 - b1) + b1;
		t3 = rand() % (c2 + 1 - c1) + c1;
		if (t1 == t2 || t2 == t3 || t3 == t1) {
			b--;
		}

	}
	
	int o1 = 62, o2 = 517;
	int c, l1, l2, l3, l4, l5, l6, l7, l8, l9;

	srand(time(NULL));
	for (c = 0; c < 1; c++) {

		l1 = rand() % (o2 + 1 - o1) + o1;
		l2 = rand() % (o2 + 1 - o1) + o1;
		l3 = rand() % (o2 + 1 - o1) + o1;
		l4 = rand() % (o2 + 1 - o1) + o1;
		l5 = rand() % (o2 + 1 - o1) + o1;
		l6 = rand() % (o2 + 1 - o1) + o1;
		l7 = rand() % (o2 + 1 - o1) + o1;
		
	
	}


	scene0 = createScene("gogo", "배경.png");

	scene1 = createScene("테트리스light", "그림3.png");


	start = createObject("start.png");
	locateObject(start, scene0, 100, 50);
	showObject(start);


	piece[0] = createObject("ㄱ.png");
	scaleObject(piece[0], 0.63f);
	
	piece[1] = createObject("역ㄴ.png");
	scaleObject(piece[1], 0.65f);
	
	piece[2] = createObject("ㅁ.png");
	scaleObject(piece[2], 0.63f);

	piece[3] = createObject("ㄹ.png");
	scaleObject(piece[3], 0.63f);

	piece[4] = createObject("역ㄹ.png");
	scaleObject(piece[4], 0.63f);

	piece[5] = createObject("ㅜ.png");
	scaleObject(piece[5], 0.65f);

	piece[6] = createObject("ㅡㅡ.png");
	scaleObject(piece[6], 0.63f);


	locateObject(piece[i1], scene1, t1, l1);
	showObject(piece[i1]);

	locateObject(piece[j1], scene1, t2, l2);
	showObject(piece[j1]);

	locateObject(piece[k1], scene1, t3, l3);
	showObject(piece[k1]);

	locateObject(piece[i2], scene1, t1, l4);
	showObject(piece[i2]);

	locateObject(piece[j2], scene1, t2, l5);
	showObject(piece[j2]);

	locateObject(piece[k2], scene1, t3, l6);
	showObject(piece[k2]);

	locateObject(piece[i3], scene1, t1, l7);
	showObject(piece[i3]);



	cake[0] = createObject("ㄱ.png");
	scaleObject(cake[0], 0.63f);

	cake[1] = createObject("역ㄴ.png");
	scaleObject(cake[1], 0.65f);

	cake[2] = createObject("ㅁ.png");
	scaleObject(cake[2], 0.63f);

	cake[3] = createObject("ㄹ.png");
	scaleObject(cake[3], 0.63f);

	cake[4] = createObject("역ㄹ.png");
	scaleObject(cake[4], 0.63f);

	cake[5] = createObject("ㅜ.png");
	scaleObject(cake[5], 0.65f);

	cake[6] = createObject("ㅡㅡ.png");
	scaleObject(cake[6], 0.63f);


	locateObject(cake[0], scene1, 1033, 180);
	showObject(cake[0]);

	locateObject(cake[1], scene1, 805, 175);
	showObject(cake[1]);

	locateObject(cake[2], scene1, 1050, 410);
	showObject(cake[2]);

	locateObject(cake[3], scene1, 805, 290);
	showObject(cake[3]);

	locateObject(cake[4], scene1, 806, 408);
	showObject(cake[4]);

	locateObject(cake[5], scene1, 1033, 290);
	showObject(cake[5]);

	locateObject(cake[6], scene1, 905, 81);
	showObject(cake[6]);


	end = createObject("end.png");
	locateObject(end, scene1, 550, 100);
	showObject(end);

	next = createObject("play.png");
	locateObject(next, scene1, 565, 150);
	showObject(next);

	finish = createObject("finish.png");
	locateObject(finish, scene1, 1050, 600);
	showObject(finish);
	scaleObject(finish, 0.3f);



	timer1 = createTimer(20.0f);
	showTimer(timer1);




	setMouseCallback(mouseCallback);
	startGame(scene0);
}