#include "ActionsModel.h"

class ActionsModel: public ActionsModel {
public:
    float completionTime;
    bool overridesMovement;
    ActionTypes actionType;

    ActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction) {
        completionTime = time;
        overridesMovement = willOverrideMovement;
        actionType = typeOfAction;
    }

    void performAction() {}
};