#pragma once
#ifndef __ACTOR_BASE_H__
#define __ACTOR_BASE_H__

#include "Shape.h"
#include "Bounds.h"

class CActorBase
{    
	CActorBase();
	virtual ~CActorBase();

	void SetEnabled(int enable);
	int IsEnabled() const;

	void Update(float ifps);

	// intersection mask
	void SetIntersectionMask(int mask);
	int GetIntersectionMask() const;

	    // collision
    void SetCollision(int collision);
    int GetCollision() const;
        
    // collision mask
    void SetCollisionMask(int mask);
    int GetCollisionMask() const;
        
    // collision radius
    void SetCollisionRadius(float radius);
    float GetCollisionRadius() const;
        
    // collision height
    void SetCollisionHeight(float height);
    float GetCollisionHeight() const;
        
    // maximum friction	最大摩擦力值
    void SetFriction(float friction);
    float GetFriction() const;
        
    // minimum velocity	最小速度
    void SetMinVelocity(float velocity);
    float GetMinVelocity() const;
        
    // maximum velocity 最大速度
    void SetMaxVelocity(float velocity);
    float GetMaxVelocity() const;



	enum {            //状态
		STATE_FORWARD = 0,
		STATE_BACKWARD,
		STATE_MOVE_LEFT,
		STATE_MOVE_RIGHT,
		STATE_CROUCH,	//蹲伏
		STATE_JUMP,
		STATE_RUN,
		NUM_STATES,
	};


};