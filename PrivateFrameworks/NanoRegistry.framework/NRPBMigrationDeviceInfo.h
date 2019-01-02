/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying> {
    NSString * _advertisedName;
    NSData * _iD;
    NSString * _name;
}

@property (nonatomic, retain) NSString *advertisedName;
@property (nonatomic, readonly) bool hasAdvertisedName;
@property (nonatomic, readonly) bool hasID;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSData *iD;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)advertisedName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdvertisedName;
- (bool)hasID;
- (bool)hasName;
- (unsigned long long)hash;
- (id)iD;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setAdvertisedName:(id)arg1;
- (void)setID:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
