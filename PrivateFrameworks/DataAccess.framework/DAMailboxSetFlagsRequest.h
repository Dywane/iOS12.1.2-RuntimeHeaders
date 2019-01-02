/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {
    unsigned long long  _offFlags;
    unsigned long long  _onFlags;
}

@property (nonatomic) unsigned long long offFlags;
@property (nonatomic) unsigned long long onFlags;

- (id)description;
- (unsigned long long)hash;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)offFlags;
- (unsigned long long)onFlags;
- (void)setOffFlags:(unsigned long long)arg1;
- (void)setOnFlags:(unsigned long long)arg1;

@end
