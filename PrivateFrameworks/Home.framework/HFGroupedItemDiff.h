/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFGroupedItemDiff : NSObject {
    id /* block */  _changeTest;
    NSArray * _fromGroups;
    NSArray * _groupOperations;
    NSArray * _itemOperations;
    NSArray * _toGroups;
}

@property (nonatomic, readonly, copy) NSArray *allOperations;
@property (nonatomic, copy) id /* block */ changeTest;
@property (nonatomic, copy) NSArray *fromGroups;
@property (nonatomic, copy) NSArray *groupOperations;
@property (nonatomic, copy) NSArray *itemOperations;
@property (nonatomic, readonly, copy) NSString *operationDescription;
@property (nonatomic, copy) NSArray *toGroups;

+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2;
+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_briefDescriptionForOperations:(id)arg1 type:(id)arg2;
- (id)_operationDescriptionWithPrefix:(id)arg1;
- (void)_performDiff;
- (id)_performItemDiffFromGroup:(id)arg1 atIndex:(id)arg2 toGroup:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)allOperations;
- (id /* block */)changeTest;
- (id)debugDescription;
- (id)description;
- (id)fromGroups;
- (id)groupOperations;
- (id)initWithFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(id /* block */)arg3;
- (id)itemOperations;
- (id)operationDescription;
- (void)setChangeTest:(id /* block */)arg1;
- (void)setFromGroups:(id)arg1;
- (void)setGroupOperations:(id)arg1;
- (void)setItemOperations:(id)arg1;
- (void)setToGroups:(id)arg1;
- (id)toGroups;

@end
