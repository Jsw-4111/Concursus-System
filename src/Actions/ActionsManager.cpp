#include "ActionsManager.h"

class ActionsManager: public ActionsManager {
public:
    deque<ActionsModel> actionQueue;

    optional<ActionsModel> currentAction;
    bool actionCompleted;

    ActionsManager() {
        actionCompleted = false;
    }

    void queueAction(ActionsModel action) {
        actionQueue.push_back(action);
        if(currentAction == nullopt) {
            startNextAction();
        }
    }

    void clearActions() {
        actionQueue.clear();
    }

    void startNextAction() {
        if (actionQueue.size() > 0) {
            currentAction = actionQueue.front();
            actionQueue.pop_front();
        } else { 
            currentAction.reset();
        }
        actionCompleted = false;
    }

    void actionComplete() {
        actionCompleted = true;
        startNextAction();
    }

    void undoAction() {
        actionQueue.pop_back();
    }
};