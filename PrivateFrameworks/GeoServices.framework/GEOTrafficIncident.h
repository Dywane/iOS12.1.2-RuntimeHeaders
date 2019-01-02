/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    double  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int lastUpdated : 1; 
        unsigned int startTime : 1; 
        unsigned int uID : 1; 
        unsigned int type : 1; 
        unsigned int vertexCount : 1; 
        unsigned int vertexOffset : 1; 
    }  _has;
    NSString * _info;
    double  _lastUpdated;
    NSString * _location;
    double  _startTime;
    NSString * _title;
    int  _type;
    long long  _uID;
    int  _vertexCount;
    int  _vertexOffset;
}

@property (nonatomic) double endTime;
@property (nonatomic) bool hasEndTime;
@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic) bool hasLastUpdated;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUID;
@property (nonatomic) bool hasVertexCount;
@property (nonatomic) bool hasVertexOffset;
@property (nonatomic, retain) NSString *info;
@property (nonatomic) double lastUpdated;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;
@property (nonatomic) long long uID;
@property (nonatomic) int vertexCount;
@property (nonatomic) int vertexOffset;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasEndTime;
- (bool)hasInfo;
- (bool)hasLastUpdated;
- (bool)hasLocation;
- (bool)hasStartTime;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasUID;
- (bool)hasVertexCount;
- (bool)hasVertexOffset;
- (unsigned long long)hash;
- (id)info;
- (bool)isEqual:(id)arg1;
- (double)lastUpdated;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasLastUpdated:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setHasVertexCount:(bool)arg1;
- (void)setHasVertexOffset:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setLastUpdated:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(long long)arg1;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (double)startTime;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)uID;
- (int)vertexCount;
- (int)vertexOffset;
- (void)writeTo:(id)arg1;

@end
