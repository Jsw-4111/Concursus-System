#ifndef ACTIONSMODEL_H
#define ACTIONSMODEL_H

#include <string>
#include "../Helpers/Enums.h"

// This is the model for the basic actions available in the system.
// Used as a guideline for actions that can be passed to the manager.

// This should be extended for all actions you plan to have in game.

// Time, in seconds, for action to complete. Used for syncing.
// animations.
float completionTime;

// Flag for if an action can be completed while moving.
bool overridesMovement;

// Enum for caller to identify what kind of action to perform.
ActionTypes actionType;

#endif