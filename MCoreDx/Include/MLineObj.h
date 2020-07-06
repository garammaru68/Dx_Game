#pragma once
#include "MObject.h"
class MLineObj : public MObject
{
public:
	virtual void	CreateVertexData();
	virtual void	CreateIndexData();
	virtual bool	Draw(ID3D11DeviceContext* pContext,
		Vector3 vStart,
		Vector3 vEnd,
		Vector4 Color);
};

class MDirectionLineObj : public MObject
{
public:
	virtual void	CreateVertexData();
	virtual void	CreateIndexData();
};