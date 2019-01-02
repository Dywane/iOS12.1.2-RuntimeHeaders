/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKICSPreviewModel : NSObject {
    unsigned long long  _actionsState;
    NSData * _data;
    EKEventStore * _destStore;
    NSMutableArray * _importedEvents;
    unsigned long long  _options;
    bool  _shouldUpdate;
    EKEventStore * _tempStore;
    NSMutableArray * _unimportedEvents;
}

@property (nonatomic, readonly) unsigned long long actionsState;
@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned long long importedEventCount;
@property (nonatomic, readonly) NSArray *importedEvents;
@property (nonatomic, readonly) bool shouldUpdate;
@property (nonatomic, readonly) unsigned long long totalEventCount;
@property (nonatomic, readonly) unsigned long long unimportedEventCount;
@property (nonatomic, readonly) NSArray *unimportedEvents;

- (void).cxx_destruct;
- (unsigned long long)actionsState;
- (id)allEvents;
- (id)eventStore;
- (id)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (unsigned long long)importedEventCount;
- (id)importedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (bool)shouldUpdate;
- (unsigned long long)totalEventCount;
- (unsigned long long)unimportedEventCount;
- (id)unimportedEvents;

@end
