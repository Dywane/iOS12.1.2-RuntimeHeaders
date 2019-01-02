/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable <NSCopying> {
    struct { 
        unsigned int travelTime : 1; 
    }  _has;
    int  _travelTime;
}

@property (nonatomic) bool hasTravelTime;
@property (nonatomic) int travelTime;

- (int)StringAsTravelTime:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTravelTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTravelTime:(bool)arg1;
- (void)setTravelTime:(int)arg1;
- (int)travelTime;
- (id)travelTimeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
