#pragma once

#include "Graphics.h"
#include "Arrow.h"
#include <vector>
#include <random>

class MeteoriteSprite
{
public:
	MeteoriteSprite(float x, float y, int n, Graphics& gfx);
	void Update();
	void Draw();
	bool IsColliding(Arrow& arrow);
private:
	float x;
	float y;
	int n;
	float Width;
	float Height;
	void MeteoriteSprite1();
	void MeteoriteSprite2();
	void MeteoriteSprite3();
	void MeteoriteSprite4();
	void MeteoriteSprite5();
	void MeteoriteSprite6();
	void MeteoriteSprite7();
	void MeteoriteSprite8();
	void MeteoriteSprite9();
	void MeteoriteSprite10();
	Graphics& gfx;
};