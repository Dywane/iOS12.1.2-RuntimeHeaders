/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _deviceID;
    unsigned int  _errorCode;
    struct { 
        unsigned int deviceID : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) unsigned int deviceID;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasDeviceID;
@property (nonatomic) bool hasErrorCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceID;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasDeviceID;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceID:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDeviceID:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
