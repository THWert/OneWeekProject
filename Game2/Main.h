#pragma once
#define BULLET 100

class Main : public Scene
{
private:
	ObImage* bg;

	ObRect ground;
	ObRect player;

	ObRect star[6];

	ObCircle moon1;
	ObCircle moon2;

	ObRect startwall;
	ObRect endwall;

	ObRect leftkeyboardavoidwall;
	ObRect rightkeyboardavoidwall;

	ObRect widthrect[4];

	//키보드로 피하기 객체
	ObRect avoid[8];

	//기믹 출현 시점 객체
	ObRect hiddenline[6];

	//버튼 객체
	ObCircle button[6];
	ObRect buttonline[18];
	ObRect defendline[11];

	//변위 블럭 피하기
	ObRect moveblock[6];

	//다가오는 블럭
	ObRect leftblock;

	ObRect gameclearbox;

	ObRect clear;

	bool camstop = false;
public:
	virtual void Init() override;
	virtual void Release() override; //해제
	virtual void Update() override; //갱신
	virtual void LateUpdate() override;
	virtual void Render() override;
	virtual void ResizeScreen() override;

	void keepgame();

	void leftwallgameover();


	void keyboardavoid();  //1페이즈
	void frontbackwall();  //2페이즈 (양쪽 벽 하강)
	void widthavoid();	   //2페이즈 (블럭 4개 이동)
	void pushbutton();	   //3페이즈
	void moveavoidblock(); //4페이즈
	void comeblock();      //5페이즈
};