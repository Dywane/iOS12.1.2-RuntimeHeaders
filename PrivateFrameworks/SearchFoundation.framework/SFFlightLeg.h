/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFFlightLeg : NSObject <NSCopying, NSSecureCoding, SFFlightLeg> {
    NSDate * _arrivalActualTime;
    SFAirport * _arrivalAirport;
    NSString * _arrivalGate;
    NSDate * _arrivalGateTime;
    NSDate * _arrivalPublishedTime;
    NSDate * _arrivalRunwayTime;
    NSString * _arrivalTerminal;
    NSString * _baggageClaim;
    NSDate * _departureActualTime;
    SFAirport * _departureAirport;
    NSString * _departureGate;
    NSDate * _departureGateClosedTime;
    NSDate * _departurePublishedTime;
    NSDate * _departureRunwayTime;
    NSString * _departureTerminal;
    SFAirport * _divertedAirport;
    struct { 
        unsigned int status : 1; 
    }  _has;
    int  _status;
    NSString * _title;
}

@property (nonatomic, copy) NSDate *arrivalActualTime;
@property (nonatomic, retain) SFAirport *arrivalAirport;
@property (nonatomic, copy) NSString *arrivalGate;
@property (nonatomic, copy) NSDate *arrivalGateTime;
@property (nonatomic, copy) NSDate *arrivalPublishedTime;
@property (nonatomic, copy) NSDate *arrivalRunwayTime;
@property (nonatomic, copy) NSString *arrivalTerminal;
@property (nonatomic, copy) NSString *baggageClaim;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDate *departureActualTime;
@property (nonatomic, retain) SFAirport *departureAirport;
@property (nonatomic, copy) NSString *departureGate;
@property (nonatomic, copy) NSDate *departureGateClosedTime;
@property (nonatomic, copy) NSDate *departurePublishedTime;
@property (nonatomic, copy) NSDate *departureRunwayTime;
@property (nonatomic, copy) NSString *departureTerminal;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFAirport *divertedAirport;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalActualTime;
- (id)arrivalAirport;
- (id)arrivalGate;
- (id)arrivalGateTime;
- (id)arrivalPublishedTime;
- (id)arrivalRunwayTime;
- (id)arrivalTerminal;
- (id)baggageClaim;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureActualTime;
- (id)departureAirport;
- (id)departureGate;
- (id)departureGateClosedTime;
- (id)departurePublishedTime;
- (id)departureRunwayTime;
- (id)departureTerminal;
- (id)dictionaryRepresentation;
- (id)divertedAirport;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setArrivalActualTime:(id)arg1;
- (void)setArrivalAirport:(id)arg1;
- (void)setArrivalGate:(id)arg1;
- (void)setArrivalGateTime:(id)arg1;
- (void)setArrivalPublishedTime:(id)arg1;
- (void)setArrivalRunwayTime:(id)arg1;
- (void)setArrivalTerminal:(id)arg1;
- (void)setBaggageClaim:(id)arg1;
- (void)setDepartureActualTime:(id)arg1;
- (void)setDepartureAirport:(id)arg1;
- (void)setDepartureGate:(id)arg1;
- (void)setDepartureGateClosedTime:(id)arg1;
- (void)setDeparturePublishedTime:(id)arg1;
- (void)setDepartureRunwayTime:(id)arg1;
- (void)setDepartureTerminal:(id)arg1;
- (void)setDivertedAirport:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)status;
- (id)title;

@end
