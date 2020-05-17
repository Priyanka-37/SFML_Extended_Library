#pragma once

#include<SFML/Graphics.hpp>

namespace gui
{
	class guibase
	{
	public:
		virtual void EventHandler(sf::Event e, const sf::RenderWindow& window) = 0;
		
		virtual void setPosition(const sf::Vector2f& pos) = 0;

		virtual sf::Vector2f getSize() const = 0;

		virtual void render(sf::RenderTarget& renderTarget) = 0;

	};
}
