#pragma once
#include "fwddec.hpp"

#pragma pack(push, 1)
class CPed
{
public:
	char m_padding[0x10C8];
	CPlayerInfo *m_player_info;
};
#pragma pack(pop)

class CPedFactory
{
public:
	virtual ~CPedFactory() = default;
	CPed *m_local_ped;
};
