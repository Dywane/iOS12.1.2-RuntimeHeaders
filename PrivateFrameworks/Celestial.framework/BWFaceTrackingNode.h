/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFaceTrackingNode : BWNode {
    bool  _addDebugInfo;
    bool  _addMesh;
    bool  _dropBuffersWhenDepthIsDisabled;
    int  _faceKitMachThreadPriority;
    struct CVAFaceKit { } * _faceKitRef;
    bool  _frontCamera;
    bool  _mirrored;
    struct opaqueCMSimpleQueue { } * _nextSbufQueue;
    int  _orientation;
    bool  _processing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processingLock;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    struct OpaqueFigCaptureISPProcessingSession { } * _processingSession;
    bool  _setupDone;
    bool  _structuredLightOccluded;
}

+ (void)initialize;

- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_setupCVA;
- (void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)dropBuffersWhenDepthIsDisabled;
- (bool)frontCamera;
- (id)initWithProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1 figThreadPriority:(unsigned int)arg2 useDepth:(bool)arg3 queueDepth:(int)arg4;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (int)orientation;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDropBuffersWhenDepthIsDisabled:(bool)arg1;
- (void)setFrontCamera:(bool)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setOrientation:(int)arg1;

@end
