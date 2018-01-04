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
		void Update(Graphics& gfx, Arrow& arrow, float dt);
		void Draw(Graphics& gfx, Arrow& arrow);
	private:
		bool shot = false;
		bool offScreen = false;
		float x;
		float y;
		float ammoSpeed = 7.0f;
	};
	class meter
	{
	public:
	private:
	};
public:
	void Update(Graphics& gfx, Keyboard& kbd, float dt);
	void ClampToScreen();
	void Shoot(Keyboard& kbd, float dt);
	void Draw(Graphics& gfx);
private:
	std::vector<Ammo> ammo;
	int ammoShot = 0;
	bool shooting = false;
	float x = 70.0f;
	float y = 300.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	static constexpr float speed = 2.0f;
	float shootEverySeconds = 0.0f;
};