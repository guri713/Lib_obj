#pragma once

#include <Windows.h>
#include <d3d11.h>
#include "math.h"

class system
{
private:
	system() {}
public:
	static system* GetInstance()
	{
		static system _instance;
		return &_instance;
	}

	static HRESULT Initialize();
};