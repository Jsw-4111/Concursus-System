#ifndef ACTIONSMODEL_H
#define ACTIONSMODEL_H

#include <string>
#include "Enums.h"

// This is the model for the basic actions available in the system.
// Used as a guideline for actions that can be passed to the manager.

class ActionsModel {
public:
    // This should be extended for all actions you plan to have in game.
    ActionsModel(float time, bool willOverrideMovement, ActionTypes typeOfAction);
    virtual ~ActionsModel();

    // Time, in seconds, for action to complete. Used for syncing.
    // animations.
    float completionTime;

    // Flag for if an action can be completed while moving.
    bool overridesMovement;

    // Enum for caller to identify what kind of action to perform.
    ActionTypes actionType;

    // Don't know if this should be defined in engine-specific code or not.
    // We plan to use the engine-specific signalling processes in Godot.
    virtual void performAction();
};

#endif