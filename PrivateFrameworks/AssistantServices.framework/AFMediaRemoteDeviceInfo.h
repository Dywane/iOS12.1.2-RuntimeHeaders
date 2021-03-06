/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString * _routeIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSString *routeIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)currentDevice;

- (void).cxx_destruct;
- (id)init;
- (id)routeIdentifier;
- (id)serialQueue;
- (void)setRouteIdentifier:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
