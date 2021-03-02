#include "imgui.h"
#include "imgui-SFML.h"
#include "jscot_hazel.h"

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "JSCOT HAZEL DEMO");
	window.setFramerateLimit(60);
	ImGui::SFML::Init(window);

	JscotHazel hazel;
	hazel.Init();

	sf::Clock deltaClock;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			ImGui::SFML::ProcessEvent(event);

			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		ImGui::SFML::Update(window, deltaClock.restart());

		hazel.Loop();

		window.clear();
		ImGui::SFML::Render(window);
		window.display();
	}

	ImGui::SFML::Shutdown();
}