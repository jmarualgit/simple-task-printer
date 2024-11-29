#include "doTasks.h"
#include "kitchenTasks.h"
#include "bedroomTasks.h"
#include "bathroomTasks.h"
#include "yardTasks.h"

void doKitchenTasks() 
{
	cleanTables();
	washDishes();
	putDishesBack();
}

void doBedroomTasks()
{
	makeTheBed();
	pickupBedroomTrash();
	cleanBedroomCabinets();
}

void doBathroomTasks()
{
	cleanToilet();
	cleanSink();
	polishBathroomSurfaces();
}

void doYardStacks()
{
	waterPlants();
	mowLawn();
	cleanupLeaves();
}

void doAllTasks()
{
	doKitchenTasks();
	doBedroomTasks();
	doBathroomTasks();
	doYardStacks();
}