/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPBookmarkStorage : PBCodable <NSCopying> {
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    MSPPlaceBookmark * _placeBookmark;
    double  _position;
    MSPRegionBookmark * _regionBookmark;
    MSPRouteBookmark * _routeBookmark;
    double  _timestamp;
    MSPTransitLineBookmark * _transitLineBookmark;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPlaceBookmark;
@property (nonatomic) bool hasPosition;
@property (nonatomic, readonly) bool hasRegionBookmark;
@property (nonatomic, readonly) bool hasRouteBookmark;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransitLineBookmark;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) MSPPlaceBookmark *placeBookmark;
@property (nonatomic) double position;
@property (nonatomic, retain) MSPRegionBookmark *regionBookmark;
@property (nonatomic, retain) MSPRouteBookmark *routeBookmark;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) MSPTransitLineBookmark *transitLineBookmark;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPlaceBookmark;
- (bool)hasPosition;
- (bool)hasRegionBookmark;
- (bool)hasRouteBookmark;
- (bool)hasTimestamp;
- (bool)hasTransitLineBookmark;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeBookmark;
- (double)position;
- (bool)readFrom:(id)arg1;
- (id)regionBookmark;
- (id)routeBookmark;
- (void)setHasPosition:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlaceBookmark:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setRegionBookmark:(id)arg1;
- (void)setRouteBookmark:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransitLineBookmark:(id)arg1;
- (void)setType:(int)arg1;
- (double)timestamp;
- (id)transitLineBookmark;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end