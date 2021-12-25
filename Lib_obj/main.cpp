#include <windows.h>
#include <memory>
#include <assert.h>
#include <tchar.h>
#include <thread>
#include <stdio.h>
#include <string>
#include "system.h"


INT APIENTRY wWinMain(HINSTANCE _hInstance,HINSTANCE _hPrevInstance,LPWSTR _lpCmdLine,INT _nCmdShow)
{
	system::GetInstance()->Initialize();
	return 0;
}