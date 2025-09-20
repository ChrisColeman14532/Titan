#pragma once
#include "ComponentsCommon.h"

namespace titan
{
#define INIT_INFO(component) namespace component { struct init_info; }
	INIT_INFO(transform);
#undef INIT_INFO

	namespace game_entity
	{
		struct entity_info
		{
		transform::init_info* transform{ nullptr };
		};

		entity create_game_entity(const entity_info& info);
		bool is_alive(entity e);
		void remove_game_entity(entity e);
	}
}


