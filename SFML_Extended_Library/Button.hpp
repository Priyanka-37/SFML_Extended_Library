#pragma once
#include<SFML/Graphics.hpp>
#include"guibase.hpp"
#include<memory>
#include<functional>

namespace gui
{
	class Button : public guibase
	{
	public:
		Button(sf::Font& font, sf::Vector2f size = sf::Vector2f(256.0f, 64.0f), std::string ButtonText = "NewButton");

		void setTextStyle(sf::Uint32 style);

		void setColor(sf::Color BoxColor, sf::Color TextColor);

		void setPosition(const sf::Vector2f& pos) override;

		sf::Vector2f getSize() const override;

		void setFunction(std::function<void(void)> ButtonFunction);

		void render(sf::RenderTarget & renderTarget) override;

		void EventHandler(sf::Event e, const sf::RenderWindow& window) override;

	private:
		sf::RectangleShape box;
		sf::Text text;

		std::function<void(void)> ButtonFunction;

		void adjustText();

	};
}

