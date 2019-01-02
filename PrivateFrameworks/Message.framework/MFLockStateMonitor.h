/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLockStateMonitor : NSObject {
    bool  _isLocked;
    MFObservable<MFObserver> * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic, readonly) MFObservable *lockStateObservable;
@property (getter=isLocked, readonly) bool locked;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_receiveLockState:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isLocked;
- (id)lockStateObservable;

@end
