/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEffectsManager : NSObject {
    int  _cameraFrameCount;
    int  _consecutiveDroppedFrameCount;
    id  _delegate;
    int  _droppedFrameCount;
    NSMutableArray * _effectsArray;
    bool  _effectsRegistered;
    double  _effectsTimeoutThreshold;
    int  _failedFrameCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPrintTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSentTimestamp;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _loggingLock;
    int  _receivedFrameCount;
    int  _sentFrameCount;
    int  _thermalPressureLevel;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic) <VCEffectsManagerDelegate> *delegate;
@property (retain) NSMutableArray *effectsArray;

+ (id)sharedManager;

- (void)addStickerWithURL:(id)arg1 isFaceSticker:(bool)arg2 atPosition:(struct CGPoint { double x1; double x2; })arg3 identifier:(id)arg4;
- (void)capturedPixelBuffer:(struct __CVBuffer { }*)arg1 depthBuffer:(struct __CVBuffer { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 imageData:(id)arg4 toClient:(id)arg5;
- (void)capturedPixelBuffer:(struct __CVBuffer { }*)arg1 depthDataPixelBuffer:(struct __CVBuffer { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 imageData:(id)arg4;
- (bool)checkEffectsHealth;
- (void)clearAllStickers:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)effectsArray;
- (void)effectsRegistered:(bool)arg1;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(id)arg3 processTime:(id)arg4;
- (id)init;
- (bool)isEffectsOn;
- (bool)isFaceMeshTrackingEnabled;
- (void)registerBlocksForService;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)resetEffectsLogging;
- (void)setAnimoji:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectsArray:(id)arg1;
- (void)setMemoji:(id)arg1;
- (void)updateThermalLevel:(int)arg1;

@end
