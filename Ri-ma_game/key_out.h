#pragma once

class KeySystem {
public:
	//キー入力を取得する関数
	void Getkey();

	//結果を返す関数
	int Givekey(int keyCode);

	int key[256];
};

extern KeySystem keySystem;