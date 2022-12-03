#include "SFML/Graphics.hpp"
#include "1.h"
using namespace sf;

const float Win_wid = 800;
const float Win_heig = 600;
const float Wid = 50;
//const float Vec_wid = Wid / 2;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(Win_wid, Win_heig), "SFML Works!");

	/*RectangleShape r1(Vector2f(20.f, 80.f));
	r1.setOrigin(Vector2f(10, 40));
	r1.setFillColor(Color{ 201, 62, 183 });
	r1.setPosition(60, 300);
	//r1.rotate(180.f);
	RectangleShape r2(Vector2f(20.f, 80.f));
	r2.setOrigin(Vector2f(10, 40));
	r2.setFillColor(Color{ 0, 62, 201 });
	r2.setPosition(740, 300);*/

	CircleShape c1(Wid);
	c1.setOrigin(Vector2f(float(Wid / 2), float(Wid / 2)));
	c1.setFillColor(Color{ 0, 62, 201 });
	c1.setPosition(float(Win_wid / 2), float(Win_heig / 2));
	CircleShape c2(Wid);
	c2.setOrigin(Vector2f(float(Wid / 2), float(Wid / 2)));
	c2.setFillColor(Color{ 0, 62, 201 });
	c2.setPosition(float(Win_wid / 2), float(Win_heig / 2 - 25));
	

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна
		/*window.clear();
		window.draw(r1);
		window.draw(r2);
		window.display();*/

		//1
		CircleShape ball_dy;
		window.clear();
		//2
		window.draw(c1);
		//3
		window.display();
		/*window.clear();
		window.draw(c2);
		window.display();
		window.clear();
		window.draw(c3);
		window.display();*/
	}

	return 0;
}
