#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include <vector>

class Arrow
{
private:
	class Ammo
	{
	public:
		void Update(Graphics& gfx, Arrow& arrow);
		void Draw(Graphics& gfx, Arrow& arrow);
	private:
		bool shot = false;
		bool offScreen = false;
		float x;
		float y;
		float ammoSpeed = 10.0f;
	};
public:
	void Update(Graphics& gfx, Keyboard& kbd);
	void ClampToScreen();
	void Shoot(Keyboard& kbd);
	void Draw(Graphics& gfx);
private:
	std::vector<Ammo> ammo;
	int ammoShot = 0;
	bool shooting = false;
	float x = 20.0f;
	float y = 300.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	static constexpr float speed = 4.0f;
};