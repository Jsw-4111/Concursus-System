#include "MockActionsModel.h"

MockActionsModel::MockActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction)
: ActionsModel(time, willOverrideMovement, typeOfAction) {
    completionTime = time;
    overridesMovement = willOverrideMovement;
    actionType = typeOfAction;
    performActionWasCalled = false;
};

MockActionsModel::~MockActionsModel() {}

void MockActionsModel::performAction() {
    performActionWasCalled = true;
}