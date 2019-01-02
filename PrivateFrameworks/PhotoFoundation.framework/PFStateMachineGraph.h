/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineGraph : NSObject {
    NSMutableDictionary * _globalTransitions;
    PFStateMachineNode * _initialNode;
    NSMutableDictionary * _nodes;
}

@property (retain) PFStateMachineNode *initialNode;

- (void).cxx_destruct;
- (void)addGlobalTransition:(id)arg1;
- (void)addGlobalTransitionOn:(id)arg1 to:(id)arg2;
- (id)addNode:(id)arg1;
- (id)dot:(bool)arg1;
- (id)findNodeWithName:(id)arg1;
- (id)init;
- (id)initialNode;
- (void)setInitialNode:(id)arg1;
- (id)transitionForEventName:(id)arg1;

@end
