//
//#include<stdc++.h>
//#include<gl/glut.h>
//
//double dx=0, dy=0, oldx, oldy;
//int w = 500, h = 500;
//int mode=0;
//double dxt=0, dyt=0, dxc=0, dyc=0, anglezt=0,anglezc=0;
//
//// 初始化参数
//void init() {
//	glClearColor(0.1, 0.1, 0.4, 0.0);
//	//glShadeModel(GL_SMOOTH);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(-1, 1, -1, 1);
//
//}
//
//// 绘图回调函数
//void display_tri() {
//
//	// 清除之前帧数据
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//	// 绘制三角形
//	glBegin(GL_TRIANGLES);
//	glColor3f(1, 0, 0);
//	glVertex3f(0.2f, 0.8f, 0.0f);
//	glColor3f(0, 1, 0);
//	glVertex3f(0.1f, 0.2f, 0.0f);
//	glColor3f(0, 0, 1);
//	glVertex3f(0.6f, 0.2f, 0.0f);
//	glEnd();
//	// 执行绘图命令
//	glFlush();
//}
//
//void display_cir() {
//	int n = 1000;
//	GLfloat r = 0.1;
//	GLfloat pi = acos(-1);
//
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//
//	if (mode == 1) {
//		dxt = dx;
//		dyt = dy;
//	}
//	if (mode == 2) {
//		dxc = dx;
//		dyc = dy;
//	}
//	if (mode == 3) {
//		glPushMatrix();
//		glLoadIdentity();
//		glRotatef(anglezt, 0, 0, 1);
//	}
//	// 绘制三角形
//	glBegin(GL_TRIANGLES);
//	glColor3f(1, 0, 0);
//	glVertex2f(-0.2+(dxt-250)/250, 0+(dyt-250)/250);
//	glColor3f(0, 1, 0);
//	glVertex2f(0+(dxt-250)/250, 0.4+(dyt-250)/250);
//	glColor3f(0, 0, 1);
//	glVertex2f(0.2+(dxt-250)/250, 0+(dyt-250)/250);
//	glEnd();
//	if (mode == 3) {
//		glPopMatrix();
//	}
//
//
//	//绘制圆形
//	
//	if (mode == 4) {
//		glPushMatrix();
//		glLoadIdentity();
//		glRotatef(anglezc, 0, 0, 1);
//	}
//	glBegin(GL_POLYGON);
//	glColor3f(0.5, 0.5, 0.3);
//	for (int i = 0; i < n; i++) {
//		if (i == 500) {
//			glColor3f(0.1, 0.9, 0.5);
//		}
//		glVertex2f(r * cos(2 * pi / n * i)+0+(dxc-250)/250, r * sin(2 * pi / n * i)+0+(dyc-250)/250);
//	}
//	glEnd();
//	if (mode == 4) {
//		glPopMatrix();
//	}
//	glFlush();
//	
//}
//
//// 窗口大小变化回调函数
//void reshape(int w, int h) {
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(-1, 1, -1, 1);
//	glViewport(0, 0, w, h);
//
//	glMatrixMode(GL_MODELVIEW);
//}
//
//void mymouse(int x, int y, int button, int state)
//{
//	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON) {
//		oldx = x;
//		oldy = h-y;
//	}
//}
//
//void mymotion(int x, int y)
//{
//	y = h - y;
//	dx = x - oldx;
//	dy = y - oldy;
//	GLfloat deltax = x-oldx;
//	GLfloat deltay = y-oldy;
//	anglezt += (deltax + deltay) / h;
//	anglezc += (deltax + deltay) / h;
//
//
//	glutPostRedisplay();
//}
//
//void mykeyboard(unsigned char key, int x, int y)
//{
//	if (key == '1') {
//		mode = 1;
//	}
//	if (key == '2'){
//		mode = 2;
//	}
//	if (key == '3') {
//		mode = 3;
//	}
//	if (key == '4') {
//		mode = 4;
//	}
//	
//}
//
//int main(int argc, char** argv) {
//	std::cout << "输入1移动三角形\n输入2移动圆形\n输入3旋转三角形\n输入4旋转圆形\n" << std::endl;
//	// 初始化显示模式
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
//
//	// 初始化窗口
//	glutInitWindowSize(w, h);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("hello");
//
//	init();
//	glutReshapeFunc(reshape);
//	glutDisplayFunc(display_cir);
//	//glutDisplayFunc(display_tri);
//	glutKeyboardFunc(mykeyboard);
//	glutMouseFunc(mymouse);
//	glutMotionFunc(mymotion);
//
//	// 开始主循环绘制
//	glutMainLoop();
//	return 0;
//}
