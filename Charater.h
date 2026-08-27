#pragma once //한 번만 불러옴. 이거 없으면 중복으로 불러와서 에러가 생김.
#include "Actor.h"
class ACharater : public AActor
{
public:
	void Move();
};

