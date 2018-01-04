#pragma once

#include "Graphics.h"
#include "Meteorite.h"
#include <random>

class Space
{
public:
	Space(Graphics& gfx, std::mt19937& rng);
	void Update(const float dt);
	void Draw();
private:
	std::vector<MeteoriteSprite> meteorites;
	int x = 0;
	int y = 0;
	float timeCounter = 0;
	Graphics& gfx;
	std::mt19937& rng;
};