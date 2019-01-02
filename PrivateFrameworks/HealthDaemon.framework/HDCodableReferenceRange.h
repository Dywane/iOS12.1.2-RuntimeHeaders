/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableReferenceRange : PBCodable <NSCopying> {
    NSString * _identifier;
    HDCodableInspectableValueCollection * _valueRange;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasValueRange;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) HDCodableInspectableValueCollection *valueRange;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasValueRange;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValueRange:(id)arg1;
- (id)valueRange;
- (void)writeTo:(id)arg1;

@end
