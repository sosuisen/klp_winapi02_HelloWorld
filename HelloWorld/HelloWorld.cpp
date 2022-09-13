#include <windows.h>

int APIENTRY wWinMain(HINSTANCE hInstance,
       HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
    int id;
    id = MessageBox(NULL, L"ボタンを押して下さい", L"確認", MB_OKCANCEL | MB_ICONQUESTION);
    switch (id)
    {
    case IDOK:
        MessageBox(NULL, L"[OK] が押されました。", L"結果", MB_ICONINFORMATION);
        break;
    case IDCANCEL:
        MessageBox(NULL, L"[キャンセル] が押されました。", L"結果", MB_ICONINFORMATION);
        break;
    }
    return 0;
}
