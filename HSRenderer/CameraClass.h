#ifndef _CAMERACLASS_H_
#define _CAMERACLASS_H_

#include <directxmath.h>

class CameraClass
{
public:
	CameraClass();
	CameraClass(const CameraClass&);
	~CameraClass();

	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	DirectX::XMFLOAT3 GetPosition() const { return DirectX::XMFLOAT3(m_positionX, m_positionY, m_positionZ); }
	DirectX::XMFLOAT3 GetRotation() const { return DirectX::XMFLOAT3(m_rotationX, m_rotationY, m_rotationZ); }

	void Render();
	void GetViewMatrix(DirectX::XMMATRIX&) const;

private:
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	DirectX::XMMATRIX m_viewMatrix;
};

#endif