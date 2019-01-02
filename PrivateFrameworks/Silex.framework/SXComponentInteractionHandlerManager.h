/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager> {
    NSMapTable * _interactionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *interactionHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
- (id)componentViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (id)interactionHandlers;
- (id)interactionsForComponentView:(id)arg1;
- (id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;
- (void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
- (void)updateUserInteractionForComponentView:(id)arg1;

@end
