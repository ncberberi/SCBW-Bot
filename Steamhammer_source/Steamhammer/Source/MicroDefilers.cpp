#include "MicroDefilers.h"
#include "UnitUtil.h"

using namespace UAlbertaBot;

MicroDefilers::MicroDefilers()
{
}

// No micro to execute here. Unused but required.
void MicroDefilers::executeMicro(const BWAPI::Unitset & targets)
{
}

void MicroDefilers::update(const BWAPI::Position & center)
{
	const BWAPI::Unitset & defilers = getUnits();
	BWAPI::Unitset availableDefilers(defilers);

	// Defilers should be positioned towards the middle of the squad
	for (const auto defiler : availableDefilers)
	{
		Micro::SmartMove(defiler, center);
	}
}