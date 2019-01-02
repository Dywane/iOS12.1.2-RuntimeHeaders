/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometer : NSObject {
    <CMOdometerDelegate> * _delegate;
    CMOdometerProxy * _odometerProxy;
}

@property (nonatomic) <CMOdometerDelegate> *delegate;
@property (nonatomic, readonly) CMOdometerProxy *odometerProxy;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)odometerProxy;
- (void)setDelegate:(id)arg1;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)stopOdometerUpdates;

@end
