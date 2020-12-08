#pragma once
#include "Entity.h"

#include <iostream>
#include <string>

class Room;

class Player :public Entity {
	friend class Map;
private:
	list<Item*> backpack; // list of pointers to Item class (and subclasses)
	int carry_limit = 10;
	int move_count; // counts how many times player has changed rooms
public:
	Player(void);
	Player(std::string name);
	void addto_backpack(Item* item);
	void open_backpack();
	void examine();
	bool move();
	bool interact(Item* item, int index);
};



