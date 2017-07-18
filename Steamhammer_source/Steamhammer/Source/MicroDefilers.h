#pragma once;

#include <Common.h>
#include "MicroManager.h"

namespace UAlbertaBot
{
	class MicroDefilers : public MicroManager
	{
	public:

		MicroDefilers();
		void executeMicro(const BWAPI::Unitset & targets);
		void update(const BWAPI::Position & center);
	};
}