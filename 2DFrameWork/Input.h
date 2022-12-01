#pragma once

class Input : public Singleton<Input>
{
    friend class Window;

private:
    unsigned char keyState[256];
    unsigned char keyOldState[256];
    unsigned char keyMap[256];

    enum 
    {
        KEY_INPUT_STATUS_DOWN,
        KEY_INPUT_STATUS_PRESS,
        KEY_INPUT_STATUS_NONE,
        KEY_INPUT_STATUS_UP,
    };

    Vector2 mouseSPos; //��ũ����ǥ ���콺
    Vector2 mouseWPos; //������ǥ ���콺

public:
    Input();
    ~Input();

    bool KeyDown(int KeyCode); //�������� ����1ȸ
    bool KeyPress(int KeyCode);//������������
    bool KeyUp(int KeyCode); //�����ٰ� �������� ����1ȸ
    void Update();

    Vector2 GetMouseScreenPos() { return mouseSPos; }
    Vector2 GetMouseWorldPos() { return mouseWPos; }
};

