/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerInitialize : NSObject {
    id  _apiManager;
    PAEKeyer * _keyer;
}

+ (void)setInitialSamples:(struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x1; struct Vec3f {} *x2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_1_1; } x3; }*)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3;

- (bool)calculateInitialMatteWithInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 omSamples:(struct OMSamples { int (**x1)(); bool x2; bool x3; bool x4; bool x5; int x6; struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *> > {} *x7; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_8_1_1; struct Vec3f {} *x_8_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_8_1_3; } x8; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_9_1_1; struct Vec3f {} *x_9_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_9_1_3; } x9; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_10_1_1; struct Vec3f {} *x_10_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_10_1_3; } x10; struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> >, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_1; struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_2; struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > *, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_3_2_1; } x_11_1_3; } x11; }*)arg2 colorPrimaries:(int)arg3 screenColor:(int*)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(bool)arg12 simpleKey:(bool)arg13;
- (void)calculateInitialSamples:(struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; }*)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(bool)arg3 autokeySetupUtil:(id)arg4 samples:(struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x1; struct Vec3f {} *x2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_1_1; } x3; }*)arg5;
- (void)dealloc;
- (bool)findSampleRectsWithInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 screenColor:(int*)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(struct OMSamples { int (**x1)(); bool x2; bool x3; bool x4; bool x5; int x6; struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *> > {} *x7; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_8_1_1; struct Vec3f {} *x_8_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_8_1_3; } x8; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_9_1_1; struct Vec3f {} *x_9_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_9_1_3; } x9; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_10_1_1; struct Vec3f {} *x_10_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_10_1_3; } x10; struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> >, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_1; struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_2; struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > *, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_3_2_1; } x_11_1_3; } x11; }*)arg13 viewingSetupMatte:(bool)arg14 use32x32Histogram:(bool)arg15 simpleKey:(bool)arg16;
- (id)initWithAPIManager:(id)arg1 keyer:(id)arg2;

@end