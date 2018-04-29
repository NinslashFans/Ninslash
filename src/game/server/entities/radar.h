#ifndef GAME_SERVER_ENTITIES_RADAR_H
#define GAME_SERVER_ENTITIES_RADAR_H

#include <game/server/entity.h>

class CRadar : public CEntity
{
	int m_Type;
	int m_ObjectiveID;
	vec2 m_TargetPos;
	bool m_Active;
	
public:
	CRadar(CGameWorld *pGameWorld, int Type, int ObjectiveID);

	virtual void Reset();
	virtual void Tick();
	virtual void Snap(int SnappingClient);
};

#endif
