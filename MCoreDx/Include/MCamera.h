#pragma once
#include "MMath.h"
#include "MObject.h"
class MCamera
{
public:
	MMatrix				m_matView;
	MMatrix				m_matProj;
	Vector3				m_vPos;
	Vector3				m_vTarget;
	Vector3				m_vLook;//z
	Vector3				m_vUp; //y
	Vector3				m_vRight;//x
public:
	bool	Init();
};

