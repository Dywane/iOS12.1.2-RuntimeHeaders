/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {
    <MTLTexture> * _alphaTexture;
    bool  _apiTransitionPeriod;
    UIColor * _backgroundColor;
    struct optional<float> { 
        union { 
            BOOL __null_state_; 
            float __val_; 
        } ; 
        bool __engaged_; 
    }  _cheekAngle;
    struct optional<unsigned long> { 
        union { 
            BOOL __null_state_; 
            unsigned long long __val_; 
        } ; 
        bool __engaged_; 
    }  _closestLeftCheekVertexID;
    NSData * _colorCubeUserData;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _countTexture;
    bool  _debugFace;
    bool  _debugFaceDraw;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _dstTexture;
    <MTLTexture> * _dstUVTexture;
    void _face3DCenter;
    struct optional<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > { 
        union { 
            BOOL __null_state_; 
            struct accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> { 
                struct cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::rolling_window_plus1_impl<double>, boost::accumulators::tag::rolling_window_plus1>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::rolling_count_impl<double>, boost::accumulators::tag::rolling_count>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_mean_impl<double>, boost::accumulators::tag::immediate_rolling_mean>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_variance_impl<double>, boost::accumulators::tag::rolling_variance>, boost::fusion::nil_> > > > { 
                    struct accumulator_wrapper<boost::accumulators::impl::rolling_window_plus1_impl<double>, boost::accumulators::tag::rolling_window_plus1> { 
                        struct circular_buffer<double, std::__1::allocator<double> > { 
                            double *m_buff; 
                            double *m_end; 
                            double *m_first; 
                            double *m_last; 
                            unsigned long long m_size; 
                            struct allocator<double> { } m_alloc; 
                        } buffer_; 
                    } car; 
                    struct cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::rolling_count_impl<double>, boost::accumulators::tag::rolling_count>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_mean_impl<double>, boost::accumulators::tag::immediate_rolling_mean>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_variance_impl<double>, boost::accumulators::tag::rolling_variance>, boost::fusion::nil_> > > { 
                        struct accumulator_wrapper<boost::accumulators::impl::rolling_count_impl<double>, boost::accumulators::tag::rolling_count> { } car; 
                        struct cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_mean_impl<double>, boost::accumulators::tag::immediate_rolling_mean>, boost::fusion::cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_variance_impl<double>, boost::accumulators::tag::rolling_variance>, boost::fusion::nil_> > { 
                            struct accumulator_wrapper<boost::accumulators::impl::immediate_rolling_mean_impl<double>, boost::accumulators::tag::immediate_rolling_mean> { 
                                double mean_; 
                            } car; 
                            struct cons<boost::accumulators::detail::accumulator_wrapper<boost::accumulators::impl::immediate_rolling_variance_impl<double>, boost::accumulators::tag::rolling_variance>, boost::fusion::nil_> { 
                                struct accumulator_wrapper<boost::accumulators::impl::immediate_rolling_variance_impl<double>, boost::accumulators::tag::rolling_variance> { 
                                    double previous_mean_; 
                                    double sum_of_squares_; 
                                } car; 
                                struct nil_ { } cdr; 
                            } cdr; 
                        } cdr; 
                    } cdr; 
                } accumulators; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _faceConfidenceRollingVariance;
    bool  _faceDetected;
    bool  _faceDetectedReal;
    struct circular_buffer<bool, std::__1::allocator<bool> > { 
        bool *m_buff; 
        bool *m_end; 
        bool *m_first; 
        bool *m_last; 
        unsigned long long m_size; 
        struct allocator<bool> { } m_alloc; 
    }  _faceDetectedRealHistory;
    NSData * _faceKitMeshTexcoords;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _faceKitMeshTris;
    struct FaceKitStreamedData { 
        NSData *verticesPos; 
        NSArray *intrinsics; 
        NSArray *camR; 
        NSArray *camT; 
        NSArray *poseR; 
        NSArray *poseT; 
        NSData *landmarks; 
        float confidence; 
    }  _faceKitStreamedData;
    void _faceModelCenterProjected;
    MTLRenderPassDescriptor * _faceRenderDesc1;
    MTLRenderPassDescriptor * _faceRenderDesc2;
    MTLRenderPassDescriptor * _faceRenderDesc3;
    <MTLTexture> * _facemaskRegionTexture;
    long long  _frameIndex;
    long long  _frameIndexWhenFacekitAllowed;
    double  _gpuEndTime;
    double  _gpuStartTime;
    <MTLBuffer> * _indexBufferImmutable;
    unsigned long long  _indexOfCheekLandmark_bottomLeft;
    unsigned long long  _indexOfCheekLandmark_bottomRight;
    unsigned long long  _indexOfCheekLandmark_topLeft;
    unsigned long long  _indexOfCheekLandmark_topRight;
    NSObject<OS_dispatch_semaphore> * _inflightSemaphore;
    <MTLComputePipelineState> * _kernel_AlphaBlendRGBATextureArray;
    <MTLComputePipelineState> * _kernel_Count;
    <MTLComputePipelineState> * _kernel_CountVertical;
    <MTLRenderPipelineState> * _kernel_Face;
    <MTLComputePipelineState> * _kernel_Relight;
    <MTLComputePipelineState> * _kernel_Slide;
    <MTLLibrary> * _library;
    float  _lightMapsNearFarLerp;
    <MTLTexture> * _lightTexture;
    struct CVAPhotoMetalContext { id x1; id x2; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_3_1_1; } x3; bool x4; } * _metalContext;
    struct vector<FaceVertex, std::__1::allocator<FaceVertex> > { 
        struct FaceVertex {} *__begin_; 
        struct FaceVertex {} *__end_; 
        struct __compressed_pair<FaceVertex *, std::__1::allocator<FaceVertex> > { 
            struct FaceVertex {} *__value_; 
        } __end_cap_; 
    }  _modelVertices;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewProjectionMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _proxyToFaceEffectLerpFinal;
    float  _proxyToFaceEffectLerpTemporal;
    float  _relightingStability;
    <MTLTexture> * _rgbTransformMapContourFarTexture;
    <MTLTexture> * _rgbTransformMapContourNearTexture;
    <MTLTexture> * _rgbTransformMapCurrentFarTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentNearTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentTextureInterpolated;
    <MTLTexture> * _rgbTransformMapStudioFarTexture;
    <MTLTexture> * _rgbTransformMapStudioNearTexture;
    <MTLTexture> * _rgbTransformMapTextureSelectedPtr;
    <MTLTexture> * _slideTexture;
    <MTLTexture> * _srcTexture;
    NSObject<OS_dispatch_queue> * _synchronousRelightingCallbackQueue;
    <MTLTexture> * _tcDepthTexture;
    <MTLRenderPipelineState> * _tcKernel;
    struct TC_MatrixUniforms { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelViewProjectionMatrix; 
    }  _tcMatrixUniformsBuffer;
    MTLRenderPassDescriptor * _tcRenderDesc;
    <MTLTexture> * _tcTexture;
    <MTLTexture> * _texColorCubeStaticArray;
    <MTLTexture> * _texColorCubeUserData;
    <MTLTexture> * _texSelectedColorCube;
    <MTLTexture> * _texStub;
    struct RelightingTransitionData { 
        float proxyToFaceEffectLerp; 
        float originalToRelightEffectLerp; 
        float backgroundAlphaMultiplier; 
        float colorCubeIntensity; 
        float colorCubeLerpSelfToOther; 
        int otherCubeType; 
    }  _transitionData;
    bool  _trustAlpha;
    struct RelightUniforms { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*outSizeInv; 
    }  _uniformBuffer_relight;
    struct SlideUniforms { 
        float center_x; 
        float center_y; 
        float radius; 
        float bgColor_x; 
        float bgColor_y; 
        float bgColor_z; 
        float width; 
        float height; 
    }  _uniformBuffer_slide;
    <MTLTexture> * _vertCountTexture;
    CVAPhotoMTLRingBuffer * _vertexBuffer;
}

@property (readonly) double gpuEndTime;
@property (readonly) double gpuStartTime;
@property (readonly) float relightingStability;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureRenderPipeline;
- (id)create3DTextureWithSize:(unsigned long long)arg1;
- (void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2;
- (void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(const float*)arg5;
- (void)encodeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeLerpNearFarMapsToCommandBuffer:(id)arg1;
- (void)encodeRelightKernelToCommandBuffer:(id)arg1;
- (void)encodeSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeTCKernelToCommandBuffer:(id)arg1;
- (void)encodeVertCountKernelToCommandBuffer:(id)arg1;
- (void)generateModelNormals;
- (double)gpuEndTime;
- (double)gpuStartTime;
- (void)initCommon;
- (void)initKernelFunctions;
- (id)initWithMetalContext:(struct CVAPhotoMetalContext { id x1; id x2; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_3_1_1; } x3; bool x4; }*)arg1;
- (id)loadCube:(id)arg1;
- (void)loadRGBTransformMaps;
- (void)loadRGBTransformMapsOnceTo:(id*)arg1 namePrefix:(const char *)arg2 forIntermediateResults:(bool)arg3;
- (float)relightingStability;
- (void)renderWithSrcImage:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 trustAlpha:(bool)arg3 dstImage:(struct __CVBuffer { }*)arg4 faceKitProcessOutput:(id)arg5 transitionData:(const struct RelightingTransitionData { float x1; float x2; float x3; float x4; float x5; int x6; }*)arg6 colorSim:(id)arg7 disparity:(id)arg8 singleCubeData:(id)arg9 properties:(id)arg10 callbackQueue:(id)arg11 callback:(id /* block */)arg12;
- (void)saveTexture:(id)arg1 toImage:(id)arg2;
- (void)setModelVertices;
- (void)updateFaceKitStreamedDataFromProcessOutput:(id)arg1;
- (void)updateMatrixWithWidth:(int)arg1 height:(int)arg2 camera:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3 pose:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg4;
- (void)updateModelAndPose:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 camera:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2;
- (void)updateUniforms;

@end
