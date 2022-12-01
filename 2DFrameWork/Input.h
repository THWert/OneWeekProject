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

    Vector2 mouseSPos; //스크린좌표 마우스
    Vector2 mouseWPos; //월드좌표 마우스

public:
    Input();
    ~Input();

    bool KeyDown(int KeyCode); //눌렀을때 최초1회
    bool KeyPress(int KeyCode);//누르고있을때
    bool KeyUp(int KeyCode); //눌렀다가 떼었을때 최초1회
    void Update();

    Vector2 GetMouseScreenPos() { return mouseSPos; }
    Vector2 GetMouseWorldPos() { return mouseWPos; }
};

