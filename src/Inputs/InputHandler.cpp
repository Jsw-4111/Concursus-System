#include "InputHandler.h"
#include "Enums.h"

void InputHandler::clickedOnPath(int position) {
    // characterController.onMoveSignal(position);
}

void InputHandler::clickedOnExternalCharacter(void* node) {
    // startAction(target:node);
    // Create an Action on the Character Controller
}

void InputHandler::pressedSpecialAction(SpecialActions specialAction) {
    // Inputs are handled on the game engine and each engine specific wrapper should
    // have translaters for the actions
}

void InputHandler::clickedOnObject(void* node) {
    // startAction(target:node, parentObject, actionType);
    // Create an Action on the Character Controller
}