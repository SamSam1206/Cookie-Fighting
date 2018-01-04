#pragma once

#include "Graphics.h"
#include "Meteorite.h"
#include <random>

class Space
{
public:
	Space(Graphics& gfx, std::mt19937& rng);
	void Update(Arrow& arrow, const float dt);
	void Draw();
	bool GetCollision() const;
private:
	std::vector<MeteoriteSprite> meteorites;
	int x = 0;
	int y = 0;
	bool collision;
	float timeCounter = 0;
	Graphics& gfx;
	std::mt19937& rng;
};