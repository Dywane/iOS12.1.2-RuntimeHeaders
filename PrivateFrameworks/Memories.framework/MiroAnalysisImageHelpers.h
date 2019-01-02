/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAnalysisImageHelpers : NSObject {
    NSMutableDictionary * _currentFaceRangesKeyedByFaceID;
    unsigned long long  _exifOrientation;
    CIDetector * _faceDetector;
    bool  _faceTrackingEnabled;
    long long  _projectNaturalFrameRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _recordingStartTime;
    NSMutableDictionary * _shotTypeToSampleCountMap;
}

@property (nonatomic) long long projectNaturalFrameRate;

+ (unsigned long long)exifOrientationForUIImageOrientation:(long long)arg1;
+ (unsigned long long)exifOrientationForVideoTrack:(id)arg1;
+ (long long)imageOrientationForEXIFOrientation:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_analyzeColorsInImage:(id)arg1;
- (id)_analyzeColorsInVideoFrame:(struct CGImage { }*)arg1 withOrientation:(unsigned long long)arg2;
- (id)_makeColorAnalysisDictionary:(id)arg1 forImageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_outputFaceRangesWithRemovedFaceIDs:(id)arg1 outputtedFaceRanges:(id*)arg2;
- (long long)_positionForFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_primaryShotType;
- (bool)_processOutputtingFaceRangeWithCGImage:(struct CGImage { }*)arg1 detectionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 faceRanges:(id*)arg3;
- (long long)_shotTypeForFaceBoundsArray:(id)arg1;
- (bool)_startOutputtingFaceRangesWithStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 orientation:(unsigned long long)arg2;
- (void)_stopOutputtingFaceRangesWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 lastFaceRanges:(id*)arg2;
- (void)_updateFaceRangeWithFaceID:(long long)arg1 detectionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 facePosition:(long long)arg3 flags:(unsigned long long)arg4 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_updateShotTypeMapWithFaceBoundsArray:(id)arg1;
- (id)init;
- (void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)processUIImage:(id)arg1 options:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (long long)projectNaturalFrameRate;
- (void)setProjectNaturalFrameRate:(long long)arg1;

@end
