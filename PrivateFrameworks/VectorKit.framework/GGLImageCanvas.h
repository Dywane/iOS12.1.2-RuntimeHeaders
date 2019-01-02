/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    bool  _allowAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _canMakeImage;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__value_; 
        } __ptr_; 
    }  _colorBuffer;
    double  _contentScale;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__value_; 
        } __ptr_; 
    }  _depthStencilBuffer;
    struct shared_ptr<ggl::Device> { 
        struct Device {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _flippedRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
        struct __compressed_pair<ggl::IOSurfaceTexture *, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
            struct IOSurfaceTexture {} *__value_; 
        } __ptr_; 
    }  _flippedSurfaceTexture;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _format;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__value_; 
        } __ptr_; 
    }  _msaaResolveBuffer;
    bool  _recreateRenderTarget;
    <GGLRenderQueueSource> * _renderSource;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__value_; 
        } __ptr_; 
    }  _renderTarget;
    struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; } * _renderer;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _resolvedRenderTargetFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _useMultisampling;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass> >="__ptr_"{__compressed_pair<(anonymous namespace)::YFlipPass *, std::__1::default_delete<(anonymous namespace)::YFlipPass> >="__value_"^{YFlipPass {}  _yFlipPass;
}

@property (nonatomic) bool allowAlpha;
@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*imageTexture;
@property (nonatomic, readonly) bool multiSample;
@property (nonatomic) <GGLRenderQueueSource> *renderSource;
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*renderTarget;
@property (nonatomic, readonly) struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::DebugRenderer>' */ struct x8; }*renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */
@property (nonatomic, readonly) struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; } resolvedRenderTargetFormat;
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allowAlpha;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (void)createRenderTarget;
- (void)dealloc;
- (void)destroyRenderTarget;
- (void)didDrawView;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)finalRenderTarget;
- (struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)finalSurface;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)imageTexture;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMultisampling:(bool)arg3 taskContext:(const struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; }*)arg4 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg5;
- (bool)multiSample;
- (id)renderSource;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)renderTarget;
- (void)renderWithTimestamp:(double)arg1 completion:(struct function<void ()>={type=[24C] {})arg2;
- (struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; }*)renderer;
- (struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; })resolvedRenderTargetFormat;
- (void)setAllowAlpha:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setRenderSource:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (void)willDrawView;

@end