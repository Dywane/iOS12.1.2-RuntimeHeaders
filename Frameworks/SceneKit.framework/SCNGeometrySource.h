/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometrySource : NSObject <NSSecureCoding> {
    unsigned short  _componentCount;
    short  _componentType;
    NSData * _data;
    long long  _dataOffset;
    long long  _dataStride;
    struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; } * _meshSource;
    unsigned char  _mkSemantic;
    <MTLBuffer> * _mtlBuffer;
    long long  _mtlVertexFormat;
    NSString * _semantic;
    long long  _vectorCount;
}

@property (nonatomic, readonly) long long bytesPerComponent;
@property (nonatomic, readonly) long long componentsPerVector;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long dataOffset;
@property (nonatomic, readonly) long long dataStride;
@property (nonatomic, readonly) bool floatComponents;
@property (nonatomic, readonly) NSString *semantic;
@property (nonatomic, readonly) long long vectorCount;

+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
+ (id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2;
+ (id)dataByConvertingDoublesToFloats:(const double*)arg1 count:(long long)arg2;
+ (id)dataWithPointArray:(const struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3;
+ (id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
+ (id)geometrySourceWithColorComponents:(const float*)arg1 count:(long long)arg2 hasAlpha:(bool)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2;
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg1;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (void)_clearC3DCache;
- (short)_componentType;
- (void)_printData;
- (long long)bytesPerComponent;
- (long long)componentsPerVector;
- (id)data;
- (long long)dataOffset;
- (long long)dataStride;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)floatComponents;
- (id)init;
- (id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)initWithMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg1;
- (const struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)meshSource;
- (id)mkSemantic;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (id)semantic;
- (void)setMkSemantic:(id)arg1;
- (long long)vectorCount;

@end
