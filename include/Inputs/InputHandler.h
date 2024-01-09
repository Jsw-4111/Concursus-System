#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

// #include "CharacterController.h"
#include "Inputs_Enums.h"

class InputHandler {
public:
    // CharacterController characterController;

// Receives the player movement commands. Event receives key pressed, position returns
// the world location of the clicked location on a collidable WalkableTerrain object.
    void clickedOnPath(int position);

// Receives character interaction commands. This should check for events on other
// characters such as: right clicks on target, left clicks on target, etc.    
    void clickedOnExternalCharacter(void* node);

// Receives character action inputs. This should directly check button presses
// and pass them to the CharacterController.    
    void pressedSpecialAction(SpecialActions specialAction);

// Receives interaction inputs. This should check for events on the CollisionObject of
// your interactable objects (we use right clicks).
    void clickedOnObject(void* node);

};

#endif