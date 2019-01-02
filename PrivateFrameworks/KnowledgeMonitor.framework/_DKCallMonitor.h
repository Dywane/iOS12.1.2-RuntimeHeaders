/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKCallMonitor : _DKMonitor <CXCallObserverDelegate> {
    bool  _callInProgress;
    bool  _enabled;
    CXCallObserver * _observer;
}

@property (nonatomic) bool callInProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CXCallObserver *observer;
@property (readonly) Class superclass;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setCallInProgress:(bool)arg1;

- (void).cxx_destruct;
- (bool)anyCallInProgressOnCurrentDevice:(id)arg1;
- (bool)callInProgress;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)deactivate;
- (void)dealloc;
- (bool)enabled;
- (id)loadState;
- (id)observer;
- (void)saveState;
- (void)setCallInProgress:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
