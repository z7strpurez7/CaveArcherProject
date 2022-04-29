#include <memory>
#include <stack>
#include "State.h"

#ifndef GAMEENGINE_STATEMACHINE_H
#define GAMEENGINE_STATEMACHINE_H



typedef std::unique_ptr<State> StateRef;

class StateMachine{
public:
    StateMachine( ) { }
    ~StateMachine( ) { }

    void AddState(StateRef newState, bool isReplacing = true);
    void RemoveState( );

    void ProcessStateChanges( );

    StateRef &GetActiveState( );

private:
    std::stack<StateRef> _states;
    StateRef _newState;

    bool _isRemoving;
    bool _isAdding;
    bool _isReplacing;

};


#endif //GAMEENGINE_STATEMACHINE_H
