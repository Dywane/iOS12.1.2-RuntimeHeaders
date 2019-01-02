/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAStep : PBCodable <NSCopying> {
    unsigned int  _distanceRemaining;
    unsigned int  _expectedTime;
    struct { 
        unsigned int distanceRemaining : 1; 
        unsigned int expectedTime : 1; 
        unsigned int stepID : 1; 
        unsigned int zilchPointIndex : 1; 
    }  _has;
    unsigned int  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    int  _zilchPointIndex;
}

@property (nonatomic) unsigned int distanceRemaining;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) bool hasDistanceRemaining;
@property (nonatomic) bool hasExpectedTime;
@property (nonatomic) bool hasStepID;
@property (nonatomic, readonly) bool hasTimeCheckpoints;
@property (nonatomic) bool hasZilchPointIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) int zilchPointIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceRemaining;
- (unsigned int)expectedTime;
- (bool)hasDistanceRemaining;
- (bool)hasExpectedTime;
- (bool)hasStepID;
- (bool)hasTimeCheckpoints;
- (bool)hasZilchPointIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceRemaining:(unsigned int)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasDistanceRemaining:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasZilchPointIndex:(bool)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setZilchPointIndex:(int)arg1;
- (unsigned int)stepID;
- (id)timeCheckpoints;
- (void)writeTo:(id)arg1;
- (int)zilchPointIndex;

@end
