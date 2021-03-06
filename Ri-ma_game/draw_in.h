#pragma once
struct DRAWCHAR {
	char *c;
	int a;
	int x;
	int y;
}; //描画する文字の情報を保持する構造体

class DrawSystem {
public:
	DRAWCHAR drawChar[500];
	int end = -1;//drawCharに使用されるメモリの最後尾

	void SetChar(char *c, int x, int y); //draw.cpp 
	void SetChar2(int a, int x, int y);

	void DrawChar(); //draw.cpp
};

extern DrawSystem drawSystem;