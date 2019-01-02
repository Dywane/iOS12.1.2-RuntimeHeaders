/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {
    unsigned long long  _captureFlags;
    NSArray * _captureStreamSettings;
    int  _captureType;
    bool  _deliverOriginalImage;
    bool  _deliverProcessedImage;
    bool  _deliverSushiRaw;
    struct { 
        double integrationTime; 
        float normalizedSNR; 
        float baseISO; 
        double exposureBias; 
        float gain; 
        unsigned int conversionGain; 
        unsigned int readNoise_1x; 
        unsigned int readNoise_8x; 
        unsigned int aeAvg; 
        unsigned char aeLimitsReached; 
        unsigned char aeStable; 
        unsigned int luxLevel; 
        int logicalFocusLensPosition; 
        int afStatus; 
        int focusingMethod; 
        unsigned int motionDataStatus; 
        unsigned char hrEnabled; 
        unsigned char synchronizedStreamsTelephotoHREnabled; 
        float sifrGain; 
        float synchronizedStreamsTelephotoSIFRGain; 
        float synchronizedStreamsTelephotoGain; 
        unsigned char synchronizedStreamsTelephotoAEStable; 
        double synchronizedStreamsTelephotoIntegrationTime; 
        double synchronizedStreamsTelephotoExposureBias; 
        int synchronizedStreamsTelephotoAFStatus; 
        int synchronizedStreamsTelephotoFocusingMethod; 
        int synchronizedStreamsTelephotoAFStationaryCount; 
        float synchronizedStreamsTelephotoFocusDistance; 
        float synchronizedStreamsTelephotoLensMakersFocusDistance; 
        float synchronizedStreamsTelephotoNormalizedSNR; 
        unsigned int synchronizedStreamsTelephotoConversionGain; 
        unsigned int synchronizedStreamsTelephotoReadNoise_1x; 
        unsigned int synchronizedStreamsTelephotoReadNoise_8x; 
        unsigned int synchronizedStreamsTelephotoAEAvg; 
        unsigned char synchronizedStreamsWideAEStable; 
        int synchronizedStreamsWideFocusPosition; 
        int synchronizedStreamsWideLogicalFocusLensPosition; 
        float synchronizedStreamsWideFocusDistance; 
        float synchronizedStreamsWideLensMakersFocusDistance; 
        int synchronizedStreamsWideAFStatus; 
        int synchronizedStreamsWideAFStationaryCount; 
        long long frameCount; 
    }  _frameStatistics;
    bool  _frameStatisticsAreValid;
    BWStillImageCaptureMetadata * _metadata;
    unsigned long long  _sceneFlags;
    long long  _settingsID;
    int  _tempExpectedClientImageCount;
    int  _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _zeroShutterLagPTS;
    bool  _zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;
}

@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) bool deliverOriginalImage;
@property (nonatomic, readonly) bool deliverProcessedImage;
@property (nonatomic, readonly) bool deliverSushiRaw;
@property (nonatomic, readonly) bool expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } zeroShutterLagPTS;
@property (nonatomic) bool zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

+ (bool)supportsSecureCoding;

- (void)_setFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; unsigned char x17; unsigned char x18; float x19; float x20; float x21; unsigned char x22; double x23; double x24; int x25; int x26; int x27; float x28; float x29; float x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned char x35; int x36; int x37; float x38; float x39; int x40; int x41; long long x42; }*)arg1;
- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (unsigned long long)captureFlags;
- (id)captureStreamSettings;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (int)captureType;
- (void)dealloc;
- (bool)deliverOriginalImage;
- (bool)deliverProcessedImage;
- (bool)deliverSushiRaw;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectReferenceFrameBracketedCaptureSequenceNumber;
- (int)expectedClientImageCount;
- (bool)getFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; unsigned char x17; unsigned char x18; float x19; float x20; float x21; unsigned char x22; double x23; double x24; int x25; int x26; int x27; float x28; float x29; float x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned char x35; int x36; int x37; float x38; float x39; int x40; int x41; long long x42; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 deliverProcessedImage:(bool)arg5 deliverOriginalImage:(bool)arg6 deliverSushiRaw:(bool)arg7 captureStreamSettings:(id)arg8;
- (id)metadata;
- (unsigned long long)sceneFlags;
- (void)setExpectedClientImageCount:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSceneFlags:(unsigned long long)arg1;
- (void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;
- (void)setZeroShutterLagPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setZeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled:(bool)arg1;
- (long long)settingsID;
- (int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })zeroShutterLagPTS;
- (bool)zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

@end
