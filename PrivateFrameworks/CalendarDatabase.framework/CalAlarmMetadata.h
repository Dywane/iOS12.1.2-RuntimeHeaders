/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CalAlarmMetadata : NSObject <NSSecureCoding> {
    NSArray * _attach;
    NSArray * _attendee;
    NSString * _description;
    NSString * _summary;
}

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) NSString *description;
@property (retain) NSString *summary;

+ (id)metadataWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToAlarm:(id)arg1;
- (id)attach;
- (id)attendee;
- (id)dataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSAlarm:(id)arg1;
- (void)setAttach:(id)arg1;
- (void)setAttendee:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
