/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXObjectPool : NSObject {
    long long  _behavior;
    long long  _countLimit;
    bool  _isPerformingTransaction;
    NSMutableArray * _reusableObjects;
}

@property (nonatomic) long long behavior;
@property (nonatomic) long long countLimit;
@property (nonatomic, readonly) NSMutableArray *reusableObjects;

- (void).cxx_destruct;
- (void)_vacuum;
- (long long)behavior;
- (void)checkInObject:(id)arg1;
- (id)checkOutObjectPassingTest:(id /* block */)arg1 usingFactory:(id /* block */)arg2;
- (long long)countLimit;
- (id)init;
- (void)performTransaction:(id /* block */)arg1;
- (id)reusableObjects;
- (void)setBehavior:(long long)arg1;
- (void)setCountLimit:(long long)arg1;

@end
