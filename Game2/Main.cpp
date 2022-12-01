#include "stdafx.h"
#include "Main.h"

void Main::Init()
{
	//배경과 플레이어
	bg = new ObImage(L"background.png");
	bg->scale = Vector2(23000.0f, 8000.0f);

	ground.scale = Vector2(8000.0f, 250.0f);
	ground.SetLocalPos(Vector2(3225.0f, -350.0f));
	ground.isAxis = true;
	ground.colOnOff = true;

	player.scale = Vector2(25.0f, 25.0f);
	player.color = Color(0.0, 0.0, 1.0, 1.0);
	player.SetWorldPos(Vector2(-500.0f, -213.0f));
	player.isAxis = true;
	player.colOnOff = true;

	moon1.scale = Vector2(60.0f, 60.0f);
	moon1.color = Color(1.0, 1.0, 0.0, 1.0);
	moon1.SetLocalPos(Vector2(400.0f, 200.0f));
	moon1.isAxis = true;

	moon2.scale = Vector2(60.0f, 60.0f);
	moon2.color = Color(0.0, 0.0, 0.0, 1.0);
	moon2.SetLocalPos(Vector2(390.0f, 210.0f));
	moon2.isAxis = true;

	star[0].scale = Vector2(3.0f, 3.0f);
	star[0].color = Color(1.0, 1.0, 1.0, 1.0);
	star[0].SetLocalPos(Vector2(-580.0f, 250.0f));
	star[0].isAxis = true;

	star[1].scale = Vector2(3.0f, 3.0f);
	star[1].color = Color(1.0, 1.0, 1.0, 1.0);
	star[1].SetLocalPos(Vector2(-380.0f, 150.0f));
	star[1].isAxis = true;

	star[2].scale = Vector2(3.0f, 3.0f);
	star[2].color = Color(1.0, 1.0, 1.0, 1.0);
	star[2].SetLocalPos(Vector2(-130.0f, 200.0f));
	star[2].isAxis = true;

	star[3].scale = Vector2(3.0f, 3.0f);
	star[3].color = Color(1.0, 1.0, 1.0, 1.0);
	star[3].SetLocalPos(Vector2(200.0f, 230.0f));
	star[3].isAxis = true;

	star[4].scale = Vector2(3.0f, 3.0f);
	star[4].color = Color(1.0, 1.0, 1.0, 1.0);
	star[4].SetLocalPos(Vector2(550.0f, 180.0f));
	star[4].isAxis = true;

	star[5].scale = Vector2(3.0f, 3.0f);
	star[5].color = Color(1.0, 1.0, 1.0, 1.0);
	star[5].SetLocalPos(Vector2(820.0f, 220.0f));
	star[5].isAxis = true;

	startwall.scale = Vector2(190.0f, 630.0f);
	startwall.color = Color(1.0, 0.0, 0.0, 1.0);
	startwall.SetLocalPos(Vector2(-680.0f, -10.0f));
	startwall.isAxis = true;
	startwall.colOnOff = true;

	endwall.scale = Vector2(190.0f, 600.0f);
	endwall.SetLocalPos(Vector2(7130.0f, 30.0f));
	endwall.isAxis = true;
	endwall.colOnOff = true;

	//1페이즈 : 키보드피하기 (간격 60)
	avoid[0].scale = Vector2(5.0f, 370.0f); //맨 앞 세로 블럭
	avoid[0].SetLocalPos(Vector2(-400.0f, 20.0f));
	avoid[0].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[0].isAxis = true;
	avoid[0].colOnOff = true;

	avoid[1].scale = Vector2(5.0f, 370.0f); //바로 뒷 세로 블럭
	avoid[1].SetLocalPos(Vector2(-340.0f, -40.0f));
	avoid[1].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[1].isAxis = true;
	avoid[1].colOnOff = true;

	avoid[2].scale = Vector2(390.0f, 5.0f); //0번 상단 가로 블럭
	avoid[2].SetLocalPos(Vector2(-203.0f, 202.0f));
	avoid[2].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[2].isAxis = true;
	avoid[2].colOnOff = true;

	avoid[3].scale = Vector2(270.0f, 5.0f); //1번 하단 가로 블럭
	avoid[3].SetLocalPos(Vector2(-203.0f, 142.0f));
	avoid[3].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[3].isAxis = true;
	avoid[3].colOnOff = true;

	avoid[4].scale = Vector2(5.0f, 370.0f); //1번 뒷 세로 블럭
	avoid[4].SetLocalPos(Vector2(-65.0f, -40.0f));
	avoid[4].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[4].isAxis = true;
	avoid[4].colOnOff = true;

	avoid[5].scale = Vector2(5.0f, 370.0f); //4번 뒷 세로 블럭
	avoid[5].SetLocalPos(Vector2(-5.0f, 20.0f));
	avoid[5].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[5].isAxis = true;
	avoid[5].colOnOff = true;

	avoid[6].scale = Vector2(5.0f, 100.0f); //상단 뚫기 금지
	avoid[6].SetLocalPos(Vector2(-200.0f, 250.0f));
	avoid[6].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[6].isAxis = true;
	avoid[6].colOnOff = true;

	avoid[7].scale = Vector2(270.0f, 366.0f); //빈 곳 채우기
	avoid[7].SetLocalPos(Vector2(-203.0f, -42.0f));
	avoid[7].color = Color(1.0, 0.0, 0.0, 1.0);
	avoid[7].isAxis = true;
	avoid[7].colOnOff = true;

	//2페이즈 : 날아오는 물체 피하기
	leftkeyboardavoidwall.scale = Vector2(250.0f, 590.0f);
	leftkeyboardavoidwall.color = Color(1.0, 0.0, 0.0, 1.0);
	leftkeyboardavoidwall.SetLocalPos(Vector2(400.0f, 630.0f));
	leftkeyboardavoidwall.isVisible = true;
	leftkeyboardavoidwall.colOnOff = true;

	rightkeyboardavoidwall.scale = Vector2(1300.0f, 590.0f);
	rightkeyboardavoidwall.color = Color(1.0, 0.0, 0.0, 1.0);
	rightkeyboardavoidwall.SetLocalPos(Vector2(1300.0f, 690.0f));
	rightkeyboardavoidwall.isVisible = true;

	widthrect[0].scale = Vector2(350.0f, 100.0f); //4번째 블럭
	widthrect[0].color = Color(1.0, 0.0, 0.0, 1.0);
	widthrect[0].SetLocalPos(Vector2(1300.0f, -160.0f));
	widthrect[0].isVisible = false;

	widthrect[1].scale = Vector2(350.0f, 100.0f); // 3번째 블럭
	widthrect[1].color = Color(1.0, 0.0, 0.0, 1.0);
	widthrect[1].SetLocalPos(Vector2(1300.0f, -40.0f));
	widthrect[1].isVisible = false;

	widthrect[2].scale = Vector2(350.0f, 100.0f); //2번째 블럭
	widthrect[2].color = Color(1.0, 0.0, 0.0, 1.0);
	widthrect[2].SetLocalPos(Vector2(1300.0f, 80.0f));
	widthrect[2].isVisible = false;

	widthrect[3].scale = Vector2(350.0f, 100.0f); //1번째 블럭
	widthrect[3].color = Color(1.0, 0.0, 0.0, 1.0);
	widthrect[3].SetLocalPos(Vector2(1300.0f, 200.0f));
	widthrect[3].isVisible = false;

	//3페이즈 : 버튼 누르기 (순서 : 2 4 3 1 5)
	//버튼
	button[0].scale = Vector2(15.0f, 15.0f); //처음 누를 버튼
	button[0].color = Color(0.0, 1.0, 0.0, 1.0);
	button[0].SetLocalPos(Vector2(2030.0f, 230.0f));
	button[0].isVisible = true;

	button[1].scale = Vector2(15.0f, 15.0f); //2번 버튼 열림
	button[1].color = Color(0.0, 1.0, 0.0, 1.0);
	button[1].SetLocalPos(Vector2(2400.0f, 135.0f));
	button[1].isVisible = true;

	button[2].scale = Vector2(15.0f, 15.0f); //4번 버튼 열림
	button[2].color = Color(0.0, 1.0, 0.0, 1.0);
	button[2].SetLocalPos(Vector2(2400.0f, -65.0f));
	button[2].isVisible = true;

	button[3].scale = Vector2(15.0f, 15.0f); //3번 버튼 열림
	button[3].color = Color(0.0, 1.0, 0.0, 1.0);
	button[3].SetLocalPos(Vector2(2400.0f, 35.0f));
	button[3].isVisible = true;

	button[4].scale = Vector2(15.0f, 15.0f); //1번 버튼 열림
	button[4].color = Color(0.0, 1.0, 0.0, 1.0);
	button[4].SetLocalPos(Vector2(2400.0f, 230.0f));
	button[4].isVisible = true;

	button[5].scale = Vector2(15.0f, 15.0f); //5번 버튼 열림
	button[5].color = Color(0.0, 1.0, 0.0, 1.0);
	button[5].SetLocalPos(Vector2(2400.0f, -165.0f));
	button[5].isVisible = true;

	//버튼 누르는 길
	buttonline[0].scale = Vector2(200.0f, 5.0f); //진입점 바닥
	buttonline[0].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[0].SetLocalPos(Vector2(1700.0f, -200.0f));
	buttonline[0].isVisible = true;

	buttonline[1].scale = Vector2(140.0f, 5.0f); //진입점 상단
	buttonline[1].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[1].SetLocalPos(Vector2(1670.0f, -140.0f));
	buttonline[1].isVisible = true;

	buttonline[2].scale = Vector2(5.0f, 200.0f); //진입점 벽 앞
	buttonline[2].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[2].SetLocalPos(Vector2(1742.0f, -42.0f));
	buttonline[2].isVisible = true;

	buttonline[3].scale = Vector2(5.0f, 200.0f); //진입점 벽 뒤
	buttonline[3].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[3].SetLocalPos(Vector2(1802.0f, -102.0f));
	buttonline[3].isVisible = true;

	buttonline[4].scale = Vector2(250.0f, 5.0f); //갈림길 입구 상단
	buttonline[4].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[4].SetLocalPos(Vector2(1869.0f, 55.0f));
	buttonline[4].isVisible = true;

	buttonline[5].scale = Vector2(190.0f, 5.0f); //갈림길 입구 하단
	buttonline[5].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[5].SetLocalPos(Vector2(1899.0f, -5.0f));
	buttonline[5].isVisible = true;

	buttonline[6].scale = Vector2(5.0f, 235.0f); //좌측 벽 상단
	buttonline[6].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[6].SetLocalPos(Vector2(1997.0f, 170.0f));
	buttonline[6].isVisible = true;

	buttonline[7].scale = Vector2(5.0f, 215.0f); //좌측 벽 하단
	buttonline[7].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[7].SetLocalPos(Vector2(1997.0f, -110.0f));
	buttonline[7].isVisible = true;

	buttonline[8].scale = Vector2(550.0f, 5.0f); //천장
	buttonline[8].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[8].SetLocalPos(Vector2(2274.0f, 285.0f));
	buttonline[8].isVisible = true;

	buttonline[9].scale = Vector2(550.0f, 5.0f); //바닥
	buttonline[9].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[9].SetLocalPos(Vector2(2274.0f, -215.0f));
	buttonline[9].isVisible = true;

	buttonline[10].scale = Vector2(5.0f, 235.0f); //우측 벽 상단
	buttonline[10].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[10].SetLocalPos(Vector2(2547.0f, 170.0f));
	buttonline[10].isVisible = true;

	buttonline[11].scale = Vector2(5.0f, 215.0f); //우측 벽 하단
	buttonline[11].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[11].SetLocalPos(Vector2(2547.0f, -110.0f));
	buttonline[11].isVisible = true;

	buttonline[12].scale = Vector2(100.0f, 5.0f); //출구 천장 
	buttonline[12].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[12].SetLocalPos(Vector2(2600.0f, 55.0f));
	buttonline[12].isVisible = true;

	buttonline[13].scale = Vector2(100.0f, 5.0f); //출구 바닥
	buttonline[13].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[13].SetLocalPos(Vector2(2600.0f, -5.0f));
	buttonline[13].isVisible = true;

	buttonline[14].scale = Vector2(400.0f, 5.0f); //1번 갈림길
	buttonline[14].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[14].SetLocalPos(Vector2(2274.0f, 185.0f));
	buttonline[14].isVisible = true;

	buttonline[15].scale = Vector2(400.0f, 5.0f); //2번 갈림길
	buttonline[15].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[15].SetLocalPos(Vector2(2274.0f, 85.0f));
	buttonline[15].isVisible = true;

	buttonline[16].scale = Vector2(400.0f, 5.0f); //3번 갈림길
	buttonline[16].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[16].SetLocalPos(Vector2(2274.0f, -15.0f));
	buttonline[16].isVisible = true;

	buttonline[17].scale = Vector2(400.0f, 5.0f); //4번 갈림길
	buttonline[17].color = Color(1.0, 0.0, 0.0, 1.0);
	buttonline[17].SetLocalPos(Vector2(2274.0f, -115.0f));
	buttonline[17].isVisible = true;

	//버튼 누를때 없어지는 벽
	defendline[0].scale = Vector2(10.0f, 80.0f); //2번 벽 사라짐
	defendline[0].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[0].SetLocalPos(Vector2(2300.0f, 135.0f));
	defendline[0].isVisible = true;

	defendline[1].scale = Vector2(10.0f, 80.0f); //4번 벽 사라짐
	defendline[1].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[1].SetLocalPos(Vector2(2300.0f, -65.0f));
	defendline[1].isVisible = true;

	defendline[2].scale = Vector2(10.0f, 80.0f); //3번 벽 사라짐
	defendline[2].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[2].SetLocalPos(Vector2(2300.0f, 35.0f));
	defendline[2].isVisible = true;

	defendline[3].scale = Vector2(10.0f, 80.0f); //1번 벽 사라짐
	defendline[3].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[3].SetLocalPos(Vector2(2300.0f, 235.0f));
	defendline[3].isVisible = true;

	defendline[4].scale = Vector2(10.0f, 80.0f); //5번 벽 사라짐
	defendline[4].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[4].SetLocalPos(Vector2(2300.0f, -165.0f));
	defendline[4].isVisible = true;

	//고정 벽
	defendline[5].scale = Vector2(10.0f, 80.0f);
	defendline[5].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[5].SetLocalPos(Vector2(2450.0f, 235.0f));
	defendline[5].isVisible = true;

	defendline[6].scale = Vector2(10.0f, 80.0f);
	defendline[6].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[6].SetLocalPos(Vector2(2450.0f, 135.0f));
	defendline[6].isVisible = true;

	defendline[7].scale = Vector2(10.0f, 80.0f);
	defendline[7].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[7].SetLocalPos(Vector2(2450.0f, 35.0f));
	defendline[7].isVisible = true;

	defendline[8].scale = Vector2(10.0f, 80.0f);
	defendline[8].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[8].SetLocalPos(Vector2(2450.0f, -65.0f));
	defendline[8].isVisible = true;

	defendline[9].scale = Vector2(10.0f, 80.0f);
	defendline[9].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[9].SetLocalPos(Vector2(2450.0f, -165.0f));
	defendline[9].isVisible = true;

	//출구 벽
	defendline[10].scale = Vector2(10.0f, 30.0f);
	defendline[10].color = Color(1.0, 0.0, 0.0, 1.0);
	defendline[10].SetLocalPos(Vector2(2550.0f, 25.0f));
	defendline[10].isVisible = true;

	//4페이즈 : 변하는 길
	moveblock[0].scale = Vector2(350.0f, 700.0f); //1세트
	moveblock[0].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[0].SetLocalPos(Vector2(3500.0f, 170.0f));
	moveblock[0].isVisible = true;

	moveblock[1].scale = Vector2(350.0f, 10000.0f);
	moveblock[1].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[1].SetLocalPos(Vector2(3500.0f, -5250.0f));
	moveblock[1].isVisible = true;

	moveblock[2].scale = Vector2(350.0f, 10000.0f); //2세트
	moveblock[2].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[2].SetLocalPos(Vector2(3900.0f, 5250.0f));
	moveblock[2].isVisible = true;

	moveblock[3].scale = Vector2(350.0f, 700.0f);
	moveblock[3].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[3].SetLocalPos(Vector2(3900.0f, -170.0f));
	moveblock[3].isVisible = true;

	moveblock[4].scale = Vector2(350.0f, 700.0f); //3세트
	moveblock[4].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[4].SetLocalPos(Vector2(4300.0f, 385.0f));
	moveblock[4].isVisible = true;

	moveblock[5].scale = Vector2(350.0f, 700.0f);
	moveblock[5].color = Color(1.0, 0.0, 0.0, 1.0);
	moveblock[5].SetLocalPos(Vector2(4300.0f, -385.0f));
	moveblock[5].isVisible = true;

	//5페이즈 : 다가오는 블럭
	leftblock.scale = Vector2(350.0f, 630.0f);
	leftblock.color = Color(1.0, 0.0, 0.0, 1.0);
	leftblock.SetLocalPos(Vector2(5200.0f, 1000.0f));
	leftblock.isVisible = true;

	//기믹 출현 조건 라인 (나중에 색깔 검은색으로 변경 필요)
	hiddenline[0].scale = Vector2(1.0f, 590.0f);
	hiddenline[0].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[0].SetLocalPos(Vector2(550.0f, 70.0f));
	hiddenline[0].isVisible = true;

	hiddenline[1].scale = Vector2(1.0f, 590.0f);
	hiddenline[1].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[1].SetLocalPos(Vector2(1300.0f, 70.0f));
	hiddenline[1].isVisible = true;

	hiddenline[2].scale = Vector2(1.0f, 590.0f);
	hiddenline[2].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[2].SetLocalPos(Vector2(3300.0f, 70.0f));
	hiddenline[2].isVisible = true;

	hiddenline[3].scale = Vector2(1.0f, 590.0f);
	hiddenline[3].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[3].SetLocalPos(Vector2(3700.0f, 70.0f));
	hiddenline[3].isVisible = true;

	hiddenline[4].scale = Vector2(1.0f, 590.0f);
	hiddenline[4].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[4].SetLocalPos(Vector2(4100.0f, 70.0f));
	hiddenline[4].isVisible = true;

	hiddenline[5].scale = Vector2(1.0f, 590.0f);
	hiddenline[5].color = Color(1.0, 1.0, 1.0, 1.0);
	hiddenline[5].SetLocalPos(Vector2(5450.0f, 70.0f));
	hiddenline[5].isVisible = true;

	//클리어 박스
	clear.scale = Vector2(40.0f, 80.0f);
	clear.color = Color(1.0, 1.0, 1.0, 1.0);
	clear.SetLocalPos(Vector2(7000.0f, -184.6f));
	clear.isAxis = true;
}

void Main::Release()
{
	DeleteObject(bg);
}

void Main::Update()
{
	//방향키 조작
	if (INPUT->KeyPress('A'))
	{
		if (camstop == false)
		{
			CAM->position += LEFT * 200.0f * DELTA;
			player.MoveLocalPos(LEFT * 200.0f * DELTA);

			moon1.MoveLocalPos(LEFT * 200.0f * DELTA);
			moon2.MoveLocalPos(LEFT * 200.0f * DELTA);

			for (int i = 0; i < 6; i++)
				star[i].MoveLocalPos(LEFT * 190.0f * DELTA);
		}
	}
	if (INPUT->KeyPress('D'))
	{
		if (camstop == false)
		{
			CAM->position += RIGHT * 200.0f * DELTA;
			player.MoveLocalPos(RIGHT * 200.0f * DELTA);

			moon1.MoveLocalPos(RIGHT * 200.0f * DELTA);
			moon2.MoveLocalPos(RIGHT * 200.0f * DELTA);

			for (int i = 0; i < 6; i++)
				star[i].MoveLocalPos(RIGHT * 190.0f * DELTA);
		}
	}
	if (INPUT->KeyPress('W'))
	{
		if (camstop == false)
		{
			player.MoveLocalPos(UP * 200.0f * DELTA);

			if (player.GetWorldPos().y > app.GetHalfHeight() - 13)
				player.MoveLocalPos(DOWN * 400.0f * DELTA);
		}
	}
	if (INPUT->KeyPress('S'))
	{
		if (camstop == false)
		{
			player.MoveLocalPos(DOWN * 200.0f * DELTA);

			if (player.GetWorldPos().y < ground.GetLocalPos().y + 138)
				player.MoveLocalPos(UP * 200.0f * DELTA);
		}
	}

	/*기믹*/
	keyboardavoid();
	frontbackwall();
	widthavoid();
	pushbutton();
	moveavoidblock();
	comeblock();

	for (int i = 0; i < 6; i++)
		hiddenline[i].Update();

	bg->Update();
	ground.Update();


	for (int i = 0; i < 6; i++)
		star[i].Update();

	moon1.Update();
	moon2.Update();

	for (int i = 0; i < 4; i++)
		widthrect[i].Update();
	for (int i = 0; i < 8; i++)
		avoid[i].Update();

	startwall.Update();
	endwall.Update();

	clear.Update();

	leftkeyboardavoidwall.Update();
	rightkeyboardavoidwall.Update();

	player.Update();

	for (int i = 0; i < 6; i++)
		button[i].Update();
	for (int i = 0; i < 18; i++)
		buttonline[i].Update();
	for (int i = 0; i < 11; i++)
		defendline[i].Update();
	for (int i = 0; i < 6; i++)
		moveblock[i].Update();

	leftblock.Update();
}

void Main::LateUpdate(){}

void Main::Render()
{
	for (int i = 0; i < 6; i++)
		hiddenline[i].Render();

	bg->Render();
	ground.Render();

	for (int i = 0; i < 6; i++)
		star[i].Render();

	moon1.Render();
	moon2.Render();

	for (int i = 0; i < 4; i++)
		widthrect[i].Render();
	for (int i = 0; i < 8; i++)
		avoid[i].Render();

	startwall.Render();
	endwall.Render();

	clear.Render();

	leftkeyboardavoidwall.Render();
	rightkeyboardavoidwall.Render();

	player.Render();

	for (int i = 0; i < 6; i++)
		button[i].Render();
	for (int i = 0; i < 18; i++)
		buttonline[i].Render();
	for (int i = 0; i < 11; i++)
		defendline[i].Render();
	for (int i = 0; i < 6; i++)
		moveblock[i].Render();

	leftblock.Render();
}

void Main::ResizeScreen(){}

void Main::keepgame()
{
	player.isVisible = true;

	ground.isVisible = true;

	for (int i = 0; i < 6; i++)
		star[i].isVisible = true;

	moon1.isVisible = true;
	moon2.isVisible = true;

	for (int i = 0; i < 4; i++)
		widthrect[i].isVisible = true;
	for (int i = 0; i < 8; i++)
		avoid[i].isVisible = true;

	startwall.isVisible = true;
	endwall.isVisible = true;

	clear.isVisible = true;

	for (int i = 0; i < 6; i++)
		hiddenline[i].isVisible = true;

	leftkeyboardavoidwall.isVisible = true;
	rightkeyboardavoidwall.isVisible = true;

	for (int i = 0; i < 6; i++)
		button[i].isVisible = true;
	for (int i = 0; i < 18; i++)
		buttonline[i].isVisible = true;
	for (int i = 0; i < 11; i++)
		defendline[i].isVisible = true;
	for (int i = 0; i < 6; i++)
		moveblock[i].isVisible = true;

	leftblock.isVisible = true;
}

void Main::leftwallgameover()
{
	if (player.Intersect(&startwall))
		player.isVisible = false;
	else
		player.isVisible = true;

}

void Main::keyboardavoid()
{
	//시작
	if (player.Intersect(&startwall))
		player.isVisible = false;

	//1페이즈 : 키보드 피하기
	else if (player.Intersect(&avoid[0]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[1]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[2]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[3]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[4]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[5]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[6]))
		player.isVisible = false;
	else if (player.Intersect(&avoid[7]))
		player.isVisible = false;

	//2페이즈 : 날아오는 물체 피하기
	else if (player.Intersect(&leftkeyboardavoidwall))
		player.isVisible = false;
	else if (player.Intersect(&rightkeyboardavoidwall))
		player.isVisible = false;
	else if (player.Intersect(&widthrect[0]))
		player.isVisible = false;
	else if (player.Intersect(&widthrect[1]))
		player.isVisible = false;
	else if (player.Intersect(&widthrect[2]))
		player.isVisible = false;
	else if (player.Intersect(&widthrect[3]))
		player.isVisible = false;

	//3페이즈 : 버튼 누르기
	else if (player.Intersect(&buttonline[0]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[1]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[2]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[3]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[4]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[5]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[6]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[7]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[8]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[9]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[10]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[11]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[12]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[13]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[14]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[15]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[16]))
		player.isVisible = false;
	else if (player.Intersect(&buttonline[17]))
		player.isVisible = false;
	else if (player.Intersect(&button[0]))
	{
		button[0].isVisible = false;
		defendline[0].isVisible = false;
	}
	else if (player.Intersect(&button[1]))
	{
		button[1].isVisible = false;
		defendline[1].isVisible = false;
	}
	else if (player.Intersect(&button[2]))
	{
		button[2].isVisible = false;
		defendline[2].isVisible = false;
	}
	else if (player.Intersect(&button[3]))
	{
		button[3].isVisible = false;
		defendline[3].isVisible = false;
	}
	else if (player.Intersect(&button[4]))
	{
		button[4].isVisible = false;
		defendline[4].isVisible = false;
	}
	else if (player.Intersect(&button[5]))
	{
		button[5].isVisible = false;
		defendline[5].isVisible = false;
		defendline[6].isVisible = false;
		defendline[7].isVisible = false;
		defendline[8].isVisible = false;
		defendline[9].isVisible = false;
		defendline[10].isVisible = false;
	}

	//4페이즈 : 변하는 길
	else if(player.Intersect(&moveblock[0]))
		player.isVisible = false;
	else if (player.Intersect(&moveblock[1]))
		player.isVisible = false;
	else if (player.Intersect(&moveblock[2]))
		player.isVisible = false;
	else if (player.Intersect(&moveblock[3]))
		player.isVisible = false;
	else if (player.Intersect(&moveblock[4]))
		player.isVisible = false;
	else if (player.Intersect(&moveblock[5]))
		player.isVisible = false;

	//5페이즈 : 다가오는 블럭
	else if(player.Intersect(&leftblock))
		player.isVisible = false;

	//클리어
	else if(player.Intersect(&clear))
	player.isVisible = false;
		
	//항시 고정
	else
		player.isVisible = true;
}

void Main::frontbackwall()
{
	if (player.GetWorldPos().x > hiddenline[0].GetWorldPos().x + 15)
	{
		leftkeyboardavoidwall.MoveWorldPos(DOWN * 2000.0f * DELTA);
		rightkeyboardavoidwall.MoveWorldPos(DOWN * 2000.0f * DELTA);

		if (leftkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 420)
			leftkeyboardavoidwall.MoveWorldPos(UP * 2000.0f * DELTA);
		if (rightkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 420)
		{
			rightkeyboardavoidwall.MoveWorldPos(UP * 2000.0f * DELTA);

			for (int i = 0; i < 4; i++)
				widthrect[i].isVisible = true;
		}
	}
}

void Main::widthavoid()
{
	if (leftkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 420 && rightkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 420)
	{
		widthrect[0].MoveWorldPos(LEFT * 1000.0f * DELTA);

		if (widthrect[0].GetWorldPos().x <= leftkeyboardavoidwall.GetWorldPos().x)
			widthrect[1].MoveWorldPos(LEFT * 1000.0f * DELTA);
		if (widthrect[1].GetWorldPos().x <= leftkeyboardavoidwall.GetWorldPos().x)
			widthrect[2].MoveWorldPos(LEFT * 1000.0f * DELTA);
		if (widthrect[2].GetWorldPos().x <= leftkeyboardavoidwall.GetWorldPos().x)
			widthrect[3].MoveWorldPos(LEFT * 1000.0f * DELTA);
		if (widthrect[3].GetWorldPos().x <= leftkeyboardavoidwall.GetWorldPos().x)
		{
			if (leftkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 10000 && rightkeyboardavoidwall.GetWorldPos().y <= ground.GetWorldPos().y + 10000)
			{
				leftkeyboardavoidwall.MoveWorldPos(DOWN * 2000.0f * DELTA);
				rightkeyboardavoidwall.MoveWorldPos(DOWN * 2000.0f * DELTA);
			}
		}
	}
}

void Main::pushbutton()
{
	//버튼 누르기
}

void Main::moveavoidblock()
{
	if (player.GetWorldPos().x > hiddenline[2].GetWorldPos().x + 15)
	{
		moveblock[0].MoveWorldPos(UP * 100.0f * DELTA);
		moveblock[1].MoveWorldPos(UP * 100.0f * DELTA);
	}
	if(player.GetWorldPos().x > hiddenline[3].GetWorldPos().x)
	{
		moveblock[2].MoveWorldPos(DOWN * 100.0f * DELTA);
		moveblock[3].MoveWorldPos(DOWN * 100.0f * DELTA);
	}
	//3세트 고정
}

void Main::comeblock()
{
	if (player.GetWorldPos().x > hiddenline[5].GetWorldPos().x)
	{
		leftblock.MoveWorldPos(DOWN * 8000.0f * DELTA);

		if (leftblock.GetWorldPos().y < ground.GetWorldPos().y + 370.0f)
		{
			leftblock.MoveWorldPos(UP * 8000.0f * DELTA);
			leftblock.MoveWorldPos(RIGHT * 206.0f * DELTA);
		}
	}
}

int WINAPI wWinMain(HINSTANCE instance, HINSTANCE prevInstance, LPWSTR param, int command)
{
	app.SetAppName(L"Adventure");
	app.SetInstance(instance);
	app.InitWidthHeight(1400.0f, 600.0f);
	Main* main = new Main();
	int wParam = (int)WIN->Run(main);
	WIN->DeleteSingleton();
	SafeDelete(main);
	return wParam;
}