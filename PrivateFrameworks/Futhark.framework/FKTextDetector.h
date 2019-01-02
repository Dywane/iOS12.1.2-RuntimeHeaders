/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

@interface FKTextDetector : NSObject {
    int  _binarizerLimit;
    bool  _createFeaturesForAllConcomps;
    bool  _detectDiacritics;
    bool  _enableBinarizerFiltering;
    struct { 
        int minScale; 
        int maxScale; 
    }  _mergeSettings;
    bool  _minimizeFalseDetections;
    int  _minimumCharacterHeight;
    NSString * _recognitionLanguage;
    bool  _returnSubFeatures;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roi;
    struct FKSession {} * _sessions;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _thresholdingAlgorithm;
    unsigned int  _timeBinarizer;
    unsigned int  _timeConcomps;
    unsigned int  _timeDownscale;
    unsigned int  _timeRecognizer;
    unsigned int  _timeSequences;
}

@property (nonatomic) int binarizerLimit;
@property (nonatomic) bool createFeaturesForAllConcomps;
@property (nonatomic) bool detectDiacritics;
@property (nonatomic) bool enableBinarizerFiltering;
@property (nonatomic) struct { int x1; int x2; } mergeSettings;
@property (nonatomic) bool minimizeFalseDetections;
@property (nonatomic) int minimumCharacterHeight;
@property (nonatomic, copy) NSString *recognitionLanguage;
@property (nonatomic) bool returnSubFeatures;
@property (nonatomic) long long thresholdingAlgorithm;

- (int)binarizerLimit;
- (bool)createFeaturesForAllConcomps;
- (id)createFeaturesForROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 lastID:(long long*)arg3;
- (id)createFeaturesForSessionScale:(int)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originalSize:(struct CGSize { double x1; double x2; })arg3 startID:(long long*)arg4;
- (void)dealloc;
- (bool)detectDiacritics;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { }*)arg1 withRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (bool)enableBinarizerFiltering;
- (id)initWithDimensions:(struct CGSize { double x1; double x2; })arg1;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (void)mergeFeature:(id)arg1 withArray:(id)arg2;
- (struct { int x1; int x2; })mergeSettings;
- (bool)minimizeFalseDetections;
- (int)minimumCharacterHeight;
- (id)recognitionLanguage;
- (void)resetOptions;
- (void)resetTimers;
- (bool)returnSubFeatures;
- (void)runRecognizerOnFeatures:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 lastID:(long long*)arg4;
- (void)setBinarizerLimit:(int)arg1;
- (void)setCreateFeaturesForAllConcomps:(bool)arg1;
- (void)setDetectDiacritics:(bool)arg1;
- (void)setEnableBinarizerFiltering:(bool)arg1;
- (void)setMergeSettings:(struct { int x1; int x2; })arg1;
- (void)setMinimizeFalseDetections:(bool)arg1;
- (void)setMinimumCharacterHeight:(int)arg1;
- (void)setRecognitionLanguage:(id)arg1;
- (void)setReturnSubFeatures:(bool)arg1;
- (void)setThresholdingAlgorithm:(long long)arg1;
- (long long)thresholdingAlgorithm;
- (void)translatePropertiesToOptionsWithNumSessions:(int)arg1;

@end
