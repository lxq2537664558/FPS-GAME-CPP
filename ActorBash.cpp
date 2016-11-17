#include "Engine.h"
#include "Game.h"
#include "ObjectDummy.h"


#ifdef MEMORY_INFO
#define new new(__FILE__, __LINE__) 
#endif // MEMORY_INFO

CActorBase::CActorBase()
{
	m_vUp = vec3(0.0f, 0.0f, 1.0f);
	m_pObject = new CObjectDummy();
	m_pDummy = new CBodyDummy();
	m_pShape = new CShapeCapsule(1.0f, 1.0f);

	m_nFlush = 0;
	m_vPosition = Vec3_zero;
	m_vVelocity = Vec3_zero;
	m_fPhiAngle = 0.0f;			//��б��		��άƽ������ϵ�У�ֱ����Y������ķ�����X������֮��ļн�
	m_fThetaAngle = 0.0f;			//��λ�ǣ��������������뵱ǰ��������˳ʱ���߹��ĽǶ�

	for (int i = 0; i < NUM_STATES; i++)
	{
		m_pStates[i] = 0;
		m_pTimes[i] = 0.0f;
	}
}