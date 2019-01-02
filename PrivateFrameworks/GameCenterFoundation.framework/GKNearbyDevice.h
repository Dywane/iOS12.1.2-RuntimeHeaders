/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKNearbyDevice : NSObject {
    NSString * _deviceID;
    GKDiscovery * _discovery;
    GKPlayer * _player;
    long long  _state;
}

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) GKDiscovery *discovery;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) long long state;

+ (id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2;

- (void)dealloc;
- (id)deviceID;
- (id)discovery;
- (id)player;
- (void)sendDictionary:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
