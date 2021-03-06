/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUObservatory : NSObject {
    NSMutableArray * _observations;
    NSObject<OS_dispatch_queue> * _serializer;
}

- (void).cxx_destruct;
- (void)_addObservation:(id)arg1;
- (void)_notifyAllObserversForKey:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1 forKey:(long long)arg2;
- (void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)init;
- (void)notifyAllObserversForKey:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forKey:(long long)arg2;

@end
