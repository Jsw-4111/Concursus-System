#include "ActionsModel.h"

ActionsModel::ActionsModel(float time = 0.0f, bool willOverrideMovement = false, ActionTypes typeOfAction = movement) {
    completionTime = time;
    overridesMovement = willOverrideMovement;
    actionType = typeOfAction;
}

ActionsModel::~ActionsModel() {}

void ActionsModel::performAction() {}