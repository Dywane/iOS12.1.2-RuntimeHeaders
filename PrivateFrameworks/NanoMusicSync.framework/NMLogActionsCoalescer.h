/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMLogActionsCoalescer : NSObject {
    NSObject<OS_os_log> * _category;
    id  _identifier;
    unsigned long long  _messageBufferLimit;
    unsigned long long  _partNumber;
    NSMutableArray * _pendingLogActions;
    NSString * _prefix;
}

@property (nonatomic) unsigned long long messageBufferLimit;
@property (nonatomic, retain) NSString *prefix;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1 toPendingActions:(id)arg2 limit:(unsigned long long)arg3;
- (id)_logMessageFromPendingLogActions:(id)arg1 includingPartNumber:(bool)arg2;
- (void)_writeLogMessageFromActions:(id)arg1 includingPartNumber:(bool)arg2;
- (void)addLogAction:(id)arg1;
- (void)flush;
- (id)initWithIdentifier:(id)arg1 logCategory:(id)arg2;
- (unsigned long long)messageBufferLimit;
- (id)prefix;
- (void)setMessageBufferLimit:(unsigned long long)arg1;
- (void)setPrefix:(id)arg1;

@end
