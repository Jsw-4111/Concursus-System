#include "InputHandler.h"
#include "Enums.h"


class InputHandler: public InputHandler
{
    public:
      CharacterController characterController;

// Receives the player movement commands. Event receives key pressed, position returns
// the world location of the clicked location on a collidable WalkableTerrain object.
    void clickedOnPath(int position){
        characterController.onMoveSignal(position);
    }

// Receives character interaction commands. This should check for events on other
// characters such as: right clicks on target, left clicks on target, etc.    
    void clickedOnExternalCharacter(void* node){
        // startAction(target:node);
        // Create an Action on the Character Controller
    }

// Receives character action inputs. This should directly check button presses
// and pass them to the CharacterController.    
    void pressedSpecialAction(SpecialActions specialAction){
        // Inputs are handled on the game engine and each engine specific wrapper should
        // have translaters for the actions
    }

// Receives interaction inputs. This should check for events on the CollisionObject of
// your interactable objects (we use right clicks).
    void clickedOnObject(void* node){
        // startAction(target:node, parentObject, actionType);
        // Create an Action on the Character Controller
    }
};