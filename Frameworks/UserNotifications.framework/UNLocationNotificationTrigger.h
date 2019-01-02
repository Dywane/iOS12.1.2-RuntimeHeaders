/* Generated by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNLocationNotificationTrigger : UNNotificationTrigger {
    CLRegion * _region;
}

@property (nonatomic, readonly, copy) CLRegion *region;

+ (bool)supportsSecureCoding;
+ (id)triggerWithRegion:(id)arg1 repeats:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithRegion:(id)arg1 repeats:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)region;
- (bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end
