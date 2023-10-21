#include "ActionsModel.h"

class ActionsModel {
    public:
        ActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction) {
            completionTime = time;
            overridesMovement = willOverrideMovement;
            actionType = typeOfAction;
        }

        virtual void performAction() = 0;
};