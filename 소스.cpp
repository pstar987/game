#include <bangtal.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

SceneID scene1, scene0;
ObjectID piece[7], problem, start, cake[7];
TimerID timer1;

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == start) {
		enterScene(scene1);
	}
	srand(time(NULL));
	int n, u1, u2, u3, u4, u5, u6, u7;
	for (n = 0; n < 1; n++) {
		u1 = rand() % 7;
		u2 = rand() % 7;
		u3 = rand() % 7;
		u4 = rand() % 7;
		u5 = rand() % 7;
		u6 = rand() % 7;
		u7 = rand() % 7;
		if (u1 == u2 || u1 == u3 || u1 == u4 || u1 == u5 || u1 == u6 || u1 == u7 || u2 == u3 || u2 == u4 || u2 == u5 || u2 == u6 || u2 == u7
			|| u3 == u4 || u3 == u5 || u3 == u6 || u3 == u7 || u4 == u5 || u4 == u6 || u4 == u7 || u5 == u6 || u5 == u7 || u6 == u7) {
			n--;
		}
	}

	if (object==cake[u1]) {
		hideObject(piece[u1]);
		if (object == cake[u2]) {
			hideObject(piece[u2]);
			if (object == cake[u3]) {
				hideObject(piece[u3]); 
				if(object == cake[u4]){
					hideObject(piece[u4]);
					if (object == cake[u5]) {
						hideObject(piece[u5]);
						if (object == cake[u6]) {
							hideObject(piece[u6]);
							if (object == cake[u7]) {
								hideObject(piece[u7]);
							}
						}
					}
				}
			}
		}	
	}
	
}





int main() {
	int a, i1, j1, k1, i2, j2, k2, i3, j3, k3;
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
		j3 = rand() % 7;
		k3 = rand() % 7;
	
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
		l8 = rand() % (o2 + 1 - o1) + o1;
		l9 = rand() % (o2 + 1 - o1) + o1;
	
	}



	printf("%d", t1);
	printf("\n");
	printf("%d", t2);
	printf("\n");
	printf("%d", t3);
	printf("\n");



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

	locateObject(piece[j3], scene1, t2, l8);
	showObject(piece[j3]);

	locateObject(piece[k3], scene1, t3, l9);
	showObject(piece[k3]);

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


	setMouseCallback(mouseCallback);
	startGame(scene1);
}