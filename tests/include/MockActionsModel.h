#ifndef MOCKACTIONSMODEL_H
#define MOCKACTIONSMODEL_H
#include "ActionsModel.h"

class MockActionsModel: public ActionsModel {
    public:
        MockActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction);
        virtual ~MockActionsModel();

        void performAction();

        bool performActionWasCalled;

};

#endif