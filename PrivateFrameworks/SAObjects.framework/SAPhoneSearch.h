/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneSearch : SADomainCommand

@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSNumber *faceTime;
@property (nonatomic, copy) NSNumber *faceTimeAudio;
@property (nonatomic, copy) NSNumber *isNew;
@property (nonatomic, copy) NSNumber *last;
@property (nonatomic, copy) NSNumber *missed;
@property (nonatomic, copy) NSNumber *outgoing;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSNumber *voiceMail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)contacts;
- (id)encodedClassName;
- (id)end;
- (id)faceTime;
- (id)faceTimeAudio;
- (id)groupIdentifier;
- (id)isNew;
- (id)last;
- (id)missed;
- (bool)mutatingCommand;
- (id)outgoing;
- (bool)requiresResponse;
- (void)setContacts:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setFaceTime:(id)arg1;
- (void)setFaceTimeAudio:(id)arg1;
- (void)setIsNew:(id)arg1;
- (void)setLast:(id)arg1;
- (void)setMissed:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setVoiceMail:(id)arg1;
- (id)start;
- (id)voiceMail;

@end
