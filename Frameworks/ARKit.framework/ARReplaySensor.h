/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplaySensor : NSObject <ARInternalSessionObserver, ARSensor> {
    int  _accelDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor * _accelOutputMetadataAdaptor_CV3D;
    float  _advanceFramesPerSecondMultiplier;
    NSMutableArray * _arAccelerometerData;
    NSMutableArray * _arDeviceOrientationData;
    NSMutableArray * _arGyroData;
    NSMutableArray * _arImageData;
    AVURLAsset * _asset;
    AVAssetReader * _assetReader;
    ARImageCroppingTechnique * _croppingTechnique;
    NSSet * _customDataClasses;
    id /* block */  _customDataGetter;
    AVAssetReaderOutputMetadataAdaptor * _customDataOutputMetadataAdaptor;
    <ARSensorDelegate> * _delegate;
    AVAssetReaderTrackOutput * _depthOutput;
    NSString * _deviceModel;
    int  _deviceOrientationDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _deviceOrientationOutputMetadataAdaptor;
    bool  _displaySynchronizationMarker;
    long long  _displaySynchronizationMarkerFrames;
    unsigned long long  _forcePlaybackFramesPerSecond;
    double  _frameRateScale;
    int  _gyroDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor * _gyroOutputMetadataAdaptor_CV3D;
    int  _imageIndex;
    int  _imageIndexForPreloading;
    AVAssetReaderTrackOutput * _imageOutput;
    AVAssetReaderOutputMetadataAdaptor * _imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor * _imageOutputMetadataAdaptor_CV3D;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    double  _imageTimestampWhenFramerateChanged;
    bool  _interrupted;
    bool  _isReplayingManually;
    bool  _manualCommandLineMode;
    bool  _metadataLoadedFromAsset;
    struct opaqueCMSampleBuffer { } * _nextDepthSampleBuffer;
    long long  _nextFrameIndex;
    struct opaqueCMSampleBuffer { } * _nextSampleBuffer;
    double  _nominalFrameRate;
    AVAssetReaderOutputMetadataAdaptor * _oldMotionOutputMetadataAdaptor;
    double  _originalToReplayTimestampDifference;
    NSDictionary * _recordedResultAdaptors;
    NSSet * _recordedResultClasses;
    NSDictionary * _recordedResultGetters;
    unsigned long long  _recordedSensorTypes;
    NSObject<OS_dispatch_queue> * _replayQueue;
    <ARReplaySensorDelegate> * _replaySensorDelegate;
    bool  _replayStarted;
    bool  _running;
    unsigned long long  _sensorDataTypes;
    double  _startTime;
    struct __CVBuffer { } * _synchronizationMarker;
    struct __CVPixelBufferPool { } * _synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession { } * _synchronizationTransferSession;
    bool  _synchronousMode;
    long long  _targetFrameIndex;
    long long  _tick;
    NSObject<OS_dispatch_source> * _timer;
    double  _timestampWhenFramerateChanged;
}

@property float advanceFramesPerSecondMultiplier;
@property (nonatomic, copy) NSSet *customDataClasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic) unsigned long long forcePlaybackFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageIndex;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) bool isReplayingManually;
@property long long nextFrameIndex;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) NSArray *recordedResultClassList;
@property (nonatomic, readonly) NSSet *recordedResultClasses;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic) <ARReplaySensorDelegate> *replaySensorDelegate;
@property (readonly) Class superclass;
@property (getter=isSynchronousMode, nonatomic, readonly) bool synchronousMode;
@property long long targetFrameIndex;

- (void).cxx_destruct;
- (void)_didOutputSensorData:(id)arg1;
- (void)advance;
- (void)advanceFrame;
- (float)advanceFramesPerSecondMultiplier;
- (void)advanceToFrameIndex:(long long)arg1;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (id /* block */)createResultForTimestampGetterBlockFromTimestampedResults:(id)arg1;
- (double)currentTime;
- (id)customDataClasses;
- (id)customDataForTimestamp:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceModel;
- (void)endInterruption;
- (void)endReplay;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)failWithError:(id)arg1;
- (void)fastForwardIndexesToTime:(double)arg1;
- (unsigned long long)forcePlaybackFramesPerSecond;
- (id)getNextAccelerometerData;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextImageData;
- (id)getResultDataForClasses:(id)arg1 atTimestamp:(double)arg2;
- (bool)hasAccelerometerDataForTime:(double)arg1;
- (bool)hasDeviceOrientationDataForTime:(double)arg1;
- (bool)hasGyroDataForTime:(double)arg1;
- (bool)hasImageDataForTimestamp:(double)arg1;
- (bool)hasMoreData;
- (int)imageIndex;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithDataFromFile:(id)arg1;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2 synchronousMode:(bool)arg3;
- (void)initializeAssetReaderWithAsset:(id)arg1 buffersOnly:(bool)arg2;
- (void)interrupt;
- (bool)interrupted;
- (bool)isEqual:(id)arg1;
- (bool)isReplayingManually;
- (bool)isSynchronousMode;
- (void)loadAllMetadata;
- (long long)nextFrameIndex;
- (double)nominalFrameRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)preloadNextPixelBuffers:(int)arg1;
- (void)prepareForReplay;
- (unsigned long long)providedDataTypes;
- (void)readFileMetadataFromAsset:(id)arg1;
- (id)recordedResultClassList;
- (id)recordedResultClasses;
- (unsigned long long)recordedSensorTypes;
- (id)replaySensorDelegate;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (struct __CVBuffer { }*)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer { }*)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
- (void)setCustomDataClasses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForcePlaybackFramesPerSecond:(unsigned long long)arg1;
- (void)setImageIndex:(int)arg1;
- (void)setNextFrameIndex:(long long)arg1;
- (void)setReplaySensorDelegate:(id)arg1;
- (void)setTargetFrameIndex:(long long)arg1;
- (void)start;
- (void)startReplayIfNeeded;
- (void)stop;
- (long long)targetFrameIndex;
- (void)tick;
- (bool)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackTimestampedCV3DDictionaryItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackTimestampedItemsOfClasses:(id)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;

@end
