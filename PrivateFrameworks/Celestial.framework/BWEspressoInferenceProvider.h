/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWEspressoInferenceProvider : NSObject <BWInferenceExecutable, BWInferenceProvider, BWInferenceSubmittable> {
    NSMutableDictionary * _bindingNamesByRequirement;
    NSMutableArray * _cloneVideoRequirements;
    BWEspressoInferenceContext * _context;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    int  _espressoPriority;
    int  _executionTarget;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
    NSURL * _networkURL;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSMutableArray * _pixelBuffersLockedDuringExecution;
    NSSet * _preventionReasons;
    int  _type;
}

@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (int)_bindPixelBuffer:(struct __CVBuffer { }*)arg1 asAccelerateImageForRequirement:(id)arg2 withBindingName:(id)arg3;
- (int)_ensureEspressoBindingsUsingStorage:(id)arg1;
- (int)_espressoStorageTypeForExecutionTarget:(int)arg1;
- (int)_mapSchedulerToEspressoPriority:(unsigned int)arg1;
- (int)_prepareForInferenceWithWorkQueue:(id)arg1;
- (id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithType:(int)arg1 networkURL:(id)arg2 context:(id)arg3 executionTarget:(int)arg4 schedulerPriority:(unsigned int)arg5 preventionReasons:(id)arg6 resourceProvider:(id)arg7;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarm;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
