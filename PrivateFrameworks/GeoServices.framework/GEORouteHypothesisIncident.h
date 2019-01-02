/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding> {
    int  _routeIncidentSignificance;
    int  _routeIncidentType;
}

@property (nonatomic, readonly) int routeIncidentSignificance;
@property (nonatomic, readonly) int routeIncidentType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2;
- (int)routeIncidentSignificance;
- (int)routeIncidentType;

@end
