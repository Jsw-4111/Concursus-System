#include "../../src/Actions/ActionsManager.h"
#include "../doctest.h"

ActionsManager subject = ActionsManager();
ActionsModel mockAction1 = ActionsModel(0.0f, false, movement);
ActionsModel mockAction2 = ActionsModel(0.0f, false, attack);
ActionsModel mockAction3 = ActionsModel(0.0f, false, movement);
ActionsModel mockAction4 = ActionsModel(0.0f, false, interaction);
ActionsModel mockAction5 = ActionsModel(0.0f, false, movement);

deque<ActionsModel> mockQueue;

TEST_CASE("ActionsModel::queueAction") {
    subject.queueAction(mockAction1);

    CHECK(subject.actionQueue.size() == 1);
};

TEST_CASE("ActionsModel::clearActions") {
    subject.actionQueue.swap(mockQueue);

    subject.clearActions();

    CHECK(subject.actionQueue.size() == 0);
};

TEST_CASE("ActionsModel::startNextAction") {
    SUBCASE("actionQueue has entries") {
        subject.queueAction(mockAction1);
        REQUIRE(subject.actionQueue.size() > 0);

        subject.startNextAction();

        ActionsModel actual = *move(subject.currentAction);

        CHECK(&actual == &mockAction1);
    }

    SUBCASE("actionQueue is empty") {
        REQUIRE(subject.actionQueue.size() == 0);

        subject.startNextAction();

        CHECK(subject.currentAction == nullopt);
    }
    CHECK_FALSE(subject.actionCompleted);
}

TEST_CASE("ActionsModel::actionComplete") {
    subject.actionCompleted = false;
    REQUIRE_FALSE(subject.actionCompleted);

    subject.actionComplete();

    CHECK(subject.actionCompleted == true);
}

TEST_CASE("ActionsModel::undoAction") {
    subject.actionQueue.swap(mockQueue);

    subject.undoAction();

    CHECK(&subject.actionQueue.back() == &mockAction4);
    CHECK(subject.actionQueue.size() == 4);
}