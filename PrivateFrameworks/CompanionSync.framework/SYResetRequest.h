/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYResetRequest : PBRequest <NSCopying> {
    NSString * _cancelSessionID;
    SYMessageHeader * _header;
}

@property (nonatomic, retain) NSString *cancelSessionID;
@property (nonatomic, readonly) bool hasCancelSessionID;
@property (nonatomic, retain) SYMessageHeader *header;

- (void).cxx_destruct;
- (id)cancelSessionID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCancelSessionID;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCancelSessionID:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
