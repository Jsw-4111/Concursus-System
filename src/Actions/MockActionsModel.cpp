#include "ActionsModel.cpp"

class MockActionsModel: public ActionsModel {
    public:
        MockActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction)
        : ActionsModel(time, willOverrideMovement, typeOfAction) {};

        bool performActionWasCalled = false;
        void performAction() {
            performActionWasCalled = true;
        }
};