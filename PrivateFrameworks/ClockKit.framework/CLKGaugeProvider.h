/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKGaugeProvider : NSObject <NSCopying, NSSecureCoding> {
    bool  _finalized;
    NSArray * _gaugeColorLocations;
    NSArray * _gaugeColors;
    bool  _paused;
    long long  _style;
}

@property (nonatomic) bool finalized;
@property (nonatomic, retain) NSArray *gaugeColorLocations;
@property (nonatomic, retain) NSArray *gaugeColors;
@property (nonatomic) bool paused;
@property (nonatomic) long long style;

+ (id)gaugeProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (bool)finalized;
- (id)gaugeColorLocations;
- (id)gaugeColors;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsTimerUpdates;
- (bool)paused;
- (double)progressFractionForNow:(id)arg1;
- (void)setFinalized:(bool)arg1;
- (void)setGaugeColorLocations:(id)arg1;
- (void)setGaugeColors:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (struct NSNumber { Class x1; }*)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (long long)style;
- (void)validate;

@end
