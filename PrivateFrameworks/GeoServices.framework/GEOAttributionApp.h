/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributionApp : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSMutableArray * _handledSchemes;
    struct { 
        unsigned int restaurantReservationExtensionSupport : 1; 
        unsigned int supportsRestaurantQueueing : 1; 
        unsigned int supportsRestaurantReservations : 1; 
    }  _has;
    int  _restaurantReservationExtensionSupport;
    bool  _supportsRestaurantQueueing;
    bool  _supportsRestaurantReservations;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *handledSchemes;
@property (nonatomic) bool hasRestaurantReservationExtensionSupport;
@property (nonatomic) bool hasSupportsRestaurantQueueing;
@property (nonatomic) bool hasSupportsRestaurantReservations;
@property (nonatomic) int restaurantReservationExtensionSupport;
@property (nonatomic) bool supportsRestaurantQueueing;
@property (nonatomic) bool supportsRestaurantReservations;

+ (Class)handledSchemesType;

- (void).cxx_destruct;
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (void)addHandledSchemes:(id)arg1;
- (id)appBundleIdentifier;
- (void)clearHandledSchemes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handledSchemes;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (bool)hasRestaurantReservationExtensionSupport;
- (bool)hasSupportsRestaurantQueueing;
- (bool)hasSupportsRestaurantReservations;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)restaurantReservationExtensionSupport;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)setHasRestaurantReservationExtensionSupport:(bool)arg1;
- (void)setHasSupportsRestaurantQueueing:(bool)arg1;
- (void)setHasSupportsRestaurantReservations:(bool)arg1;
- (void)setRestaurantReservationExtensionSupport:(int)arg1;
- (void)setSupportsRestaurantQueueing:(bool)arg1;
- (void)setSupportsRestaurantReservations:(bool)arg1;
- (bool)supportsRestaurantQueueing;
- (bool)supportsRestaurantReservations;
- (void)writeTo:(id)arg1;

@end
