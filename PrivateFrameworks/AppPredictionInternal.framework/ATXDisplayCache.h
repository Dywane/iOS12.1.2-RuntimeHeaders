/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXDisplayCache : NSObject <ATXActionProducerDelegate> {
    NSString * _cacheBasePath;
    NSArray * _producers;
    ATXActionCriteriaWorldState * _worldState;
}

@property (nonatomic, readonly) NSString *cacheBasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ATXActionCriteriaWorldState *worldState;

+ (id)firstUpdateDateForActions:(id)arg1;
+ (id)sharedDisplayCache;

- (void).cxx_destruct;
- (id)_criteriaForJobOnDate:(id)arg1;
- (void)actionProducerProducedNewActions:(id)arg1;
- (id)actions;
- (id)cacheBasePath;
- (id)filteredActionsFromActions:(id)arg1;
- (id)initWithProducers:(id)arg1 cacheBasePath:(id)arg2;
- (void)setUpdateJobForCriteria:(id)arg1;
- (void)setUpdateJobForDate:(id)arg1;
- (void)setWorldState:(id)arg1;
- (id)unFilteredActions;
- (void)updateLockscreenIfNeededOldAction:(id)arg1 newAction:(id)arg2 actionResponse:(id)arg3;
- (id)worldState;
- (void)writeToDisk;
- (void)writeToDiskActions:(id)arg1;
- (bool)writeToDiskIfNeeded;

@end
