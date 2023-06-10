#pragma once
#include<graphics.h>
#include<easyx.h>





/*void hit(int a, int b, int x, int y, int block, ExMessage m)
{

	switch (m.message)
	{
	case WM_LBUTTONUP:
		if (m.x <= a && m.x >= b && m.y <= x && m.y >= y)
			switch (block) {
			case 0:
				mclop += 1;
				Sleep(100);
				mclop -= 1;
				break;


				//closegraph();


			default:
				break;
			}
	}
}*/

void nofae() {
	//def a not frame form
	HWND hWnd = GetHWnd();
	SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_CAPTION);


}

void light() {
	int i;
	for (i = 255; i > 1; i -= 5)
	{
		setbkcolor(RGB(i, i, i));//���ñ���ɫ��ԭ��Ĭ�Ϻ�ɫ
		cleardevice();//������ȡ���ڱ���ɫ��
		Sleep(15);//��ʱ15ms
	}

}

void bg() {
	//background
	IMAGE bg;
	//loadimage(&bg, "bg.png", 600, 600, 1);
	putimage(0, 0, &bg);
}


void pibok(//���������壬Բ�ǳ�����
	int left,
	int top,
	int right,
	int bottom,       //�������ҵ������
	bool line = true,             //�Ƿ����ñ߿�,Ĭ�ϲ���
	COLORREF color_full = BLACK,   //���ɫ(Ĭ��Ϊ��)
	COLORREF color_line = WHITE,   //�߿���ɫ(Ĭ��Ϊ��)
	unsigned int r = 0    //Բ�뾶��0��ʱ����Բ��
)
{
	setlinecolor(color_line);  // ���õ�ǰ������ɫ 
	setfillcolor(color_full);  // ���õ�ǰ�����ɫ 
	if (!r) {//���û�а뾶�����������ͨ������
		if (line)//����б߿�
			fillrectangle(left, top, right, bottom);
		else
			solidrectangle(left, top, right, bottom);
	}
	else {//�����Բ�ǳ�����
		if (line) {//����б߿�
			fillcircle(left + r, top + r, r);
			fillcircle(left + r, bottom - r, r);
			fillcircle(right - r, top + r, r);
			fillcircle(right - r, bottom - r, r);
			solidrectangle(left, top + r, right, bottom - r);
			solidrectangle(left + r, top, right - r, bottom);
			::line(left + r, top, right - r, top);
			::line(left + r, bottom, right - r, bottom);
			::line(left, top + r, left, bottom - r);
			::line(right, top + r, right, bottom - r);
		}
		else {
			solidrectangle(left, top + r, right, bottom - r);
			solidrectangle(left + r, top, right - r, bottom);
			solidcircle(left + r, top + r, r);
			solidcircle(left + r, bottom - r, r);
			solidcircle(right - r, top + r, r);
			solidcircle(right - r, bottom - r, r);
		}
	}
}

void dowagn(int x = 0) {
	if (x == 0){
		setlinecolor(RED);//RGB(0,90,16));
		setfillcolor(RED);//RGB(0,90,16));
		fillcircle(629, 20, 10);
		//botton one
		setlinecolor(BLUE);//RGB(236,97,15));
		setfillcolor(BLUE);//RGB(236,97,15));
		fillcircle(604, 20, 10);
		//botton two
		/*setfillcolor(GREEN);//RGB(113,76,13));
		setlinecolor(GREEN);//RGB(113,76,13));
		fillcircle(579, 20, 10);
		//botton three
		*/
		//term area
		setlinecolor(WHITE);
		pibok(1, 100, 350, 450, true, BLACK, WHITE, 15);
		pibok(1, 180, 300, 180, true, BLACK, WHITE, 0);
		//botton start white end
		setfillcolor(BLACK);
		pibok(370, 100, 600, 150, true, BLACK, WHITE, 15);
		//botton Normal startup
		pibok(370, 200, 600, 250, true, BLACK, WHITE, 15);
		//botton set
		pibok(370, 300, 600, 350, true, BLACK, WHITE, 15);
		//botton about&sponsor
		pibok(370, 400, 600, 450, true, BLACK, WHITE, 15);
		//writing
		settextstyle(40, 0, _T("΢���ź�"));
		outtextxy(10, 125, _T("�ն�"));


		outtextxy(425, 105, _T("�����׶�"));
		outtextxy(425, 205, _T("��������"));
		outtextxy(425, 305, _T("����"));
		outtextxy(425, 405, _T("���ڻ�����"));
		settextstyle(20, 0, _T("΢���ź�"));
		outtextxy(10, 160, _T("terminal"));
		settextstyle(20, 0, _T("΢���ź�"));
		outtextxy(10, 1, _T("Moloky - Half out of the box"));
		settextstyle(25, 0, _T("΢���ź�"));
		outtextxy(10, 185, _T("hello world;"));
	}
	else if (x == 1){
		settextstyle(40, 0, _T("΢���ź�"));
		outtextxy(10, 125, _T("�ն�"));
		settextstyle(20, 0, _T("΢���ź�"));
		outtextxy(10, 160, _T("terminal"));
		settextstyle(20, 0, _T("΢���ź�"));
		outtextxy(10, 1, _T("Moloky - Half out of the box"));
		settextstyle(25, 0, _T("΢���ź�"));
		outtextxy(10, 185, _T("hello world;"));
		pibok(1, 100, 350, 450, true, BLACK, WHITE, 15);
		pibok(1, 180, 300, 180, true, BLACK, WHITE, 0);

	}
	else if (x == 2){
		setlinecolor(RED);//RGB(0,90,16));
		setfillcolor(RED);//RGB(0,90,16));
		fillcircle(629, 20, 10);
		//botton one
		setlinecolor(BLUE);//RGB(236,97,15));
		setfillcolor(BLUE);//RGB(236,97,15));
		fillcircle(604, 20, 10);

	}
	else if (x == 3){
		pibok(370, 100, 600, 150, true, BLACK, WHITE, 15);
		//botton Normal startup
		pibok(370, 200, 600, 250, true, BLACK, WHITE, 15);
		//botton set
		pibok(370, 300, 600, 350, true, BLACK, WHITE, 15);
		//botton about&sponsor
		pibok(370, 400, 600, 450, true, BLACK, WHITE, 15);


		settextstyle(40, 0, _T("΢���ź�"));



		outtextxy(425, 105, _T("�����׶�"));
		outtextxy(425, 205, _T("��������"));
		outtextxy(425, 305, _T("����"));
		outtextxy(425, 405, _T("���ڻ�����"));
	}

}