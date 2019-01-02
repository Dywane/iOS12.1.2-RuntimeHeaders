/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStringValue : PBCodable <NSCopying, NSSecureCoding, _INPBStringValue> {
    struct { }  _has;
    NSString * _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
