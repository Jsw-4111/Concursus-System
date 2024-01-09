#include <doctest.h>
#include "ActionsManager.h"
#include "MockActionsModel.h"

#include <iostream>

ActionsManager subject;
ActionsModel mockAction1 = MockActionsModel(0.0f, false, movement);
ActionsModel mockAction2 = MockActionsModel(0.0f, false, attack);
ActionsModel mockAction3 = MockActionsModel(0.0f, false, movement);
ActionsModel mockAction4 = MockActionsModel(0.0f, false, interaction);
ActionsModel mockAction5 = MockActionsModel(0.0f, false, movement);

deque<ActionsModel*> mockQueue;

void setup() {
    subject = ActionsManager();

    mockQueue = {&mockAction1, &mockAction2, &mockAction3, &mockAction4, &mockAction5};
    subject.actionQueue.swap(mockQueue);
}


TEST_CASE("ActionsModel::queueAction") {
    subject = ActionsManager();
    REQUIRE(subject.actionQueue.size() == 0);

    SUBCASE("adding an action to an empty queue starts the next action") {
        subject.queueAction(&mockAction1);

        CHECK(subject.currentActionPtr != NULL);
        CHECK(subject.actionQueue.size() == 0);
    }

    SUBCASE("adding actions to the queue will append those actions") {
        subject.queueAction(&mockAction1);
        subject.queueAction(&mockAction2);
        subject.queueAction(&mockAction3);
        subject.queueAction(&mockAction4);
        subject.queueAction(&mockAction5);

        CHECK(subject.currentActionPtr != NULL);
        CHECK(subject.actionQueue.size() == 4);
    }
};

TEST_CASE("ActionsModel::clearActions") {
    setup();

    subject.clearActions();

    CHECK(subject.actionQueue.size() == 0);
};

TEST_CASE("ActionsModel::startNextAction") {
    SUBCASE("actionQueue has entries") {
        setup();
        REQUIRE(subject.actionQueue.size() > 0);

        subject.startNextAction();

        ActionsModel* actualActionPtr = subject.currentActionPtr;

        CHECK(actualActionPtr == &mockAction1);
    }

    SUBCASE("actionQueue is empty") {
        subject = ActionsManager();

        REQUIRE(subject.actionQueue.size() == 0);

        subject.startNextAction();

        CHECK(subject.currentActionPtr == NULL);
    }
}

TEST_CASE("ActionsModel::actionComplete") {
    subject.queueAction(&mockAction1);

    subject.actionComplete();

    CHECK(subject.currentActionPtr == NULL);
}

TEST_CASE("ActionsModel::undoAction") {
    setup();
    
    subject.undoAction();

    CHECK(subject.actionQueue.back() == &mockAction4);
    CHECK(subject.actionQueue.size() == 4);
}