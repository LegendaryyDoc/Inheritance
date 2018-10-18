#include "raylib.h"
#include "button.h"

void Button::Draw()
{

}

bool Button::CheckForClick()
{
	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
	{
		GetMousePosition();

		return true;
	}
	else
	{
		return false;
	}
}

Button::Button(const std::string * filename, const Vector2 & position, const int cellCount)
{

}

Button::Button()
{

}

Button::~Button()
{

}
