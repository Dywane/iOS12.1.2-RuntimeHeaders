/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginMediaRemoteCommandHandler : NSObject <NMROriginCommandHandler> {
    NSString * _applicationBundleIdentifier;
    NMROrigin * _origin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NMROrigin *origin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateApplicationBundleIdentifier;
- (id)initWithOrigin:(id)arg1;
- (id)origin;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(bool)arg3;

@end
