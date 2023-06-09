#include "ActionAmmeter.h"
#include "..\ApplicationManager.h"
#include "..\UI\UI.h"


ActionAmmeter::ActionAmmeter(ApplicationManager* pApp) :Action(pApp)
{

}

ActionAmmeter::~ActionAmmeter()
{

}

void ActionAmmeter::Execute()
{
	UI* pUI = pManager->GetUI();
	pManager->GetUI()->PrintMsg("Select a component: ");
	pUI->GetPointClicked(x, y);
	Component* pComp = pManager->GetComponentByCoordinates(x, y);
	if (pComp != nullptr)
		pManager->GetUI()->GetString("The current = " + to_string(pManager->CalculateCurrent()));
}

void ActionAmmeter::Undo()
{}

void ActionAmmeter::Redo()
{}