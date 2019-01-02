/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBMapRegion : PBCodable <NSSecureCoding, _SFPBMapRegion> {
    double  _eastLng;
    double  _northLat;
    double  _southLat;
    double  _westLng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double eastLng;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (readonly) Class superclass;
@property (nonatomic) double westLng;

- (id)dictionaryRepresentation;
- (double)eastLng;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)northLat;
- (bool)readFrom:(id)arg1;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)westLng;
- (void)writeTo:(id)arg1;

@end