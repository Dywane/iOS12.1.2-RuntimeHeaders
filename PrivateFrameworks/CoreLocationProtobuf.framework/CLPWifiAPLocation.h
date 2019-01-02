/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPWifiAPLocation : PBCodable <NSCopying> {
    NSString * _appBundleId;
    int  _channel;
    struct { 
        unsigned int scanTimestamp : 1; 
        unsigned int hidden : 1; 
        unsigned int serverHash : 1; 
    }  _has;
    int  _hidden;
    CLPLocation * _location;
    NSString * _mac;
    int  _rssi;
    double  _scanTimestamp;
    int  _serverHash;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) int channel;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasHidden;
@property (nonatomic) bool hasScanTimestamp;
@property (nonatomic) bool hasServerHash;
@property (nonatomic) int hidden;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic, retain) NSString *mac;
@property (nonatomic) int rssi;
@property (nonatomic) double scanTimestamp;
@property (nonatomic) int serverHash;

- (void).cxx_destruct;
- (id)appBundleId;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasHidden;
- (bool)hasScanTimestamp;
- (bool)hasServerHash;
- (unsigned long long)hash;
- (int)hidden;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)mac;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (double)scanTimestamp;
- (int)serverHash;
- (void)setAppBundleId:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasScanTimestamp:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setHidden:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMac:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setScanTimestamp:(double)arg1;
- (void)setServerHash:(int)arg1;
- (void)writeTo:(id)arg1;

@end
