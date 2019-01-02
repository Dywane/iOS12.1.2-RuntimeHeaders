/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AREnvironmentProbeManager : NSObject {
    NSMutableArray * _anchorsToRemove;
    ARCubemapGenerator * _cubemapGenerator;
    AREnvironmentProbeUpdate * _currentProbeUpdate;
    NSMutableArray * _initialProbeIdentifiers;
    bool  _isReady;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraTransform;
    ARImageData * _lastImageData;
    struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _lastPlanes;
    double  _lastProbeUpdateTime;
    double  _minimumProbeUpdateInterval;
    long long  _mode;
    NSMutableDictionary * _probeIdentifiersByPlaneIdentifier;
    NSMutableArray * _probeUpdateQueue;
    NSMutableDictionary * _probesByIdentifier;
    NSMutableArray * _requestedProbeIdentifiers;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSObject<OS_dispatch_semaphore> * _textureDataSemaphore;
    NSUUID * _universeProbeIdentifier;
    NSMutableArray * _updatedProbeIdentifiers;
}

@property (nonatomic, readonly) long long mode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addProbeWithAnchor:(id)arg1 timestamp:(double)arg2 textureImmediately:(bool)arg3;
- (id)initWithMode:(long long)arg1;
- (void)insertIntoQueue:(id)arg1;
- (long long)mode;
- (id)probeWithIdentifier:(id)arg1 onPlane:(const struct { struct array<unsigned char, 16> { unsigned char x_1_1_1[16]; } x1; unsigned long long x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; } x3; struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; }*)arg2 planeIdentifier:(id)arg3;
- (void)requestTextureForProbe:(id)arg1;
- (id)updateProbesForTimestamp:(double)arg1 planes:(struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; })arg2 imageData:(id)arg3 pose:(id)arg4 addedAnchors:(id)arg5 removedAnchors:(id)arg6;
- (void)updateProbesFromExistingAnchors:(id)arg1;

@end
