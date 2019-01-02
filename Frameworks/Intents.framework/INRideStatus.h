/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideStatus : NSObject <INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding> {
    NSArray * _additionalActionActivities;
    INRideCompletionStatus * _completionStatus;
    INRideDriver * _driver;
    CLPlacemark * _dropOffLocation;
    NSDate * _estimatedDropOffDate;
    NSDate * _estimatedPickupDate;
    NSDate * _estimatedPickupEndDate;
    long long  _phase;
    CLPlacemark * _pickupLocation;
    NSString * _rideIdentifier;
    INRideOption * _rideOption;
    INDateComponentsRange * _scheduledPickupTime;
    NSUserActivity * _userActivityForCancelingInApplication;
    INRideVehicle * _vehicle;
    NSArray * _waypoints;
}

@property (nonatomic, copy) NSArray *additionalActionActivities;
@property (nonatomic, copy) INRideCompletionStatus *completionStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INRideDriver *driver;
@property (nonatomic, copy) CLPlacemark *dropOffLocation;
@property (nonatomic, copy) NSDate *estimatedDropOffDate;
@property (nonatomic, copy) NSDate *estimatedPickupDate;
@property (nonatomic, copy) NSDate *estimatedPickupEndDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phase;
@property (nonatomic, copy) CLPlacemark *pickupLocation;
@property (nonatomic, copy) NSString *rideIdentifier;
@property (nonatomic, copy) INRideOption *rideOption;
@property (nonatomic, copy) INDateComponentsRange *scheduledPickupTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *userActivityForCancelingInApplication;
@property (nonatomic, copy) INRideVehicle *vehicle;
@property (nonatomic, copy) NSArray *waypoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)additionalActionActivities;
- (id)completionStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)driver;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)estimatedPickupEndDate;
- (id)initWithCoder:(id)arg1;
- (long long)phase;
- (id)pickupLocation;
- (id)rideIdentifier;
- (id)rideOption;
- (id)scheduledPickupTime;
- (void)setAdditionalActionActivities:(id)arg1;
- (void)setCompletionStatus:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setEstimatedDropOffDate:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setEstimatedPickupEndDate:(id)arg1;
- (void)setPhase:(long long)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideIdentifier:(id)arg1;
- (void)setRideOption:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (void)setUserActivityForCancelingInApplication:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)userActivityForCancelingInApplication;
- (id)vehicle;
- (id)waypoints;

@end
