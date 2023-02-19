#pragma once
#include <SFML/Graphics.hpp>
#include"settings.h"

struct CrashObj {
	sf::Texture texture;
	sf::Sprite sprite;
	float offset;
};
void CrashObjInit(CrashObj& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void CrashObjUpdate(CrashObj& obj) {

}