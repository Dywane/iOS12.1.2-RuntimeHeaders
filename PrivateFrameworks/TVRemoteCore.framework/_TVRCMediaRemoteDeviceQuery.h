/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteDeviceQuery : NSObject {
    <_TVRCMediaRemoteDeviceQueryDelegate> * _delegate;
    void * _televisionController;
}

@property (nonatomic) <_TVRCMediaRemoteDeviceQueryDelegate> *delegate;

- (void).cxx_destruct;
- (void)_discoveredTelevision:(void*)arg1;
- (void)_removedTelevision:(void*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
