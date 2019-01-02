/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying> {
    struct { 
        unsigned int messageActionType : 1; 
        unsigned int version : 1; 
    }  _has;
    long long  _messageActionType;
    NSString * _originalMessageGuid;
    NSString * _otherHandle;
    NSData * _padding;
    unsigned int  _version;
}

@property (nonatomic) bool hasMessageActionType;
@property (nonatomic, readonly) bool hasOriginalMessageGuid;
@property (nonatomic, readonly) bool hasOtherHandle;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasVersion;
@property (nonatomic) long long messageActionType;
@property (nonatomic, retain) NSString *originalMessageGuid;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageActionType;
- (bool)hasOriginalMessageGuid;
- (bool)hasOtherHandle;
- (bool)hasPadding;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageActionType;
- (id)originalMessageGuid;
- (id)otherHandle;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageActionType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMessageActionType:(long long)arg1;
- (void)setOriginalMessageGuid:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
