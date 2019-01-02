/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoRequestContext : NSObject <NSCopying, SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSNumber * _contentIdentifier;
    NSString * _playbackType;
    NSString * _playerGUID;
    NSData * _sic;
    NSArray * _sinfs;
}

@property (nonatomic, copy) NSData *SICData;
@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSNumber *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *playbackType;
@property (nonatomic, copy) NSString *playerGUID;
@property (nonatomic, copy) NSArray *sinfs;
@property (readonly) Class superclass;

- (id)SICData;
- (id)accountIdentifier;
- (id)contentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playbackType;
- (id)playerGUID;
- (void)setAccountIdentifier:(id)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setPlaybackType:(id)arg1;
- (void)setPlayerGUID:(id)arg1;
- (void)setSICData:(id)arg1;
- (void)setSinfs:(id)arg1;
- (id)sinfs;

@end
