#ifndef ENUMS_H
#define ENUMS_H

enum CombatPhaseKeys {
    planning, 
    action,
};

enum GameStateKeys {
    notInCombat,
    inCombat,
    menuOpen,
};

enum ActionTypes {
    movement,
    attack,
    interaction,
};

#endif