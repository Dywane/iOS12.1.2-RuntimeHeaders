/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPLocation : PBCodable <NSCopying> {
    float  _altitude;
    NSMutableArray * _appBundleIdIndices;
    int  _context;
    float  _course;
    float  _courseAccuracy;
    CLPMotionActivity * _dominantMotionActivity;
    int  _floor;
    struct { 
        unsigned int altitude : 1; 
        unsigned int context : 1; 
        unsigned int course : 1; 
        unsigned int courseAccuracy : 1; 
        unsigned int floor : 1; 
        unsigned int horzUncSemiMaj : 1; 
        unsigned int horzUncSemiMajAz : 1; 
        unsigned int horzUncSemiMin : 1; 
        unsigned int modeIndicator : 1; 
        unsigned int motionActivityConfidence : 1; 
        unsigned int motionActivityType : 1; 
        unsigned int provider : 1; 
        unsigned int speed : 1; 
        unsigned int speedAccuracy : 1; 
        unsigned int verticalAccuracy : 1; 
        unsigned int isFromLocationController : 1; 
        unsigned int motionVehicleConnected : 1; 
        unsigned int motionVehicleConnectedStateChanged : 1; 
    }  _has;
    float  _horizontalAccuracy;
    float  _horzUncSemiMaj;
    float  _horzUncSemiMajAz;
    float  _horzUncSemiMin;
    bool  _isFromLocationController;
    double  _latitude;
    double  _longitude;
    int  _modeIndicator;
    CLPMotionActivity * _motionActivity;
    int  _motionActivityConfidence;
    int  _motionActivityType;
    bool  _motionVehicleConnected;
    bool  _motionVehicleConnectedStateChanged;
    int  _provider;
    CLPMotionActivity * _rawMotionActivity;
    CLPSatelliteReport * _satReport;
    float  _speed;
    float  _speedAccuracy;
    double  _timestamp;
    float  _verticalAccuracy;
}

@property (nonatomic) float altitude;
@property (nonatomic, retain) NSMutableArray *appBundleIdIndices;
@property (nonatomic) int context;
@property (nonatomic) float course;
@property (nonatomic) float courseAccuracy;
@property (nonatomic, retain) CLPMotionActivity *dominantMotionActivity;
@property (nonatomic) int floor;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasCourse;
@property (nonatomic) bool hasCourseAccuracy;
@property (nonatomic, readonly) bool hasDominantMotionActivity;
@property (nonatomic) bool hasFloor;
@property (nonatomic) bool hasHorzUncSemiMaj;
@property (nonatomic) bool hasHorzUncSemiMajAz;
@property (nonatomic) bool hasHorzUncSemiMin;
@property (nonatomic) bool hasIsFromLocationController;
@property (nonatomic) bool hasModeIndicator;
@property (nonatomic, readonly) bool hasMotionActivity;
@property (nonatomic) bool hasMotionActivityConfidence;
@property (nonatomic) bool hasMotionActivityType;
@property (nonatomic) bool hasMotionVehicleConnected;
@property (nonatomic) bool hasMotionVehicleConnectedStateChanged;
@property (nonatomic) bool hasProvider;
@property (nonatomic, readonly) bool hasRawMotionActivity;
@property (nonatomic, readonly) bool hasSatReport;
@property (nonatomic) bool hasSpeed;
@property (nonatomic) bool hasSpeedAccuracy;
@property (nonatomic) bool hasVerticalAccuracy;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic) float horzUncSemiMaj;
@property (nonatomic) float horzUncSemiMajAz;
@property (nonatomic) float horzUncSemiMin;
@property (nonatomic) bool isFromLocationController;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int modeIndicator;
@property (nonatomic, retain) CLPMotionActivity *motionActivity;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) int motionActivityType;
@property (nonatomic) bool motionVehicleConnected;
@property (nonatomic) bool motionVehicleConnectedStateChanged;
@property (nonatomic) int provider;
@property (nonatomic, retain) CLPMotionActivity *rawMotionActivity;
@property (nonatomic, retain) CLPSatelliteReport *satReport;
@property (nonatomic) float speed;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) float verticalAccuracy;

+ (Class)appBundleIdIndicesType;

- (void).cxx_destruct;
- (int)StringAsModeIndicator:(id)arg1;
- (void)addAppBundleIdIndices:(id)arg1;
- (float)altitude;
- (id)appBundleIdIndices;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdIndicesCount;
- (void)clearAppBundleIdIndices;
- (int)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)course;
- (float)courseAccuracy;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dominantMotionActivity;
- (int)floor;
- (bool)hasAltitude;
- (bool)hasContext;
- (bool)hasCourse;
- (bool)hasCourseAccuracy;
- (bool)hasDominantMotionActivity;
- (bool)hasFloor;
- (bool)hasHorzUncSemiMaj;
- (bool)hasHorzUncSemiMajAz;
- (bool)hasHorzUncSemiMin;
- (bool)hasIsFromLocationController;
- (bool)hasModeIndicator;
- (bool)hasMotionActivity;
- (bool)hasMotionActivityConfidence;
- (bool)hasMotionActivityType;
- (bool)hasMotionVehicleConnected;
- (bool)hasMotionVehicleConnectedStateChanged;
- (bool)hasProvider;
- (bool)hasRawMotionActivity;
- (bool)hasSatReport;
- (bool)hasSpeed;
- (bool)hasSpeedAccuracy;
- (bool)hasVerticalAccuracy;
- (unsigned long long)hash;
- (float)horizontalAccuracy;
- (float)horzUncSemiMaj;
- (float)horzUncSemiMajAz;
- (float)horzUncSemiMin;
- (bool)isEqual:(id)arg1;
- (bool)isFromLocationController;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (int)modeIndicator;
- (id)modeIndicatorAsString:(int)arg1;
- (id)motionActivity;
- (int)motionActivityConfidence;
- (int)motionActivityType;
- (bool)motionVehicleConnected;
- (bool)motionVehicleConnectedStateChanged;
- (int)provider;
- (id)rawMotionActivity;
- (bool)readFrom:(id)arg1;
- (id)satReport;
- (void)setAltitude:(float)arg1;
- (void)setAppBundleIdIndices:(id)arg1;
- (void)setContext:(int)arg1;
- (void)setCourse:(float)arg1;
- (void)setCourseAccuracy:(float)arg1;
- (void)setDominantMotionActivity:(id)arg1;
- (void)setFloor:(int)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasCourse:(bool)arg1;
- (void)setHasCourseAccuracy:(bool)arg1;
- (void)setHasFloor:(bool)arg1;
- (void)setHasHorzUncSemiMaj:(bool)arg1;
- (void)setHasHorzUncSemiMajAz:(bool)arg1;
- (void)setHasHorzUncSemiMin:(bool)arg1;
- (void)setHasIsFromLocationController:(bool)arg1;
- (void)setHasModeIndicator:(bool)arg1;
- (void)setHasMotionActivityConfidence:(bool)arg1;
- (void)setHasMotionActivityType:(bool)arg1;
- (void)setHasMotionVehicleConnected:(bool)arg1;
- (void)setHasMotionVehicleConnectedStateChanged:(bool)arg1;
- (void)setHasProvider:(bool)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasSpeedAccuracy:(bool)arg1;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (void)setHorizontalAccuracy:(float)arg1;
- (void)setHorzUncSemiMaj:(float)arg1;
- (void)setHorzUncSemiMajAz:(float)arg1;
- (void)setHorzUncSemiMin:(float)arg1;
- (void)setIsFromLocationController:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setModeIndicator:(int)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setMotionActivityConfidence:(int)arg1;
- (void)setMotionActivityType:(int)arg1;
- (void)setMotionVehicleConnected:(bool)arg1;
- (void)setMotionVehicleConnectedStateChanged:(bool)arg1;
- (void)setProvider:(int)arg1;
- (void)setRawMotionActivity:(id)arg1;
- (void)setSatReport:(id)arg1;
- (void)setSpeed:(float)arg1;
- (void)setSpeedAccuracy:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalAccuracy:(float)arg1;
- (float)speed;
- (float)speedAccuracy;
- (double)timestamp;
- (float)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
