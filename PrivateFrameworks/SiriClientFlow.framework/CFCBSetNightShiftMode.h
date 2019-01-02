/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (nonatomic, copy) NSNumber *active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *enable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic, copy) NSString *option;
@property (nonatomic, retain) CFCBNightShiftSchedule *schedule;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftMode;
+ (id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)active;
- (id)enable;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)mode;
- (id)option;
- (bool)requiresResponse;
- (id)schedule;
- (void)setActive:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setOption:(id)arg1;
- (void)setSchedule:(id)arg1;

@end
