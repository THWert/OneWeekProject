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

	//Ű����� ���ϱ� ��ü
	ObRect avoid[8];

	//��� ���� ���� ��ü
	ObRect hiddenline[6];

	//��ư ��ü
	ObCircle button[6];
	ObRect buttonline[18];
	ObRect defendline[11];

	//���� �� ���ϱ�
	ObRect moveblock[6];

	//�ٰ����� ��
	ObRect leftblock;

	ObRect gameclearbox;

	ObRect clear;

	bool camstop = false;
public:
	virtual void Init() override;
	virtual void Release() override; //����
	virtual void Update() override; //����
	virtual void LateUpdate() override;
	virtual void Render() override;
	virtual void ResizeScreen() override;

	void keepgame();

	void leftwallgameover();


	void keyboardavoid();  //1������
	void frontbackwall();  //2������ (���� �� �ϰ�)
	void widthavoid();	   //2������ (�� 4�� �̵�)
	void pushbutton();	   //3������
	void moveavoidblock(); //4������
	void comeblock();      //5������
};