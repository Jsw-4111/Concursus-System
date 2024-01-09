#ifndef ACTIONSMANAGER_H
#define ACTIONSMANAGER_H

#include <deque>
#include <optional>
#include "ActionsModel.h"

using namespace std;

class ActionsManager {
public:
    std::deque<ActionsModel*> actionQueue;

    ActionsModel* currentActionPtr;

    ActionsManager();
    virtual ~ActionsManager();

    void queueAction(ActionsModel* actionPtr);
    void clearActions();

    // Should this be private? All instances of starting should come from queueAction and actionComplete
    void startNextAction();
    void actionComplete();
    void undoAction();
};
#endif