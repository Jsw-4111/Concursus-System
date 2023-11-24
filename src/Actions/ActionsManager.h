#ifndef ACTIONSMANAGER_H
#define ACTIONSMANAGER_H

#include <deque>
#include <optional>
#include "ActionsModel.h"

using namespace std;

class ActionsManager {
public:
    deque<ActionsModel> actionQueue;

    optional<ActionsModel> currentAction;
    bool actionCompleted;

    ActionsManager();

    void queueAction(ActionsModel& action);
    void clearActions();
    void startNextAction();
    void actionComplete();
    void undoAction();
};
#endif