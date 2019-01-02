/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessChargingDeviceAirPods : SFWirelessChargingDevice <NSSecureCoding> {
    SFPowerSource * _casePowerSource;
    SFPowerSource * _leftBudPowerSource;
    SFPowerSource * _rightBudPowerSource;
}

@property (nonatomic, retain) SFPowerSource *casePowerSource;
@property (nonatomic, retain) SFPowerSource *leftBudPowerSource;
@property (nonatomic, retain) SFPowerSource *rightBudPowerSource;

- (void).cxx_destruct;
- (id)casePowerSource;
- (id)leftBudPowerSource;
- (id)rightBudPowerSource;
- (void)setCasePowerSource:(id)arg1;
- (void)setLeftBudPowerSource:(id)arg1;
- (void)setRightBudPowerSource:(id)arg1;

@end
