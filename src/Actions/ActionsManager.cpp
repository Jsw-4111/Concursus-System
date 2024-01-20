#include "ActionsManager.h"

    ActionsManager::ActionsManager() {
        currentActionPtr = NULL;
        actionQueue.clear();
    }

    ActionsManager::~ActionsManager() {
        clearActions();
        startNextAction();
    }

    void ActionsManager::queueAction(ActionsModel* action) {
        actionQueue.push_back(action);
        if(currentActionPtr == NULL) {
            startNextAction();
        }
    }

    void ActionsManager::clearActions() {
        actionQueue.clear();
    }

    void ActionsManager::actionComplete() {
        startNextAction();
    }

    void ActionsManager::undoAction() {
        actionQueue.pop_back();
    }

    void ActionsManager::startNextAction() {
        if (actionQueue.size() > 0) {
            currentActionPtr = actionQueue.front();
            actionQueue.pop_front();
        } else { 
            currentActionPtr = NULL;
        }
    }
