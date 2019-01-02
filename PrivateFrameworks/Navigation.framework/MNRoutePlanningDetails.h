/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRoutePlanningDetails : PBCodable <NSCopying> {
    bool  _copyTracesToCrashReporterDirectory;
    GEOComposedWaypoint * _destination;
    bool  _fullGuidance;
    bool  _guidancePromptsEnabled;
    struct { 
        unsigned int navigationType : 1; 
        unsigned int routeIndex : 1; 
        unsigned int transportType : 1; 
        unsigned int copyTracesToCrashReporterDirectory : 1; 
        unsigned int fullGuidance : 1; 
        unsigned int guidancePromptsEnabled : 1; 
        unsigned int isForReconnecting : 1; 
        unsigned int isTraceRecording : 1; 
        unsigned int shouldPrepare : 1; 
    }  _has;
    bool  _isForReconnecting;
    bool  _isTraceRecording;
    GEOLocation * _lastLocation;
    int  _navigationType;
    GEOComposedWaypoint * _origin;
    GEODirectionsRequest * _request;
    NSString * _requestingAppIdentifier;
    GEODirectionsResponse * _response;
    GEORoute * _route;
    GEORouteAttributes * _routeAttributes;
    unsigned int  _routeIndex;
    bool  _shouldPrepare;
    NSString * _traceFileName;
    int  _transportType;
}

@property (nonatomic) bool copyTracesToCrashReporterDirectory;
@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic) bool fullGuidance;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic) bool hasCopyTracesToCrashReporterDirectory;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic) bool hasFullGuidance;
@property (nonatomic) bool hasGuidancePromptsEnabled;
@property (nonatomic) bool hasIsForReconnecting;
@property (nonatomic) bool hasIsTraceRecording;
@property (nonatomic, readonly) bool hasLastLocation;
@property (nonatomic) bool hasNavigationType;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasRequestingAppIdentifier;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasRoute;
@property (nonatomic, readonly) bool hasRouteAttributes;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic) bool hasShouldPrepare;
@property (nonatomic, readonly) bool hasTraceFileName;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool isForReconnecting;
@property (nonatomic) bool isTraceRecording;
@property (nonatomic, retain) GEOLocation *lastLocation;
@property (nonatomic) int navigationType;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic, retain) GEORoute *route;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) bool shouldPrepare;
@property (nonatomic, retain) NSString *traceFileName;
@property (nonatomic) int transportType;

- (void).cxx_destruct;
- (int)StringAsNavigationType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)copyTracesToCrashReporterDirectory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)fullGuidance;
- (bool)guidancePromptsEnabled;
- (bool)hasCopyTracesToCrashReporterDirectory;
- (bool)hasDestination;
- (bool)hasFullGuidance;
- (bool)hasGuidancePromptsEnabled;
- (bool)hasIsForReconnecting;
- (bool)hasIsTraceRecording;
- (bool)hasLastLocation;
- (bool)hasNavigationType;
- (bool)hasOrigin;
- (bool)hasRequest;
- (bool)hasRequestingAppIdentifier;
- (bool)hasResponse;
- (bool)hasRoute;
- (bool)hasRouteAttributes;
- (bool)hasRouteIndex;
- (bool)hasShouldPrepare;
- (bool)hasTraceFileName;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isForReconnecting;
- (bool)isTraceRecording;
- (id)lastLocation;
- (void)mergeFrom:(id)arg1;
- (int)navigationType;
- (id)navigationTypeAsString:(int)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (id)request;
- (id)requestingAppIdentifier;
- (id)response;
- (id)route;
- (id)routeAttributes;
- (unsigned int)routeIndex;
- (void)setCopyTracesToCrashReporterDirectory:(bool)arg1;
- (void)setDestination:(id)arg1;
- (void)setFullGuidance:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHasCopyTracesToCrashReporterDirectory:(bool)arg1;
- (void)setHasFullGuidance:(bool)arg1;
- (void)setHasGuidancePromptsEnabled:(bool)arg1;
- (void)setHasIsForReconnecting:(bool)arg1;
- (void)setHasIsTraceRecording:(bool)arg1;
- (void)setHasNavigationType:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setHasShouldPrepare:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIsForReconnecting:(bool)arg1;
- (void)setIsTraceRecording:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setNavigationType:(int)arg1;
- (void)setOrigin:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)setShouldPrepare:(bool)arg1;
- (void)setTraceFileName:(id)arg1;
- (void)setTransportType:(int)arg1;
- (bool)shouldPrepare;
- (id)traceFileName;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
