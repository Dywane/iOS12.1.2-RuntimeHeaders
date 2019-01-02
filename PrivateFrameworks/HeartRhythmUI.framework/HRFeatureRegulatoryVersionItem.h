/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRFeatureRegulatoryVersionItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {
    long long  _deviceType;
    NSString * _productName;
}

@property (nonatomic, readonly) long long cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteractive;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *titleString;
@property (nonatomic) <HRFeatureRegulatoryPanelDisplayUpdateDelegate> *updateDelegate;
@property (nonatomic, readonly, copy) NSAttributedString *valueString;

- (void).cxx_destruct;
- (long long)cellAccessoryType;
- (id)initWithProductName:(id)arg1 deviceType:(long long)arg2;
- (bool)isInteractive;
- (id)titleString;
- (id)valueString;

@end
