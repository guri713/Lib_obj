#include "system.h"

HRESULT system::Initialize()
{
	Vector2 v1(5, 8), v2({ 1,5 });
	v2 *= 2.0f;
	Vector2 v3(v1 + v2);
	float ans = Vector2::Dot(v1,v2);
	return true;
}