/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRUsageInformation : NSObject {
    CRCarKitServiceClient * _serviceClient;
}

@property (nonatomic, retain) CRCarKitServiceClient *serviceClient;
@property (nonatomic, readonly) bool shouldSuggestCarPlayTips;

- (void).cxx_destruct;
- (id)init;
- (id)serviceClient;
- (void)setServiceClient:(id)arg1;
- (bool)shouldSuggestCarPlayTips;

@end
