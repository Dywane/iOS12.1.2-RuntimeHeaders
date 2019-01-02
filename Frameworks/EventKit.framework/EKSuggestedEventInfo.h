/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) bool changesAcknowledged;
@property (nonatomic, copy) NSString *opaqueKey;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *uniqueKey;

+ (Class)frozenClass;

- (unsigned long long)changedFields;
- (bool)changesAcknowledged;
- (id)copy;
- (id)description;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;
- (id)opaqueKey;
- (id)relatedEvent;
- (id)semanticIdentifier;
- (void)setChangedFields:(unsigned long long)arg1;
- (void)setChangesAcknowledged:(bool)arg1;
- (void)setOpaqueKey:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampAsDate:(id)arg1;
- (void)setUniqueKey:(id)arg1;
- (double)timestamp;
- (id)timestampAsDate;
- (id)uniqueKey;

@end
