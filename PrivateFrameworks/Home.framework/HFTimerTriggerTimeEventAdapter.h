/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTimerTriggerTimeEventAdapter : NSObject {
    HFEventBuilder<HFTimeEventBuilder> * _eventBuilder;
}

@property (nonatomic, readonly) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;

+ (id)adapterWithEventBuilder:(id)arg1;

- (void).cxx_destruct;
- (id)createTriggerWithName:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3;
- (id)eventBuilder;
- (id)init;
- (id)initWithEventBuilder:(id)arg1;
- (id)updateTrigger:(id)arg1;

@end
