/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNBufferedObserver : NSObject <CNObserver> {
    <CNObserver> * _observer;
    CNSuspendableSchedulerDecorator * _observerScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNObserver> *observer;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *observerScheduler;
@property (readonly) Class superclass;

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;
- (id)observer;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)observerScheduler;
- (void)resume;

@end
