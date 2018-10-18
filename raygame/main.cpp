#include <iostream>
#include "raylib.h"
#include "basicSprite.h"

int main()
{
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	std::string arr[] = { "soldier_idle.png", "soldier_walk1.png", "soldier_walk2.png" };

	Sprite dug(arr, 3, 25.0f);
	dug.x = 100;
	dug.y = 100;

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		dug.Draw();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}