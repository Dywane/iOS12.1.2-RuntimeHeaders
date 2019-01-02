/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemContext : PBCodable <NSCopying> {
    NSMutableArray * _autocompleteSuggestionLists;
    NSMutableArray * _auxiliaryControls;
    double  _creationDate;
    GEOABAssignmentResponse * _currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs * _currentEnvironmentManifestUrls;
    int  _deviceGmtOffset;
    NSMutableArray * _directionsRequests;
    NSMutableArray * _directionsResponses;
    NSMutableArray * _directionsWaypointPlaceInfos;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int creationDate : 1; 
        unsigned int originatingAuxiliaryControlIndex : 1; 
        unsigned int deviceGmtOffset : 1; 
        unsigned int pinType : 1; 
    }  _has;
    NSString * _lastSearchString;
    NSString * _lastUserTypedSearchString;
    GEORPMapLocation * _mapLocation;
    GEORPNavigationSettings * _navigationSettings;
    GEOPlace * _originalPlace;
    unsigned long long  _originatingAuxiliaryControlIndex;
    GEORPPersonalizedMaps * _personalizedMaps;
    int  _pinType;
    GEOPDPlace * _place;
    GEORPPlaceInfo * _placeInfo;
    GEOServicesState * _servicesState;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    NSString * _tileStateLog;
    GEORPTransitLineTileInfo * _transitLineTileInfo;
    NSMutableArray * _visibleTileSets;
}

@property (nonatomic, retain) NSMutableArray *autocompleteSuggestionLists;
@property (nonatomic, retain) NSMutableArray *auxiliaryControls;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (nonatomic, retain) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (nonatomic) int deviceGmtOffset;
@property (nonatomic, retain) NSMutableArray *directionsRequests;
@property (nonatomic, retain) NSMutableArray *directionsResponses;
@property (nonatomic, retain) NSMutableArray *directionsWaypointPlaceInfos;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasCurrentAbAssignmentResponse;
@property (nonatomic, readonly) bool hasCurrentEnvironmentManifestUrls;
@property (nonatomic) bool hasDeviceGmtOffset;
@property (nonatomic, readonly) bool hasLastSearchString;
@property (nonatomic, readonly) bool hasLastUserTypedSearchString;
@property (nonatomic, readonly) bool hasMapLocation;
@property (nonatomic, readonly) bool hasNavigationSettings;
@property (nonatomic, readonly) bool hasOriginalPlace;
@property (nonatomic) bool hasOriginatingAuxiliaryControlIndex;
@property (nonatomic, readonly) bool hasPersonalizedMaps;
@property (nonatomic) bool hasPinType;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceInfo;
@property (nonatomic, readonly) bool hasServicesState;
@property (nonatomic) bool hasSessionId;
@property (nonatomic, readonly) bool hasTileStateLog;
@property (nonatomic, readonly) bool hasTransitLineTileInfo;
@property (nonatomic, retain) NSString *lastSearchString;
@property (nonatomic, retain) NSString *lastUserTypedSearchString;
@property (nonatomic, retain) GEORPMapLocation *mapLocation;
@property (nonatomic, retain) GEORPNavigationSettings *navigationSettings;
@property (nonatomic, retain) GEOPlace *originalPlace;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;
@property (nonatomic, retain) GEORPPersonalizedMaps *personalizedMaps;
@property (nonatomic) int pinType;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEORPPlaceInfo *placeInfo;
@property (nonatomic, retain) GEOServicesState *servicesState;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, retain) NSString *tileStateLog;
@property (nonatomic, retain) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (nonatomic, retain) NSMutableArray *visibleTileSets;

+ (Class)autocompleteSuggestionListType;
+ (Class)auxiliaryControlType;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)visibleTileSetType;

- (void).cxx_destruct;
- (int)StringAsPinType:(id)arg1;
- (void)addAutocompleteSuggestionList:(id)arg1;
- (void)addAuxiliaryControl:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1;
- (id)autocompleteSuggestionLists;
- (unsigned long long)autocompleteSuggestionListsCount;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;
- (id)auxiliaryControls;
- (unsigned long long)auxiliaryControlsCount;
- (void)clearAutocompleteSuggestionLists;
- (void)clearAuxiliaryControls;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)clearVisibleTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)currentAbAssignmentResponse;
- (id)currentEnvironmentManifestUrls;
- (id)description;
- (int)deviceGmtOffset;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (id)directionsRequests;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (id)directionsResponses;
- (unsigned long long)directionsResponsesCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (id)directionsWaypointPlaceInfos;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (bool)hasCreationDate;
- (bool)hasCurrentAbAssignmentResponse;
- (bool)hasCurrentEnvironmentManifestUrls;
- (bool)hasDeviceGmtOffset;
- (bool)hasLastSearchString;
- (bool)hasLastUserTypedSearchString;
- (bool)hasMapLocation;
- (bool)hasNavigationSettings;
- (bool)hasOriginalPlace;
- (bool)hasOriginatingAuxiliaryControlIndex;
- (bool)hasPersonalizedMaps;
- (bool)hasPinType;
- (bool)hasPlace;
- (bool)hasPlaceInfo;
- (bool)hasServicesState;
- (bool)hasSessionId;
- (bool)hasTileStateLog;
- (bool)hasTransitLineTileInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastSearchString;
- (id)lastUserTypedSearchString;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)navigationSettings;
- (id)originalPlace;
- (unsigned long long)originatingAuxiliaryControlIndex;
- (id)personalizedMaps;
- (int)pinType;
- (id)pinTypeAsString:(int)arg1;
- (id)place;
- (id)placeInfo;
- (bool)readFrom:(id)arg1;
- (id)servicesState;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAutocompleteSuggestionLists:(id)arg1;
- (void)setAuxiliaryControls:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setCurrentAbAssignmentResponse:(id)arg1;
- (void)setCurrentEnvironmentManifestUrls:(id)arg1;
- (void)setDeviceGmtOffset:(int)arg1;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setDirectionsWaypointPlaceInfos:(id)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasDeviceGmtOffset:(bool)arg1;
- (void)setHasOriginatingAuxiliaryControlIndex:(bool)arg1;
- (void)setHasPinType:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setLastSearchString:(id)arg1;
- (void)setLastUserTypedSearchString:(id)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setNavigationSettings:(id)arg1;
- (void)setOriginalPlace:(id)arg1;
- (void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1;
- (void)setPersonalizedMaps:(id)arg1;
- (void)setPinType:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceInfo:(id)arg1;
- (void)setServicesState:(id)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTileStateLog:(id)arg1;
- (void)setTransitLineTileInfo:(id)arg1;
- (void)setVisibleTileSets:(id)arg1;
- (id)tileStateLog;
- (id)transitLineTileInfo;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (id)visibleTileSets;
- (unsigned long long)visibleTileSetsCount;
- (void)writeTo:(id)arg1;

@end
