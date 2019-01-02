/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitStep : PBCodable <NSCopying> {
    unsigned int  _accessPointZilchIndex;
    GEOTransitArrivalInfo * _arrivalInfo;
    GEOTransitBaseFare * _baseFare;
    unsigned int  _defaultVehicleInfoIndex;
    unsigned int  _departureFrequency;
    unsigned int  _distanceInMeters;
    unsigned int  _endingStopIndex;
    NSMutableArray * _enterExitInfos;
    struct { 
        unsigned int accessPointZilchIndex : 1; 
        unsigned int defaultVehicleInfoIndex : 1; 
        unsigned int departureFrequency : 1; 
        unsigned int distanceInMeters : 1; 
        unsigned int endingStopIndex : 1; 
        unsigned int listTransitIncidentMessageIndex : 1; 
        unsigned int maneuverType : 1; 
        unsigned int routeDetailsSecondaryArtworkIndex : 1; 
        unsigned int significanceForEndNode : 1; 
        unsigned int startingStopIndex : 1; 
        unsigned int startingTime : 1; 
        unsigned int steppingTransitIncidentMessageIndex : 1; 
        unsigned int walkingIndex : 1; 
        unsigned int zilchIndex : 1; 
        unsigned int prioritizeTilesPreloading : 1; 
    }  _has;
    GEOInstructionSet * _instructions;
    unsigned int  _listTransitIncidentMessageIndex;
    GEOLatLng * _location;
    int  _maneuverType;
    bool  _prioritizeTilesPreloading;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _routeDetailsPrimaryArtworkIndexs;
    unsigned int  _routeDetailsSecondaryArtworkIndex;
    int  _significanceForEndNode;
    unsigned int  _startingStopIndex;
    unsigned int  _startingTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _steppingArtworkIndexs;
    unsigned int  _steppingTransitIncidentMessageIndex;
    GEOTransitSurcharge * _surcharge;
    NSMutableArray * _transferInfos;
    NSMutableArray * _vehicleInfos;
    unsigned int  _walkingIndex;
    unsigned int  _zilchIndex;
}

@property (nonatomic) unsigned int accessPointZilchIndex;
@property (nonatomic, retain) GEOTransitArrivalInfo *arrivalInfo;
@property (nonatomic, retain) GEOTransitBaseFare *baseFare;
@property (nonatomic) unsigned int defaultVehicleInfoIndex;
@property (nonatomic) unsigned int departureFrequency;
@property (nonatomic) unsigned int distanceInMeters;
@property (nonatomic) unsigned int endingStopIndex;
@property (nonatomic, retain) NSMutableArray *enterExitInfos;
@property (nonatomic) bool hasAccessPointZilchIndex;
@property (nonatomic, readonly) bool hasArrivalInfo;
@property (nonatomic, readonly) bool hasBaseFare;
@property (nonatomic) bool hasDefaultVehicleInfoIndex;
@property (nonatomic) bool hasDepartureFrequency;
@property (nonatomic) bool hasDistanceInMeters;
@property (nonatomic) bool hasEndingStopIndex;
@property (nonatomic, readonly) bool hasInstructions;
@property (nonatomic) bool hasListTransitIncidentMessageIndex;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasManeuverType;
@property (nonatomic) bool hasPrioritizeTilesPreloading;
@property (nonatomic) bool hasRouteDetailsSecondaryArtworkIndex;
@property (nonatomic) bool hasSignificanceForEndNode;
@property (nonatomic) bool hasStartingStopIndex;
@property (nonatomic) bool hasStartingTime;
@property (nonatomic) bool hasSteppingTransitIncidentMessageIndex;
@property (nonatomic, readonly) bool hasSurcharge;
@property (nonatomic) bool hasWalkingIndex;
@property (nonatomic) bool hasZilchIndex;
@property (nonatomic, retain) GEOInstructionSet *instructions;
@property (nonatomic) unsigned int listTransitIncidentMessageIndex;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int maneuverType;
@property (nonatomic) bool prioritizeTilesPreloading;
@property (nonatomic, readonly) unsigned int*routeDetailsPrimaryArtworkIndexs;
@property (nonatomic, readonly) unsigned long long routeDetailsPrimaryArtworkIndexsCount;
@property (nonatomic) unsigned int routeDetailsSecondaryArtworkIndex;
@property (nonatomic) int significanceForEndNode;
@property (nonatomic) unsigned int startingStopIndex;
@property (nonatomic) unsigned int startingTime;
@property (nonatomic, readonly) unsigned int*steppingArtworkIndexs;
@property (nonatomic, readonly) unsigned long long steppingArtworkIndexsCount;
@property (nonatomic) unsigned int steppingTransitIncidentMessageIndex;
@property (nonatomic, retain) GEOTransitSurcharge *surcharge;
@property (nonatomic, retain) NSMutableArray *transferInfos;
@property (nonatomic, retain) NSMutableArray *vehicleInfos;
@property (nonatomic) unsigned int walkingIndex;
@property (nonatomic) unsigned int zilchIndex;

+ (Class)enterExitInfoType;
+ (Class)transferInfoType;
+ (Class)vehicleInfoType;

- (void).cxx_destruct;
- (int)StringAsManeuverType:(id)arg1;
- (int)StringAsSignificanceForEndNode:(id)arg1;
- (unsigned int)accessPointZilchIndex;
- (void)addEnterExitInfo:(id)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)addTransferInfo:(id)arg1;
- (void)addVehicleInfo:(id)arg1;
- (id)arrivalInfo;
- (id)baseFare;
- (void)clearEnterExitInfos;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
- (void)clearSteppingArtworkIndexs;
- (void)clearTransferInfos;
- (void)clearVehicleInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)defaultVehicleInfoIndex;
- (unsigned int)departureFrequency;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceInMeters;
- (unsigned int)endingStopIndex;
- (id)enterExitInfoAtIndex:(unsigned long long)arg1;
- (id)enterExitInfos;
- (unsigned long long)enterExitInfosCount;
- (bool)hasAccessPointZilchIndex;
- (bool)hasArrivalInfo;
- (bool)hasBaseFare;
- (bool)hasDefaultVehicleInfoIndex;
- (bool)hasDepartureFrequency;
- (bool)hasDistanceInMeters;
- (bool)hasEndingStopIndex;
- (bool)hasInstructions;
- (bool)hasListTransitIncidentMessageIndex;
- (bool)hasLocation;
- (bool)hasManeuverType;
- (bool)hasPrioritizeTilesPreloading;
- (bool)hasRouteDetailsSecondaryArtworkIndex;
- (bool)hasSignificanceForEndNode;
- (bool)hasStartingStopIndex;
- (bool)hasStartingTime;
- (bool)hasSteppingTransitIncidentMessageIndex;
- (bool)hasSurcharge;
- (bool)hasWalkingIndex;
- (bool)hasZilchIndex;
- (unsigned long long)hash;
- (id)instructions;
- (bool)isEqual:(id)arg1;
- (long long)legTypeForManuever;
- (unsigned int)listTransitIncidentMessageIndex;
- (id)location;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)prioritizeTilesPreloading;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)routeDetailsPrimaryArtworkIndexs;
- (unsigned long long)routeDetailsPrimaryArtworkIndexsCount;
- (unsigned int)routeDetailsSecondaryArtworkIndex;
- (void)setAccessPointZilchIndex:(unsigned int)arg1;
- (void)setArrivalInfo:(id)arg1;
- (void)setBaseFare:(id)arg1;
- (void)setDefaultVehicleInfoIndex:(unsigned int)arg1;
- (void)setDepartureFrequency:(unsigned int)arg1;
- (void)setDistanceInMeters:(unsigned int)arg1;
- (void)setEndingStopIndex:(unsigned int)arg1;
- (void)setEnterExitInfos:(id)arg1;
- (void)setHasAccessPointZilchIndex:(bool)arg1;
- (void)setHasDefaultVehicleInfoIndex:(bool)arg1;
- (void)setHasDepartureFrequency:(bool)arg1;
- (void)setHasDistanceInMeters:(bool)arg1;
- (void)setHasEndingStopIndex:(bool)arg1;
- (void)setHasListTransitIncidentMessageIndex:(bool)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setHasPrioritizeTilesPreloading:(bool)arg1;
- (void)setHasRouteDetailsSecondaryArtworkIndex:(bool)arg1;
- (void)setHasSignificanceForEndNode:(bool)arg1;
- (void)setHasStartingStopIndex:(bool)arg1;
- (void)setHasStartingTime:(bool)arg1;
- (void)setHasSteppingTransitIncidentMessageIndex:(bool)arg1;
- (void)setHasWalkingIndex:(bool)arg1;
- (void)setHasZilchIndex:(bool)arg1;
- (void)setInstructions:(id)arg1;
- (void)setListTransitIncidentMessageIndex:(unsigned int)arg1;
- (void)setLocation:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setPrioritizeTilesPreloading:(bool)arg1;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRouteDetailsSecondaryArtworkIndex:(unsigned int)arg1;
- (void)setSignificanceForEndNode:(int)arg1;
- (void)setStartingStopIndex:(unsigned int)arg1;
- (void)setStartingTime:(unsigned int)arg1;
- (void)setSteppingArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setSteppingTransitIncidentMessageIndex:(unsigned int)arg1;
- (void)setSurcharge:(id)arg1;
- (void)setTransferInfos:(id)arg1;
- (void)setVehicleInfos:(id)arg1;
- (void)setWalkingIndex:(unsigned int)arg1;
- (void)setZilchIndex:(unsigned int)arg1;
- (int)significanceForEndNode;
- (id)significanceForEndNodeAsString:(int)arg1;
- (unsigned int)startingStopIndex;
- (unsigned int)startingTime;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)steppingArtworkIndexs;
- (unsigned long long)steppingArtworkIndexsCount;
- (unsigned int)steppingTransitIncidentMessageIndex;
- (id)surcharge;
- (id)transferInfoAtIndex:(unsigned long long)arg1;
- (id)transferInfos;
- (unsigned long long)transferInfosCount;
- (id)vehicleInfoAtIndex:(unsigned long long)arg1;
- (id)vehicleInfos;
- (unsigned long long)vehicleInfosCount;
- (unsigned int)walkingIndex;
- (void)writeTo:(id)arg1;
- (unsigned int)zilchIndex;

@end
