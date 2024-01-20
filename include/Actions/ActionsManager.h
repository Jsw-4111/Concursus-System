#ifndef ACTIONSMANAGER_H
#define ACTIONSMANAGER_H

#include <deque>
#include <optional>
#include "ActionsModel.h"

class ActionsManager {
public:
    std::deque<ActionsModel*> actionQueue;

    ActionsModel* currentActionPtr;

    ActionsManager();
    virtual ~ActionsManager();

    void queueAction(ActionsModel* actionPtr);
    void clearActions();

    void actionComplete();
    void undoAction();

private:
    void startNextAction();
};
#endif