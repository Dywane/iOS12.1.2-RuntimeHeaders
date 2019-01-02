/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRunVoiceCommandIntent : PBCodable <NSCopying, NSSecureCoding, _INPBRunVoiceCommandIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBVoiceCommandDeviceInformation * _originDevice;
    _INPBDataString * _voiceCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasOriginDevice;
@property (nonatomic, readonly) bool hasVoiceCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBVoiceCommandDeviceInformation *originDevice;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *voiceCommand;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (bool)hasVoiceCommand;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)originDevice;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOriginDevice:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)voiceCommand;
- (void)writeTo:(id)arg1;

@end
