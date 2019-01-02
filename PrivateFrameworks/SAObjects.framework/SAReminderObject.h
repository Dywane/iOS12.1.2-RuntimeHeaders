/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderObject : SADomainObject

@property (nonatomic, copy) NSString *alternateSubject;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, copy) NSString *dueDateTimeZoneId;
@property (nonatomic) bool important;
@property (nonatomic, copy) NSArray *lists;
@property (nonatomic, retain) <SAReminderPayload> *payload;
@property (nonatomic, retain) SAReminderRecurrence *recurrence;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, retain) SAReminderListObject *toList;
@property (nonatomic, retain) SAReminderTrigger *trigger;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)alternateSubject;
- (bool)completed;
- (id)dueDate;
- (id)dueDateTimeZoneId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)important;
- (id)lists;
- (id)payload;
- (id)recurrence;
- (void)setAlternateSubject:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateTimeZoneId:(id)arg1;
- (void)setImportant:(bool)arg1;
- (void)setLists:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToList:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)subject;
- (id)toList;
- (id)trigger;

@end
