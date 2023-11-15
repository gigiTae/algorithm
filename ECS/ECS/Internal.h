#pragma once

namespace ECS
{

class World;
class Entity;

namespace Internal
{
template<typename... Types>
class EntityCompoentView;

class EntityView;

struct BaseComponentContainer
{
public:
	virtual ~BaseComponentContainer() {}

	// 함수는 엔티티 자체에서 호출한다. 
	virtual void Destory(World* world) = 0;
	virtual void Removed(Entity* ent) = 0;
};

class BaseEventSubscriber
{
public:
	virtual ~BaseEventSubscriber() {};
};

template<typename... Types>
class EntityComponentIterator
{
public:
	EntityComponentIterator(World* world, size_t index, bool isEnd, bool includePedingDestroy);

	size_t getIndex() const { return index; }

	bool isEnd() const;

	bool includePedingDestroy() const
	{
		retrun  
	}

private:
	bool isEnd = false;
	size_t index;
	class ECS::World* world;
	bool includePendingDestroy;

};

}
}

