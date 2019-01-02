/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {
    bool  _useRouteConfigUpdatedNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedOutputDeviceTranslator;

- (void)addOutputDevice:(id)arg1 withOptions:(struct __CFDictionary { }*)arg2 toRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initForUsingRouteConfigUpdatedNotification:(bool)arg1;
- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (void)removeOutputDevice:(id)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (void)setOutputDevice:(id)arg1 withOptions:(struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3 completionHandler:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 withOptions:(struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;

@end
